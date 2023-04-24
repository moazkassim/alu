  const char webpageCode[] =
R"=====(

<!DOCTYPE html>
<html lang="en">
  <head>
    <title>One bit ALU</title>
    <meta charset="utf-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=Edge" />
    <meta name="viewport" content="width = device - width, intial-scale= 1.0" />
    <title>document</title>
    <!-- <link rel="stylesheet" href="styles.css" /> -->
    <style>
      body {
        font-family: arial, tahoma;
        margin: 0px;
      }
      #container {
        background-color: #bbbfca;
      }
      #img1 {
        background-image: url("https://images.unsplash.com/photo-1523655223303-4e9ef5234587?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxzZWFyY2h8OXx8cHJvY2Vzc29yfGVufDB8fDB8fA%3D%3D&auto=format&fit=crop&w=1000&q=60");
        -webkit-background-size: cover; /*css 3*/
        -moz-background-size: cover; /*css 3*/
        -o-background-size: cover; /*css 3*/
        background-size: cover; /*css 3*/
        height: 500px;
        display: flex;
        flex-direction: column;
        justify-content: center;
      }
      .head {
        display: flex;
        flex-direction: row;
        justify-content: space-evenly;
        align-items: center;

        text-align: center;
        width: 100%;

        padding: 10px 30;

        height: 300px;
      }
      .h11 {
        height: 50px;
        display: flex;
        align-items: center;
        justify-content: center;
        border-top: 20px;
        text-align: center;

        background: #ced6e0;
        font-family: "Gill Sans", "Gill Sans MT", Calibri, "Trebuchet MS",
          sans-serif;
        color: #2f3542;
      }
      .btn {
        font-family: "Franklin Gothic Medium", "Arial Narrow", Arial, sans-serif;
        background-color: #e84118;
        color: white;
        padding: 8px 28px;
        border-radius: 28px;
        line-height: 24px;
        font-size: 25px;
        font-weight: 400;
        letter-spacing: 0.02em;
        border: none;
        outline: none;
        position: static;
        overflow: hidden;
        cursor: pointer;
        height: 60px;
        width: 130px;
      }
      .h22 {
        color: greenyellow;
      }

      #intro {
        font-size: x-large;
        color: black;
      }
      #start {
        background-color: #fff;
        height: 400px;
      }
      #box {
        padding-left: 170px;
        padding-right: 170px;
      }
      #one {
        margin: 0 auto;
        font-size: 50px;

        border-top: 4px solid #fff;
        border-bottom: 4px solid #fff;
        padding: 5px;
        color: white;
      }
      #button {
        background: none;
        color: #fff;
        margin-top: 35px;
        font-size: 25px;
        border: 2px solid #fff;
        padding: 9px 9px;
      }
      .navbar {
        background-color: #252f31;
        color: #fff;
        overflow: hidden;
        padding: 0 170px 0 170px;
      }

      .navbar h2 {
        float: left;
      }

      .navbar h2 span {
        color: #2ecc71;
      }

      .navbar ul {
        list-style: none;
        margin-left: 100px;
        overflow: hidden;
        float: right;
      }
      .navbar ul li {
        padding: 10px;
        float: left;
      }
      .navbar ul li a {
        color: #fff;
        text-decoration: none;
      }
      .navbar ul li.active a,
      .navbar ul li a:hover {
        color: #30b576;
      }
      #slider-button-div {
        display: flex;
        justify-content: center;
        align-items: center;
      }
      .features {
        overflow: hidden;
        padding-top: 40px;
        padding-bottom: 50px;
      }
      .features .feat {
        float: left;
        width: 32.33333%;
        height: 150px;
        padding-left: 170px;
        padding-right: 170px;
      }
      .features .feat h2 {
        text-transform: uppercase;
        color: #444;
      }
      #feat-p {
        line-height: 1.7;
        color: #999;
        padding: 0 30px 0 0;
      }
      .section {
        background-color: #f2f2f2;
        overflow: hidden;
      }
      .section-header {
        text-transform: uppercase;
        color: #444;
        padding-left: 170px;
        padding-right: 170px;
      }
      .section-content {
        background-color: #f2f2f2;
        overflow: hidden;
        display: flex;
        flex-direction: row;
        justify-content: space-evenly;
        align-items: center;
        padding-left: 170px;
        padding-right: 170px;

        text-align: center;
      }
      .section-content-left {
        flex: 1;
      }
      .section-content-left img {
        width: 450px;
        height: 450px;
        margin-bottom: 40px;
      }
      .section-content-right {
        flex: 2;
        padding: 20px;
        display: flex;
        flex-direction: row;
      }
      .section-header h1 {
        width: 300px;
        font-size: 30px;
        display: flex;
        justify-content: center;
        margin-left: 400px;
        margin-bottom: 40px;

        border-top: 4px solid #252f31;
        border-bottom: 4px solid #252f31;
        padding: 6px;
        color: #252f31;
      }
      .section-content-right {
        display: flex;
        justify-content: center;
        flex-direction: row;
      }

      .inner_section_one {
        display: flex;
        justify-content: center;
        flex-direction: column;
        margin-bottom: 20px;
        margin-right: 60px;
      }
      .label {
        display: flex;
        flex-direction: row;
        margin-bottom: 30px;
      }
      .inner_section_two {
        display: flex;
        flex-direction: column;
        margin-bottom: 100px;
      }
      .label h3 {
        margin-right: 15px;
      }
      .out_box {
        text-align: center;
        display: flex;
        justify-content: center;
        align-items: center;

        color: white;
        width: 90px;
        height: 90px;
        font-size: 20px;
        font-weight: 100;
        border-radius: 90px;
      }
      .footer {
        background-color: #191e22;
        color: white;
        padding: 20px;
        text-align: center;
        height: 150px;
        margin-top: 50px;
        font-family: "Gill Sans", "Gill Sans MT", Calibri, "Trebuchet MS";
        font-size: 20px;
      }
      .footer ul {
        list-style: none;
        padding-left: 0;
        margin: 20px 0 0;
      }
      .footer ul li {
        display: inline-block;
        margin-right: 10px;
      }
      .footer ul li img {
        width: 50px;
      }
    </style>
  </head>

  <body>
    <div id="container">
      <div id="img1">
        <h1 id="one">One bit ALU</h1>
        <div id="slider-button-div">
          <button id="button">Learn More</button>
        </div>
      </div>
      <div class="navbar">
        <div class="container">
          <h2>A<span>LU</span></h2>
          <ul>
            <li class="active"><a href="#">INTERO</a></li>
            <li><a href="#">ADDER</a></li>
            <li><a href="#">SUBTRACTOR</a></li>
            <li><a href="#">AND</a></li>
            <li><a href="#">OR</a></li>
            <li><a href="#">CREATOR</a></li>
          </ul>
        </div>
      </div>
    </div>
    <div>
      <div id="box">
        <div id="features">
          <div id="feat1">
            <h2>Description</h2>
            <p id="feat-p">
              An arithmetic-logic unit is the part of a central processing
              unitthat carries out arithmetic and logic operations on the
              operands in computer instruction words. In some processors, the
              ALU is divided into two units: an arithmetic unit (AU) and a logic
              unit (LU). Some processors contain more than one AU -- for
              example, one for fixed-point operations and another for
              floating-point operations. In computer systems, floating-point
              computations are sometimes done by a floating-point unit (FPU) on
              a separate chip called a numeric coprocessor.
            </p>
          </div>
        </div>
      </div>
      <div class="section">
        <div class="section-header">
          <h1>Adder Gate</h1>
        </div>
        <div class="section-content">
          <div class="section-content-left">
            <img
              src="https://media.geeksforgeeks.org/wp-content/uploads/3-57.png"
            />
          </div>
          <div class="section-content-right">
            <div class="inner_section_one">
              <div class="label">
                <h3>Input A :</h3>
                <button
                  class="btn"
                  id="led1"
                  type="button"
                  onclick="handleLed1()"
                >
                  low
                </button>
              </div>
              <div class="label">
                <h3>Input B :</h3>
                <button
                  class="btn"
                  id="led2"
                  type="button"
                  onclick="handleLed2()"
                >
                  low
                </button>
              </div>
              <div class="label">
                <h3>Carry In :</h3>
                <button
                  class="btn"
                  id="addercom"
                  type="button"
                  onclick="handleadderCom()"
                >
                  low
                </button>
              </div>
            </div>
            <div class="inner_section_two">
              <h3>Sum Output :</h3>
              <div style="background-color: #e84118" id="sum" class="out_box">
                <div>sum</div>
              </div>
              <h3>Carry Output :</h3>

              <div style="background-color: #e84118" id="carry" class="out_box">
                <div>carry</div>
              </div>
            </div>
          </div>
        </div>
      </div>
      <div style="height: 100px"></div>
      <div class="section">
        <div class="section-header">
          <h1>Subtractor Gat</h1>
        </div>
        <div class="section-content">
          <div class="section-content-left">
            <img
              src="https://www.elprocus.com/wp-content/uploads/Full-Subtarctor-Logical-Diagram-768x388.png"
            />
          </div>
          <div class="section-content-right">
            <div class="inner_section_one">
              <div class="label">
                <h3>Input A :</h3>
                <button
                  class="btn"
                  id="led4"
                  type="button"
                  onclick="handleLed4()"
                >
                  low
                </button>
              </div>
              <div class="label">
                <h3>Input B :</h3>
                <button
                  class="btn"
                  id="led5"
                  type="button"
                  onclick="handleLed5()"
                >
                  low
                </button>
              </div>
              <div class="label">
                <h3>Borrow :</h3>
                <button
                  class="btn"
                  id="subcom"
                  type="button"
                  onclick="handlesubCom()"
                >
                  low
                </button>
              </div>
            </div>
            <div class="inner_section_two">
              <h3>Difference Output :</h3>
              <div style="background-color: #e84118" id="sub" class="out_box">
                <div>sub</div>
              </div>
              <h3>Borrow Output :</h3>
              <div style="background-color: #e84118" id="bor" class="out_box">
                <div>borrow</div>
              </div>
            </div>
          </div>
        </div>
      </div>

      <div style="height: 100px"></div>

      <div class="section">
        <div class="section-header">
          <h1>OR Gate</h1>
        </div>
        <div class="section-content">
          <div class="section-content-left">
            <img src="https://i.ibb.co/37gyWtt/Screenshot-1.png" />
          </div>
          <div class="section-content-right">
            <div class="inner_section_one">
              <div class="label">
                <h3>Input A :</h3>
                <button
                  class="btn"
                  id="led7"
                  type="button"
                  onclick="handleLed7()"
                >
                  low
                </button>
              </div>
              <div class="label">
                <h3>Input B :</h3>
                <button
                  class="btn"
                  id="led8"
                  type="button"
                  onclick="handleLed8()"
                >
                  low
                </button>
              </div>
            </div>

            <div class="inner_section_two">
              <h3>Sum Output :</h3>
              <div style="background-color: #e84118" id="or" class="out_box">
                <div>OR</div>
              </div>
            </div>
          </div>
        </div>
      </div>
      <div style="height: 100px"></div>
      <div class="section">
        <div class="section-header">
          <h1>AND Gate</h1>
        </div>
        <div class="section-content">
          <div class="section-content-left">
            <img
              src="https://i.ibb.co/CmjtSgC/Screenshot-2022-03-18-113400.png"
            />
          </div>
          <div class="section-content-right">
            <div class="inner_section_one">
              <div class="label">
                <h3>Input A :</h3>
                <button
                  class="btn"
                  id="led9"
                  type="button"
                  onclick="handleLed9()"
                >
                  low
                </button>
              </div>
              <div class="label">
                <h3>Input B :</h3>
                <button
                  class="btn"
                  id="led10"
                  type="button"
                  onclick="handleLed10()"
                >
                  low
                </button>
              </div>
            </div>
            <div class="inner_section_two">
              <h3>Mult Output :</h3>
              <div style="background-color: #e84118" id="and" class="out_box">
                <div>MULT</div>
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
    <!--start footer-->
    <div class="footer">
      <div class="container">
        <span> Copyright &copy; Moaz Ahmed Kassim</span> <br />
        <span> Second Year </span> <br />
        <span> Electrical Engineering </span>
        <ul>
          <li>
            <img src="https://cdn-icons-png.flaticon.com/128/270/270021.png" />
          </li>
          <li>
            <img
              src="https://cdn-icons.flaticon.com/png/128/3670/premium/3670032.png?token=exp=1647734286~hmac=ec62b68759ef9e90b9cd344d3937a585"
            />
          </li>
          <li>
            <img src="https://cdn-icons-png.flaticon.com/128/145/145807.png" />
          </li>
          <li>
            <img
              src="https://cdn-icons.flaticon.com/png/128/3670/premium/3670127.png?token=exp=1647734591~hmac=8a28bd2433b864139e335f3534fb274d"
            />
          </li>
        </ul>
      </div>
    </div>
    <!--end footer-->

    <script>
      let led1 = document.getElementById("led1");
      let led2 = document.getElementById("led2");
      let addercom = document.getElementById("addercom");
      let led4 = document.getElementById("led4");
      let led5 = document.getElementById("led5");
      let subcom = document.getElementById("subcom");
      let led7 = document.getElementById("led7");
      let led8 = document.getElementById("led8");
      let led9 = document.getElementById("led9");
      let led10 = document.getElementById("led10");

      let addr_sum = document.getElementById("sum");
      let adder_carry = document.getElementById("carry");
      let sub_sub = document.getElementById("sub");
      let sub_borrow = document.getElementById("bor");
      let or = document.getElementById("or");
      let and = document.getElementById("and");
      const ipAddress = "/";

      const statusColorsObj = {
        0: "#FF0000",
        1: "#00FF00",
      };
      const statusTextObj = {
        0: "low",
        1: "high",
      };

      function initialize() {
        // led1.textContent = "loading";
        // led2.textContent = "loading";
        // com.textContent = "loading";
        // led4.textContent = "loading";
        // led5.textContent = "loading";
        // led7.textContent = "loading";
        // led8.textContent = "loading";
        // led9.textContent = "loading";
        // led10.textContent = "loading";
        fetch(ipAddress + "alu-inputs", {
          method: "GET",
        })
          .then(function (response) {
            return response.json();
          })
          .then(function (currentLedStatusesJson) {
            led1.style.backgroundColor =
              statusColorsObj[currentLedStatusesJson.led1];
            led1.textContent = statusTextObj[currentLedStatusesJson.led1];
            led2.style.backgroundColor =
              statusColorsObj[currentLedStatusesJson.led2];
            led2.textContent = statusTextObj[currentLedStatusesJson.led2];
            com.style.backgroundColor =
              statusColorsObj[currentLedStatusesJson.com];
            com.textContent = statusTextObj[currentLedStatusesJson.com];
            led4.style.backgroundColor =
              statusColorsObj[currentLedStatusesJson.led4];
            led4.textContent = statusTextObj[currentLedStatusesJson.led4];
            led5.style.backgroundColor =
              statusColorsObj[currentLedStatusesJson.led5];
            led5.textContent = statusTextObj[currentLedStatusesJson.led5];
            led7.style.backgroundColor =
              statusColorsObj[currentLedStatusesJson.led7];
            led7.textContent = statusTextObj[currentLedStatusesJson.led7];
            led8.style.backgroundColor =
              statusColorsObj[currentLedStatusesJson.led8];
            led8.textContent = statusTextObj[currentLedStatusesJson.led8];
            led9.style.backgroundColor =
              statusColorsObj[currentLedStatusesJson.led9];
            led9.textContent = statusTextObj[currentLedStatusesJson.led9];
            led10.style.backgroundColor =
              statusColorsObj[currentLedStatusesJson.led10];
            led10.textContent = statusTextObj[currentLedStatusesJson.led10];
          })
          .catch(function (err) {
            console.log("Booo", err);
          });
      }
      initialize();
      function handleLed1() {
        led1.textContent = "Loading";
        fetch(ipAddress + "led1", {
          method: "POST",
        })
          .then(function (response) {
            return response.json();
          })
          .then(function (newStatusJson) {
            console.log("newStatusJson", newStatusJson);
            // console.log(newStatusText);
            if (newStatusJson.led == 0) {
              led1.style.backgroundColor = "#FF0000";
              led1.textContent = "low";
            }
            if (newStatusJson.led == 1) {
              led1.style.backgroundColor = "#00FF00";
              led1.textContent = "HIGH";
            }
            if (newStatusJson.sum == 0) {
              addr_sum.style.backgroundColor = "#FF0000";
            }
            if (newStatusJson.sum == 1) {
              addr_sum.style.backgroundColor = "#00FF00";
            }
            if (newStatusJson.carry == 0) {
              adder_carry.style.backgroundColor = "#FF0000";
            }
            if (newStatusJson.carry == 1) {
              adder_carry.style.backgroundColor = "#00FF00";
            }
          })
          .catch(function (err) {
            console.log("Booo", err);
          });
      }

      function handleLed2() {
        led2.textContent = "Loading";
        fetch(ipAddress + "led2", {
          method: "POST",
        })
          .then(function (response) {
            return response.json();
          })
          .then(function (newStatusJson) {
            console.log("newStatusJson", newStatusJson);
            // console.log(newStatusText);
            if (newStatusJson.led == 0) {
              led2.style.backgroundColor = "#FF0000";
              led2.textContent = "low";
            }
            if (newStatusJson.led == 1) {
              led2.style.backgroundColor = "#00FF00";
              led2.textContent = "HIGH";
            }
            if (newStatusJson.sum == 0) {
              addr_sum.style.backgroundColor = "#FF0000";
            }
            if (newStatusJson.sum == 1) {
              addr_sum.style.backgroundColor = "#00FF00";
            }
            if (newStatusJson.carry == 0) {
              adder_carry.style.backgroundColor = "#FF0000";
            }
            if (newStatusJson.carry == 1) {
              adder_carry.style.backgroundColor = "#00FF00";
            }
          })
          .catch(function (err) {
            console.log("Booo", err);
          });
      }

      function handleadderCom() {
        addercom.textContent = "Loading";
        fetch(ipAddress + "com", {
          method: "POST",
        })
          .then(function (response) {
            return response.json();
          })
          .then(function (newStatusJson) {
            console.log("newStatusJson", newStatusJson);
            if (newStatusJson.com == 0) {
              addercom.style.backgroundColor = "#FF0000";
              addercom.textContent = "low";
            }
            if (newStatusJson.com == 1) {
              addercom.style.backgroundColor = "#00FF00";
              addercom.textContent = "high";
            }
            if (newStatusJson.sum == 0) {
              addr_sum.style.backgroundColor = "#FF0000";
            }
            if (newStatusJson.sum == 1) {
              addr_sum.style.backgroundColor = "#00FF00";
            }
            if (newStatusJson.carry == 0) {
              adder_carry.style.backgroundColor = "#FF0000";
            }
            if (newStatusJson.carry == 1) {
              adder_carry.style.backgroundColor = "#00FF00";
            }
          })
          .catch(function (err) {
            console.log("Booo", err);
          });
      }

      function handleLed4() {
        led4.textContent = "Loading";
        fetch(ipAddress + "led4", {
          method: "POST",
        })
          .then(function (response) {
            return response.json();
          })
          .then(function (newStatusJson) {
            console.log(newStatusJson);
            if (newStatusJson.led == 0) {
              led4.style.backgroundColor = "#FF0000";
              led4.textContent = "low";
            }
            if (newStatusJson.led == 1) {
              led4.style.backgroundColor = "#00FF00";
              led4.textContent = "high";
            }
            if (newStatusJson.sub == 0) {
              sub_sub.style.backgroundColor = "#FF0000";
            }
            if (newStatusJson.sub == 1) {
              sub_sub.style.backgroundColor = "#00FF00";
            }
            if (newStatusJson.borrow == 0) {
              sub_borrow.style.backgroundColor = "#FF0000";
            }
            if (newStatusJson.borrow == 1) {
              sub_borrow.style.backgroundColor = "#00FF00";
            }
          })
          .catch(function (err) {
            console.log("Booo", err);
          });
      }

      function handleLed5() {
        led5.textContent = "Loading";
        fetch(ipAddress + "led5", {
          method: "POST",
        })
          .then(function (response) {
            return response.json();
          })
          .then(function (newStatusJson) {
            console.log(newStatusJson);
            if (newStatusJson.led == 0) {
              led5.style.backgroundColor = "#FF0000";
              led5.textContent = "low";
            }
            if (newStatusJson.led == 1) {
              led5.style.backgroundColor = "#00FF00";
              led5.textContent = "high";
            }
            if (newStatusJson.sub == 0) {
              sub_sub.style.backgroundColor = "#FF0000";
            }
            if (newStatusJson.sub == 1) {
              sub_sub.style.backgroundColor = "#00FF00";
            }
            if (newStatusJson.borrow == 0) {
              sub_borrow.style.backgroundColor = "#FF0000";
            }
            if (newStatusJson.borrow == 1) {
              sub_borrow.style.backgroundColor = "#00FF00";
            }
          })
          .catch(function (err) {
            console.log("Booo", err);
          });
      }

      function handlesubCom() {
        subcom.textContent = "Loading";
        fetch(ipAddress + "com", {
          method: "POST",
        })
          .then(function (response) {
            return response.json();
          })
          .then(function (newStatusJson) {
            console.log("newStatusJson", newStatusJson);
            if (newStatusJson.com == 0) {
              subcom.style.backgroundColor = "#FF0000";
              subcom.textContent = "low";
            }
            if (newStatusJson.com == 1) {
              subcom.style.backgroundColor = "#00FF00";
              subcom.textContent = "high";
            }
            if (newStatusJson.sub == 0) {
              sub_sub.style.backgroundColor = "#FF0000";
            }
            if (newStatusJson.sub == 1) {
              sub_sub.style.backgroundColor = "#00FF00";
            }
            if (newStatusJson.borrow == 0) {
              sub_borrow.style.backgroundColor = "#FF0000";
            }
            if (newStatusJson.borrow == 1) {
              sub_borrow.style.backgroundColor = "#00FF00";
            }
          })
          .catch(function (err) {
            console.log("Booo", err);
          });
      }

      function handleLed7() {
        led7.textContent = "Loading";
        fetch(ipAddress + "led7", {
          method: "POST",
        })
          .then(function (response) {
            return response.json();
          })
          .then(function (newStatusJson) {
            console.log(newStatusJson);
            if (newStatusJson.led == 0) {
              led7.style.backgroundColor = "#FF0000";
              led7.textContent = "low";
            }
            if (newStatusJson.led == 1) {
              led7.style.backgroundColor = "#00FF00";
              led7.textContent = "high";
            }
            if (newStatusJson.sum == 0) {
              or.style.backgroundColor = "#FF0000";
            }
            if (newStatusJson.sum == 1) {
              or.style.backgroundColor = "#00FF00";
            }
          })
          .catch(function (err) {
            console.log("Booo", err);
          });
      }

      function handleLed8() {
        led8.textContent = "Loading";
        fetch(ipAddress + "led8", {
          method: "POST",
        })
          .then(function (response) {
            return response.json();
          })
          .then(function (newStatusJson) {
            console.log(newStatusJson);
            if (newStatusJson.led == 0) {
              led8.style.backgroundColor = "#FF0000";
              led8.textContent = "low";
            }
            if (newStatusJson.led == 1) {
              led8.style.backgroundColor = "#00FF00";
              led8.textContent = "high";
            }
            if (newStatusJson.sum == 0) {
              or.style.backgroundColor = "#FF0000";
            }
            if (newStatusJson.sum == 1) {
              or.style.backgroundColor = "#00FF00";
            }
          })
          .catch(function (err) {
            console.log("Booo", err);
          });
      }

      function handleLed9() {
        led9.textContent = "Loading";
        fetch(ipAddress + "led9", {
          method: "POST",
        })
          .then(function (response) {
            return response.json();
          })
          .then(function (newStatusJson) {
            console.log(newStatusJson);
            if (newStatusJson.led == 0) {
              led9.style.backgroundColor = "#FF0000";
              led9.textContent = "low";
            }
            if (newStatusJson.led == 1) {
              led9.style.backgroundColor = "#00FF00";
              led9.textContent = "high";
            }
            if (newStatusJson.and == 0) {
              and.style.backgroundColor = "#FF0000";
            }
            if (newStatusJson.and == 1) {
              and.style.backgroundColor = "#00FF00";
            }
          })
          .catch(function (err) {
            console.log("Booo", err);
          });
      }

      function handleLed10() {
        led10.textContent = "Loading";
        fetch(ipAddress + "led10", {
          method: "POST",
        })
          .then(function (response) {
            return response.json();
          })
          .then(function (newStatusJson) {
            console.log(newStatusJson);
            if (newStatusJson.led == 0) {
              led10.style.backgroundColor = "#FF0000";
              led10.textContent = "low";
            }
            if (newStatusJson.led == 1) {
              led10.style.backgroundColor = "#00FF00";
              led10.textContent = "high";
            }
            if (newStatusJson.and == 0) {
              and.style.backgroundColor = "#FF0000";
            }
            if (newStatusJson.and == 1) {
              and.style.backgroundColor = "#00FF00";
            }
          })
          .catch(function (err) {
            console.log("Booo", err);
          });
      }
    </script>
  </body>
</html>

)=====";
