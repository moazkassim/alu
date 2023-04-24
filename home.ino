#include <WiFi.h>
#include <WebServer.h>
#include "webpageCode.h";
#include <Arduino_JSON.h>
/* Put your SSID & Password */
 

const char *ssid = "moaz";
const char *password = "11111111";


const int ALU_DELAY = 1000;
const int ALU_A_ADD = 18;
const int ALU_B_ADD = 5;
const int ALU_Com = 17;
const int ALU_A_SUB = 16;
const int ALU_B_SUB = 4;
const int ALU_A_OR = 21;
const int ALU_B_OR = 19;
const int ALU_A_AND = 23;
const int ALU_B_AND = 22;
/* Put IP Address details
  IPAddress local_ip(192,168,1,1);
  IPAddress gateway(192,168,1,1);
  IPAddress subnet(255,255,255,0);
*/
WebServer server(80);
void handleRoot()
{
  server.send(200, "text/html", webpageCode);
}

void setup()
{

  pinMode(ALU_A_ADD, OUTPUT); // A_ADD
  pinMode(ALU_B_ADD, OUTPUT); // B_ADD
  pinMode(ALU_Com, OUTPUT);   // Com
  pinMode(ALU_A_SUB, OUTPUT); // A_SUB
  pinMode(ALU_B_SUB, OUTPUT); // B_SUB
  pinMode(ALU_Com, OUTPUT);   // Com
  pinMode(ALU_A_OR, OUTPUT);  // A_OR
  pinMode(ALU_B_OR, OUTPUT);  // B_OR
  pinMode(ALU_A_AND, OUTPUT); // A_AND
  pinMode(ALU_B_AND, OUTPUT); // B_AND
  pinMode(2, INPUT);          // OR_OUT
  pinMode(15, INPUT);         // Dif _OUT
  pinMode(36, INPUT);         // B _OUT
  pinMode(39, INPUT);         // Sum_OUT
  pinMode(34, INPUT);         // C_OUT
  pinMode(35, INPUT);         // AND_OUT
  Serial.begin(115200);
  Serial.println("Connecting to network");

  WiFi.begin(ssid, password);
  Serial.println();
  Serial.println("NodeMCU Started!");
  while (WiFi.status() != WL_CONNECTED)
  {
    // Wait for connection
    delay(500);
    Serial.println(".");
  }

  Serial.print("Connected Successfully");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  server.begin();
  server.on("/", handleRoot);
  server.on("/alu-inputs", handleAluInputs);
  server.on("/led1", handleLed1);
  server.on("/led2", handleLed2);
  server.on("/com", handleALUCom);
  server.on("/led4", handleLed4);
  server.on("/led5", handleLed5);
  server.on("/led7", handleLed7);
  server.on("/led8", handleLed8);
  server.on("/led9", handleLed9);
  server.on("/led10", handleLed10);
  server.begin();
  Serial.println("HTTP server started");
}
void handleAluInputs()
{
  if (server.method() == HTTP_GET)
  {
    JSONVar response;
    response["led1"] = digitalRead(ALU_A_ADD);
    response["led2"] = digitalRead(ALU_B_ADD);
    response["com"] = digitalRead(ALU_Com);
    response["led4"] = digitalRead(ALU_A_SUB);
    response["led5"] = digitalRead(ALU_B_SUB);
    response["led7"] = digitalRead(ALU_A_OR);
    response["led8"] = digitalRead(ALU_B_OR);
    response["led9"] = digitalRead(ALU_A_AND);
    response["led10"] = digitalRead(ALU_B_AND);
    String stringResponse = JSON.stringify(response);
    server.send(200, "application/json", stringResponse);
  }
  else
  {
    server.send(405, "text/plain", "Method Not Allowed");
  }
}
void handleLed1()
{
  if (server.method() == HTTP_GET)
  {
    int ledStatus = digitalRead(ALU_A_ADD);
    Serial.println("GET Request" + String(ledStatus));
    server.send(200, "text/plain", String(ledStatus));
  }
  else if (server.method() == HTTP_POST)
  {

    int ledStatus = digitalRead(ALU_A_ADD);
    Serial.println("Post Request" + String(ledStatus));
    int newStatus = !ledStatus;
    digitalWrite(ALU_A_ADD, newStatus);
    delay(ALU_DELAY);
    int sum = digitalRead(39);
    int carry = digitalRead(34);
    JSONVar response;
    response["led"] = newStatus;
    response["sum"] = sum;
    response["carry"] = carry;
    String stringResponse = JSON.stringify(response);

    server.send(200, "application/json", stringResponse);
  }
  else
  {
    server.send(405, "text/plain", "Method Not Allowed");
  }
}

