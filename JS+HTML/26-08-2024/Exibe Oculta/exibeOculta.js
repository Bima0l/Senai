document.addEventListener('DOMContentLoaded', function() {
    let conteudo = document.querySelector('.conteudo');

    document.getElementById('meuExibir').addEventListener('click', function() {
        conteudo.style.display = 'block';
    });

    document.getElementById('meuOcultar').addEventListener('click', function() {
        conteudo.style.display = 'none';
    });
});
