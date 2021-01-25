const name = "Jhon";
const age = 31;
const job = 'Web Developer';
const city = 'Miami';

let html;

html = '<ul><li>Name : ' + name + '</li><li>Age : ' + age +
        '</li><li>Job : ' + job + '</li><li>City : ' + city +
        '</li></ul>';

function hello() {
    // alert("Hello");
    return 'Hello 2021!';
}

html = `<ul>
        <li> Name : ${name} </li>
        <li> Age : ${age} </li>
        <li> Job : ${job} </li>
        <li> City : ${city} </li>
        <li> ${23+45} </li>
        <li> ${hello()} </li>
        <li> ${age > 30? 'Over 30' : 'Under 30'} </li>
        </ul>
        ` 

document.body.innerHTML = html;