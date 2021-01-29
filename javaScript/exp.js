let val = [1,3,5,2,4,6,8,7,9,10];
let val2 = [];

val.forEach(function(item) {
    let square = item**2;
    val2.push(square);
})

// val2.forEach(function(item, index){
//     document.querySelector(`ul li:nth-child(${index+1})`).innerHTML = item;
// })

/*
document.querySelector('ul li:nth-child(1)').innerHTML = `${val2[0]}`;
document.querySelector('ul li:nth-child(2)').innerHTML = `${val2[1]}`;
document.querySelector('ul li:nth-child(3)').innerHTML = `${val2[2]}`;
*/


let ul = document.querySelector('ul');


val2.forEach(function(item) {
    const li = document.createElement('li');
    li.innerHTML = item;
    ul.appendChild(li);
})








  