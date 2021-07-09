// import random from './getRandom'
// // 산술 연산자(arithemetic operator)

// console.log(1 + 2)
// console.log(5 - 7)
// console.log(3 * 4)
// console.log(10 / 2)
// console.log(7 % 5)

// // 할당 연산자(assignment operator)

// let a = 2
// // a = a + 1
// a += 1

// console.log(a)

// // 비교 연산자(comparison operator)

// const c = 1
// const d = 1

// console.log(c === d)  // 일치 연산자
// console.log(c !== d)
// console.log(c < d)
// console.log(c > d)
// console.log(c <= d)
// console.log(c >= d)

// function isEqual(x,y) {
//   return x === y
// }

// console.log(isEqual(1, 1))
// console.log(isEqual(2, '2'))

// // 논리 연산자(logical operator)

//  const x = 1 === 1
//  const y = 'AB' === 'AB'
//  const z = false
 
//  console.log(x)
//  console.log(y)
//  console.log(z)

//  console.log('&&: ', x && y && z)
//  console.log('||: ', x || y || z)
//  console.log('!: ', !x)

// // 삼항 연산자(ternary operator)

// const t = 1 < 2

// if(t) {
//   console.log('참')
// }else{
//   console.log('거짓')
// }

// console.log(t ? '참' : '거짓')

// // 조건문(If statement)
// const r = random()

// switch(r) {
//   case 0:
//     console.log('r is 0')
//     break
//   case 2:
//     console.log('r is 2')
//     break
//   case 4:
//     console.log('r is 4')
//     break
//     default:
//       console.log('rest....')
// }

// if(r === 0){
//   console.log('r is 0')
// }else if(r === 2){
//   console.log('r is 2')
// }else if(r === 4){
//   console.log('r is 4')
// }
// else
// {
//   console.log('rest...')
// }

// 반복문(For statement)
// for (시작조건; 종료조건; 변화조건)

// const ulEl = document.querySelector('ul')

// // console.log(ulEl)

// for(let i = 0; i < 10; i+=1) {
//   const li = document.createElement('li')
//   li.textContent = `list-${i + 1}`
//   if((i + 1) % 2 === 0) {
//     li.addEventListener('click', function() {
//       console.log(li.textContent)
//     })
//   }
//   ulEl.appendChild(li)
// }

// 변수 유효범위(Variable Scope)
// var, let, const 

// function scope() {
//   if (true) {
//     const a = 123
//     console.log(a)
//   }
// }
// scope()

// <자료>형 변환(Type conversion)

// Truthy(참 같은 값)
// true, {}, [], 1,2, 'false', -12, '3.14'...

// Fasly(거짓 같은 값)
// false, '', null, undefined, 0, -0, naN(not a Number)

// if(true) {
//   console.log(123)
// }

// 함수 

// function sum(x,y) {
//   if(x < 2) {
//     return
//   }
//   return x + y
// }

// console.log(sum(1,2))
// console.log(sum(7,3))

// function add() {
//   console.log(arguments)
//   return arguments[0] + arguments[1]
// }

// console.log(add(7,3))

// // 화살표 함수
// // () => {} vs function () {}

// const double = function(x) {
//   return x * 2
// }
// console.log('double: ', double(7))

// const doubleArrow = x => x * 2
// console.log('doubleArrow: ',doubleArrow(7))

// const names = x => ({name: 'HERO'})
// console.log('name: ',names(7))

// 즉시 실행 함수 (함수 끝나면, 세미콜론 사용 권장)
// IIFE, Immediately-Invoked Function Expression

// const a = 7
// function double() {
//   console.log(a * 2)
// }
// double();

// (function () {
//   console.log(a * 2)
// }) ();

// (function () {
//   console.log(a * 2)
// }());


// 호이스팅(Hoisting)
// 함수 선언부가 유효범위 최상단으로 끌어올려지는 현상

// const a = 7 

// double()

// function double() {
//   console.log(a * 2)
// }

// 타이머 함수
// setTimeout(함수, 시간): 일정 시간 후 함수 실행(단위 = ms )
// setInterval(함수, 시간): 시간 간격마다 함수 실행
// clearTimeout(): 설정된 Timeout 함수를 종료
// clearInterval(): 설정된 Interval 함수를 종료

// const timer = setTimeout( () => {
//   console.log('Ironman')
// }, 3000)

// const h1El = document.querySelector('h1')
// h1El.addEventListener('click', () => {
//   clearTimeout(timer)
// })

// const timer = setInterval( () => {
//   console.log('Ironman')
// }, 3000)

// const h1El = document.querySelector('h1')
// h1El.addEventListener('click', () => {
//   clearInterval(timer)
// })

// 콜백(Callback)
// 함수의 인수로 사용되는 함수

// setTimeout(함수, 시간)

function timeout(cb) {
  setTimeout(() => {
    console.log('Ironman')
    cb()
  }, 3000);
}
timeout(() => {
console.log('Done!')
})