void handleLed2()
{
  if (server.method() == HTTP_GET)
  {
    int ledStatus = digitalRead(ALU_B_ADD);
    Serial.println("GET Request" + String(ledStatus));
    server.send(200, "text/plain", String(ledStatus));
  }
  else if (server.method() == HTTP_POST)
  {

    int ledStatus = digitalRead(ALU_B_ADD);
    Serial.println("Post Request" + String(ledStatus));
    int newStatus = !ledStatus;
    digitalWrite(ALU_B_ADD, newStatus);
    delay(ALU_DELAY);
    int sum = digitalRead(39);
    int carry = digitalRead(34);
    JSONVar response;
    response["led"] = newStatus;
    response["sum"] = sum;
    response["carry"] = carry;
    String stringResponse = JSON.stringify(response);
    server.send(200, "application/json", stringResponse);
  }
  else
  {
    server.send(405, "text/plain", "Method Not Allowed");
  }
}
void handleALUCom()
{
  if (server.method() == HTTP_GET)
  {
    int ledStatus = digitalRead(ALU_Com);
    Serial.println("GET Request" + String(ledStatus));
    server.send(200, "text/plain", String(ledStatus));
  }
  else if (server.method() == HTTP_POST)
  {

    int ledStatus = digitalRead(ALU_Com);
    Serial.println("Post Request" + String(ledStatus));
    int newStatus = !ledStatus;
    digitalWrite(ALU_Com, newStatus);
    delay(ALU_DELAY);
    int sum = digitalRead(39);
    int carry = digitalRead(34);
    int sub = digitalRead(15);
    int borrow = digitalRead(36);
    JSONVar response;
    response["com"] = newStatus;
    response["sum"] = sum;
    response["carry"] = carry;
    response["sub"] = sub;
    response["borrow"] = borrow;
    String stringResponse = JSON.stringify(response);
    server.send(200, "application/json", stringResponse);
  }
  else
  {
    server.send(405, "text/plain", "Method Not Allowed");
  }
}
// SUB
void handleLed4()
{
  if (server.method() == HTTP_GET)
  {
    int ledStatus = digitalRead(ALU_A_SUB);
    Serial.println("get Requset" + String(ledStatus));
    server.send(200, "text/plain", String(ledStatus));
  }
  else if (server.method() == HTTP_POST)
  {
    int ledStatus = digitalRead(ALU_A_SUB);
    Serial.println("Post Request" + String(ledStatus));
    int newStatus = !ledStatus;
    digitalWrite(ALU_A_SUB, newStatus);
    delay(ALU_DELAY);
    int sub = digitalRead(15);
    int borrow = digitalRead(36);
    JSONVar response;
    response["led"] = newStatus;
    response["sub"] = sub;
    response["borrow"] = borrow;
    String stringResponse = JSON.stringify(response);
    server.send(200, "application/json", stringResponse);
  }
  else
  {
    server.send(405, "text/plain", "Method Not Allowed");
  }
  Serial.print("Dif: ");
  Serial.println(digitalRead(15)); // Dif
  Serial.print("Bout: ");
  Serial.println(digitalRead(36)); // Bout
}

void handleLed5()
{
  if (server.method() == HTTP_GET)
  {
    int ledStatus = digitalRead(ALU_B_SUB);
    Serial.println("get Requset" + String(ledStatus));
    server.send(200, "text/plain", String(ledStatus));
  }
  else if (server.method() == HTTP_POST)
  {
    int ledStatus = digitalRead(ALU_B_SUB);
    Serial.println("Post Request" + String(ledStatus));
    int newStatus = !ledStatus;
    digitalWrite(ALU_B_SUB, newStatus);
    delay(ALU_DELAY);
    int sub = digitalRead(15);
    int borrow = digitalRead(36);
    JSONVar response;
    response["led"] = newStatus;
    response["sub"] = sub;
    response["borrow"] = borrow;
    String stringResponse = JSON.stringify(response);
    server.send(200, "application/json", stringResponse);
  }
  else
  {
    server.send(405, "text/plain", "Method Not Allowed");
  }
  Serial.print("Dif: ");
  Serial.println(digitalRead(15)); // Dif
  Serial.print("Bout: ");
  Serial.println(digitalRead(36)); // Bout
}

