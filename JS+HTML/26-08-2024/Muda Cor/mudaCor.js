document.addEventListener('DOMContentLoaded', function() {
    let paragrafo = document.getElementById('textoColorido');

    paragrafo.addEventListener('click', function() {
        paragrafo.style.backgroundColor = 'purple';
    });
});
