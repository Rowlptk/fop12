const button = document.querySelector('#convert');
const button2 = document.querySelector('#currency');


button.addEventListener('click', conversion);
button2.addEventListener('click', currencyConvert);

function conversion() {
    const fah = Number(document.querySelector('#FtoC').value);
    const cel = (5/9)*(fah-32);
    document.querySelector('#Celcius').innerHTML = `${cel.toFixed(2)} &deg;C`;
}

function currencyConvert() {
    const usd = Number(document.querySelector('#UsdToNpr').value);
    const npr = usd*116.42;
    document.querySelector('#NPR').innerHTML = `Npr ${npr}`;
}

// 5/9 x (F-32).



//Usd to Npr