function inverteString(str) {
    // Divide a string em um array de caracteres, inverte o array e junta os caracteres de volta em uma string
    return str.split('').reverse().join('');
  }
  
  // Exemplos de uso da função
  console.log(inverteString("olá")); // troca a posições das letras
  console.log(inverteString("Bianca"));