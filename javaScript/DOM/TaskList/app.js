// Define UI vars
const form = document.querySelector('#task-form');
const taskInput = document.querySelector('#task');
const taskList = document.querySelector('.collection');


form.addEventListener('submit', addTask);

// Add Task
function addTask(e) {
    if(taskInput.value === '') {
        alert('Add a Task')
    } else {
        // create li
        const li = document.createElement('li');
        // add class
        li.className = 'collection-item';
        // create text
        const text = document.createTextNode(taskInput.value);
        // append text
        li.appendChild(text);


        // link 
        const link = document.createElement('a');
        // set attribute
        link.setAttribute('href', '#');
        // add class
        link.className = 'delete-item secondary-content';
        // add icon
        link.innerHTML = '<i class="fa fa-remove"></i>';
        // append link to li
        li.appendChild(link);

        // append li to taskList
        taskList.appendChild(li);
    }
    
    taskInput.value = '';

    e.preventDefault();
}