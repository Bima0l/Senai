function verifica(numero) {
    // Verifica se o resto da divisão do número por 2 é 0
    if (numero % 2 === 0) {
      return "par"; // O número é par
    } else {
      return "ímpar"; // O número é ímpar
    }
  }
  
  // Exemplo de uso da função
  console.log(verifica(4)); // Saída: "par" (4 é par)
  console.log(verifica(7)); // Saída: "ímpar" (7 é ímpar)
  console.log(verifica(3)); // Saída: "ímpar" (3 é ímpar)
  console.log(verifica(8)); // Saída: "par" (8 é par)