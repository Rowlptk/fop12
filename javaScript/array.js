const numbers = [43, 56, 33, 23, 44, 36, 5];
const numbers2 = new Array(22,45,33,76,54);
const fruit = ['Apple', 'Banana', 'Orange', 'Pear'];
const mixes = [22, 'Hello', undefined, null, {a:1, b:1}, new Date()];

let val;

// Get Array length
val = numbers.length;

val = numbers[5];

numbers[6] = 6

// Mutating arrays
// Adding to end
numbers.push(1000);
// Adding to front
numbers.unshift(120);
// splice
numbers.splice(3,0,900)
// take out from end
numbers.pop();
// take out from front
numbers.shift();
// splice to remove
numbers.splice(7,1)

console.log(val);
console.log(numbers);

document.body.innerHTML = numbers;