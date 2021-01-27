// Replace element

// create element
const newHeading = document.createElement('h2');
// Add id
newHeading.id = 'task-title';
// new text node
newHeading.appendChild(document.createTextNode('Task List'));

// get the old heading
const oldHeading = document.querySelector('#task-title');
// parent
const cardAction = document.querySelector('.card-action');

cardAction.replaceChild(newHeading, oldHeading);
console.log(newHeading, oldHeading);


// remove element
cardAction.remove();