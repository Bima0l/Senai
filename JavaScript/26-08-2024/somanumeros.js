function somaNumeros() {
const numero=[2,5,9,10];
const soma = numero.reduce((accumulator, currentvalue) => accumulator+currentvalue,0);
    return soma;
      
     
    }
console.log(somaNumeros());
  