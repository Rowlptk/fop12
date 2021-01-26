// Create Element
const li = document.createElement('li');

// Add Class
li.className = 'collection-item';

// Add id
li.id = 'new-item';

// Add attribute
li.setAttribute('title', 'New Item');

// create text
const text = document.createTextNode('List Item 6');

// append
li.appendChild(text);

// create link
const link = document.createElement('a');
// add classes
link.className = 'delete-item secondary-content';
// set attribute
link.setAttribute('href','#');
// add i to li
link.innerHTML = '<i class="fa fa-remove"></i>';

// append link to li
li.appendChild(link);

// append li to ul
document.querySelector('ul.collection').appendChild(li);

console.log(li);
console.log(link);