document.addEventListener('DOMContentLoaded', function() {
    let input = document.getElementById('meuInput');
    let botao = document.getElementById('meuBotao');
    let resultado = document.getElementById('resultado');

    botao.addEventListener('click', function() {
        resultado.textContent = input.value;
    });
});