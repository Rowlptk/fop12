const firstName = 'William';
const lastName = 'Johnson';
const age = 36;
const str = 'Hello there my name is Brad';


let val;

// concatenation
val = firstName + lastName;
val = firstName + ' ' + lastName;

// Append
val = 'Brad';
val += ' Traversy';
// Escaping
val = 'Hello, \' my\n name is ' + firstName +' and I am ' + age;

// Length
val = firstName.length;

// lower and upper
val = firstName.toLowerCase()
val = firstName.toUpperCase()

val = firstName[1];

// indexOf()
val = firstName.indexOf('am');
// multiple occurence of character in string
// val = firstName.lastIndexOf('l');

// Slice
// William
val = firstName.slice(0,4);
val = firstName.slice(-6,-2);

// Split()
const tags = 'web design,web development,programming';
val = tags.split(',');

const str1 = 'Hello there my name is Brad brad brad brAd';
// val = str1.replace('brad', 'Rabindra');
val = str1.replace(/brad/ig, 'Rabindra');

console.log(val);
