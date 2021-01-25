// Data Types
// Primitive
// String
const name1 = "John Doe";
console.log(typeof(name1));

// Number
let age = 45;
console.log(typeof(age));
age = 45.67;
console.log(typeof(age));

// Boolean
let isHoliday = true;
console.log(typeof(isHoliday));
// true / false

// Undefined
let car;
console.log(typeof(car));

// null
let box = null;
console.log(typeof(box));

// Refrenced

// Array
const hobbies = ['movies', 'music', 122, true];
console.log(typeof(hobbies));

// Object literals
const address = {
    city: 'Boston',
    state: 'MA'
};
console.log(typeof(address));

const today = new Date();
console.log(today);
console.log(typeof(today));

let myFunction = function () {
    console.log("Hello");
}

console.log(myFunction);
console.log(myFunction());
console.log(typeof(myFunction));

let val;

// Number to string
val = 5
val = String(5);
val = String(4+4)
console.log(val)
console.log(typeof(val))

// Boolean tostring
val = String(true);

val = String(new Date());
val = String([1,2,3,4]);
console.log(val);
console.log(typeof(val));


// String to Number:
val = Number('5');
val = Number(true);
val = Number(false);
val = Number(null);
val = Number('hello');
val = Number('33.45');
val = Number('33 45');
val = Number([1,2,3]);

val = parseInt('33.45');
val = parseFloat('33.45');

console.log(val);
console.log(typeof(val));

const val1 = String(5);
const val2 = 6;
const sum = Number(val1 + val2);

console.log(sum);

let sum1 = '5' + 6 + 7;
let sum2 = 5 + 6 + '7';
console.log(sum1,sum2);







