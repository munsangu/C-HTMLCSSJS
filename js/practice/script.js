// const calculator = {
//   plus: function (a, b) {
//     return a + b
//   },
//   minus: function (a, b) {
//     return a - b
//   },
//   multiply: function (a, b) {
//     return a * b
//   },
//   divide: function (a, b) {
//     return a / b
//   },
//   powOf: function (a, b) {
//     return a ** b
//   }
//  }
//  const plusResult = calculator.plus(2, 3)
//  const minusResult = calculator.minus(plusResult, 10)
//  const mulitiplyResult = calculator.multiply(10, minusResult)
//  const divideResult = calculator.divide(mulitiplyResult, plusResult)
//  const powOfResust = calculator.powOf(divideResult, minusResult)

//  console.log("더하기 : "+plusResult)
//  console.log("빼기 : "+minusResult)
//  console.log("곱하기 : "+mulitiplyResult)
//  console.log("나누기(몫) : "+divideResult)
//  console.log("제곱 : "+powOfResust)

// const age = parseInt(prompt("How old are you? "))

// if(isNaN(age) || age < 0 ){
//   console.log("Please write a real positive number.")
// }
// else if(age < 18){
//   console.log("You are too young. You can't drink this.")
// }
// else if(age >= 18 && age <=50 ){
//   console.log("You can drink this.")
// }
// else if(age >= 51 && age <= 80) {
//   console.log("You should exercise.")
// }
// else if(age === 100) {
//   console.log("Wow, You are wise.")
// }
// else if(age > 80) {
//   console.log("You can do whatever you want.")
// }

const h1 = document.querySelector("div.hello:first-child h1")
function handleTitleClick() {
  h1.style.color = "green"
}
function handleMouseEnter() {
  h1.innerText = "Mouse is here!"
}
function handleMouseLeave() {
  h1.innerText = "Mouse is gone!"
}
function handleWindowResize() {
  document.body.style.backgroundColor = "red"
}
function handleWindowCopy() {
  alert("Copier!")
}
function handleWindowOffline() {
  alert("SOS no WIFI")
}
function handleWindowOnline() {
  alert("Coooooool!")
}
h1.addEventListener("click",handleTitleClick)
// console.dir(h1)
h1.addEventListener("mouseenter", handleMouseEnter)
h1.addEventListener("mouseleave", handleMouseLeave)

window.addEventListener("resize", handleWindowResize)
window.addEventListener("copy",handleWindowCopy)
window.addEventListener("offline",handleWindowOffline)
window.addEventListener("online",handleWindowOnline)