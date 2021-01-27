// Events
/*document.querySelector('.clear-tasks').addEventListener('click', function(e) {
    console.log('Hello World');
    console.log(e);
    e.preventDefault();
})*/

document.querySelector('.clear-tasks').addEventListener('click', onClick);

function onClick(e) {
    console.log(e);
    console.log(e.type);
    console.log(e.target);
    console.log(e.target.id);
    console.log(e.target.className);
    console.log(e.target.classList);
    console.log(e.timeStamp);
    console.log(e.clientX);
    console.log(e.clientY);
    console.log(e.offsetX);
    console.log(e.offsetY);

    e.preventDefault();
}

// click, dblclick, mouseup, mousedown, mouseenter, mouseleave,
// mouseover, mouseout, mousemove, mousewheel
// keyup, keydown, keypress
// focus, blur, submit

const card = document.querySelector('.card');
const heading = document.querySelector('#task-title');

card.addEventListener('mousemove', runEvent);

function runEvent(e) {
    heading.textContent = `rgb(x=${e.offsetX},y=${e.offsetY},120)`;
    document.body.style.backgroundColor = `rgb(${e.offsetX},${e.offsetY},120)`;

}

// input:text
// input:button
// heading ==> 

// Event Deligation

document.body.addEventListener('click', deleteItem);

function deleteItem(e) {
    if(e.target.classList.contains('fa-remove')) {
        
        e.target.parentElement.parentElement.remove();
    }
   
    e.preventDefault();
}


