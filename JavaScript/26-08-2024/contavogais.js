function contaVogais(str) {
    const vogais = ['a', 'e', 'i', 'o', 'u'];
    let contador = 0;
  
    for (let i = 0; i < str.length; i++) {
      let caractereAtual = str[i].toLowerCase();
      if (vogais.includes(caractereAtual)) {
        contador++;
      }
    }
  
    return contador;
  }
  
  const resultado = contaVogais("Bianca");
  console.log(resultado);
  
