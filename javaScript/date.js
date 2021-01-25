// let val;

// //const today = new Date();
// let birthday = new Date('9-10-1981 11:25:03');

// birthday = new Date(1981, 13, 10, 11, 25, 03, 000);

// birthday = new Date(-10000000000000) // ms

// // 0 ms ==> 1970 jan 1 5:30

// val = today.getMonth() + 1;
// val = today.getDate();
// val = today.getDay() + 1;
// val = today.getFullYear();
// val = today.getHours();
// val = today.getMinutes();
// val = today.getSeconds();
// val = today.getMilliseconds();
// val = today.getTime();

// digital clock
function clock() {
    const today = new Date();
    document.querySelector('h1').innerHTML = today.toLocaleTimeString();
}

clock();
moveClock();
//document.querySelector('h1').addEventListener('load', moveClock);

function moveClock() {
    console.log("click");
    setInterval(clock, 1000);
}


// console.log(val);

// console.log(today);
// console.log(birthday);

// DOM Manipulation

// Countdown timer