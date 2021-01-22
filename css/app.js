document.querySelector('#password2').addEventListener('keyup', check);

function check() {

    let pass1 = document.querySelector('#password').value;
    let pass2 = document.querySelector('#password2').value;

    if(pass1 == pass2) {
        document.querySelector('#correct').style.display = 'inline';
    }
    else {
        document.querySelector('#correct').style.display = 'none';
    }
}