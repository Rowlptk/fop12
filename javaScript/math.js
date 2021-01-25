const num1 = 100;
const num2 = 50;
let val;

// Simple math with numbers

val = num1 + num2;
val = num1 - num2;
val = num1 * num2;
val = num1 / num2;
val = num1 % num2;
val = num1 ** num2;
console.log(val);

// Math object
val = Math.PI;
val = Math.E;
val = Math.round(2.4);
val = Math.round(2.5);
val = Math.ceil(2.01);
val = Math.floor(2.99);
val = Math.sqrt(64);
val = Math.abs(-64);
val = Math.pow(2,3);
val = Math.min(2,33,44,55,1,-2,0);
val = Math.max(2,33,44,55,1,-2,0);
val = Math.random();

val = Math.ceil(Math.random() * 6);

// 0.00000000001 *6 ==> 0.0000000006==> 0
// 0.99999999999 * 6 ==> 5.999999999==> 5

console.log(val);

