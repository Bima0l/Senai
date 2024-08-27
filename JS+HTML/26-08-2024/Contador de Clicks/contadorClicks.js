let contador = 0;

document.getElementById("meuBotao").addEventListener("click", function() {
    contador++;
    document.getElementById("contador").innerText = contador;
});

