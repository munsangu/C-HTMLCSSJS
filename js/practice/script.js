const calculator = {
  plus: function (a, b) {
    return a + b
  },
  minus: function (a, b) {
    return a - b
  },
  multiply: function (a, b) {
    return a * b
  },
  divide: function (a, b) {
    return a / b
  },
  powOf: function (a, b) {
    return a ** b
  }
 }
 const plusResult = calculator.plus(2, 3)
 const minusResult = calculator.minus(plusResult, 10)
 const mulitiplyResult = calculator.multiply(10, minusResult)
 const divideResult = calculator.divide(mulitiplyResult, plusResult)
 const powOfResust = calculator.powOf(divideResult, minusResult)

 console.log("더하기 : "+plusResult)
 console.log("빼기 : "+minusResult)
 console.log("곱하기 : "+mulitiplyResult)
 console.log("나누기(몫) : "+divideResult)
 console.log("제곱 : "+powOfResust)