// OR_A
void handleLed7()
{
  if (server.method() == HTTP_GET)
  {
    int ledStatus = digitalRead(ALU_A_OR);
    Serial.println("get Requset" + String(ledStatus));
    server.send(200, "text/plain", String(ledStatus));
  }
  else if (server.method() == HTTP_POST)
  {
    int ledStatus = digitalRead(ALU_A_OR);
    Serial.println("Post Request" + String(ledStatus));
    int newStatus = !ledStatus;
    digitalWrite(ALU_A_OR, newStatus);
    delay(ALU_DELAY);
    int sum = digitalRead(2);

    JSONVar response;
    response["led"] = newStatus;
    response["sum"] = sum;

    String stringResponse = JSON.stringify(response);
    server.send(200, "application/json", stringResponse);
  }
  else
  {
    server.send(405, "text/plain", "Method Not Allowed");
  }
  Serial.print("OR :");
  Serial.println(digitalRead(2)); // OR_out
}
// OR_B
void handleLed8()
{
  if (server.method() == HTTP_GET)
  {
    int ledStatus = digitalRead(ALU_B_OR);
    Serial.println("get Requset" + String(ledStatus));
    server.send(200, "text/plain", String(ledStatus));
  }
  else if (server.method() == HTTP_POST)
  {
    int ledStatus = digitalRead(ALU_B_OR);
    Serial.println("Post Request" + String(ledStatus));
    int newStatus = !ledStatus;
    digitalWrite(ALU_B_OR, newStatus);
    delay(ALU_DELAY);
    int sum = digitalRead(2);

    JSONVar response;
    response["led"] = newStatus;
    response["sum"] = sum;

    String stringResponse = JSON.stringify(response);
    server.send(200, "application/json", stringResponse);
  }
  else
  {
    server.send(405, "text/plain", "Method Not Allowed");
  }
  Serial.print("OR :");
  Serial.println(digitalRead(2)); // OR_out
}

void handleLed9()
{
  if (server.method() == HTTP_GET)
  {
    int ledStatus = digitalRead(ALU_A_AND);
    Serial.println("get Requset" + String(ledStatus));
    server.send(200, "text/plain", String(ledStatus));
  }
  else if (server.method() == HTTP_POST)
  {
    int ledStatus = digitalRead(ALU_A_AND);
    Serial.println("Post Request" + String(ledStatus));
    int newStatus = !ledStatus;
    digitalWrite(ALU_A_AND, newStatus);
    delay(ALU_DELAY);
    int AND = digitalRead(35);

    JSONVar response;
    response["led"] = newStatus;
    response["and"] = AND;

    String stringResponse = JSON.stringify(response);
    server.send(200, "application/json", stringResponse);
  }
  else
  {
    server.send(405, "text/plain", "Method Not Allowed");
  }
  Serial.print("AND :");
  Serial.println(digitalRead(35)); // AND_out
}

void handleLed10()
{
  if (server.method() == HTTP_GET)
  {
    int ledStatus = digitalRead(ALU_B_AND);
    Serial.println("get Requset" + String(ledStatus));
    server.send(200, "text/plain", String(ledStatus));
  }
  else if (server.method() == HTTP_POST)
  {
    int ledStatus = digitalRead(ALU_B_AND);
    Serial.println("Post Request" + String(ledStatus));
    int newStatus = !ledStatus;
    digitalWrite(ALU_B_AND, newStatus);
    delay(ALU_DELAY);
    int AND = digitalRead(35);

    JSONVar response;
    response["led"] = newStatus;
    response["and"] = AND;

    String stringResponse = JSON.stringify(response);
    server.send(200, "application/json", stringResponse);
  }
  else
  {
    server.send(405, "text/plain", "Method Not Allowed");
  }
  Serial.print("AND :");
  Serial.println(digitalRead(35)); // AND_out
}

void loop()
{
  server.handleClient();
}
