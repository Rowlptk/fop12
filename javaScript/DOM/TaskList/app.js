// Define UI vars
const form = document.querySelector('#task-form');
const taskInput = document.querySelector('#task');
const taskList = document.querySelector('.collection');
const clearBtn = document.querySelector('.clear-tasks');
const filter = document.querySelector('#filter');

// call all event Listeners
loadEventListeners();

// Load all event Listeners
function loadEventListeners() {
    // add task event
    form.addEventListener('submit', addTask);
    // remove task event
    taskList.addEventListener('click', removeTask);
    // clear tasks event
    clearBtn.addEventListener('click', clearTasks);
    // filter task event
    filter.addEventListener('keyup', filterTasks);
}

// filter Tasks
function filterTasks(e) {
    const text = e.target.value.toLowerCase();
    const li = document.querySelectorAll('.collection-item');
    li.forEach(function(task) {
        const item = task.firstChild.textContent.toLowerCase();
        if(item.indexOf(text) != -1) {
            task.style.display = 'block';
        } 
        else {
            task.style.display = 'none';
        }
    })
}



// clear Tasks
function clearTasks() {
    taskList.innerHTML = '';
}

// remove task
function removeTask(e) {
    if(e.target.classList.contains('fa-remove')) {
        if(confirm('Are you Sure?')) {
            e.target.parentElement.parentElement.remove();
        }
    }
}


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