function multiplicaArray(array, n) {
    // Usa o método map para multiplicar cada elemento do array por n
    return array.map(elemento => elemento * n);
  }
  
  // Exemplos de uso da função
  console.log(multiplicaArray([1, 2, 3, 4], 2)); 
  console.log(multiplicaArray([5, 10, 15], 3));  
  console.log(multiplicaArray([0, -1, 2], 4));   