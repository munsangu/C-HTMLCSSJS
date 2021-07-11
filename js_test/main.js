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

// function timeout(cb) {
//   setTimeout(() => {
//     console.log('Ironman')
//     cb()
//   }, 3000);
// }
// timeout(() => {
// console.log('Done!')
// })

// 생성자 함수
// function User(first, last) {
//   this.firstName = first
//   this.lastName = last
// }
// User.prototype.getFullName = function () {
//   return `${this.firstName} ${this.lastName}`
// }
 
// const hero = new User('Hero','Ironman')
// const hero2 = new User('Hero2', 'Thor')
// const hero3 = new User('Hero3', 'Hurk')

// console.log(hero.getFullName())
// console.log(hero2.getFullName())
// console.log(hero3.getFullName())

// this
// 일반(Normal) 함수는 호출 위치에 따라 this 정의
// 화살표(Arrow) 함수는 자신이 선언된 함수 범위에서 this 정의

// const hero = {
//   name:'Hero',
//   normal: function () {
//     console.log(this.name)
//   },
//   arrow: () => {
//     console.log(this.name)
//   }
// }
// hero.normal()
// hero.arrow()

// const hero2 = {
//   name: 'Hurk',
//   normal: hero.normal,
//   arrow: hero.arrow
// }
// hero2.normal()
// hero2.arrow()

// const timer = {
//   name: 'Ironman',
//   timeout: function () {
//     setTimeout(() => {
//       console.log(this.name)
//     }, 2000)
//   }
// }
// timer.timeout()

// ES6 Classes

// function User(first, last) {
//   this.firstName = first
//   this.lastName = last
// }
// User.prototype.getFullName = function () {
//   return `${this.firstName} ${this.lastName}`
// }
 
// class User{
//   constructor(first, last) {
//     this.firstName = first
//     this.lastName = last
//   }
//   getFullName() {
//     return `${this.firstName} ${this.lastName}`
//   }
// }

// const hero = new User('Hero','Ironman')
// const hero2 = new User('Hero2', 'Thor')
// const hero3 = new User('Hero3', 'Hurk')

// console.log(hero.getFullName())
// console.log(hero2.getFullName())
// console.log(hero3.getFullName())

// class Vehicle {
//   constructor(name, wheel) {
//     this.name = name
//     this.wheel = wheel
//   }
// }
// const myVehicle = new Vehicle('운송수단', 2)
// console.log(myVehicle)

// class Bicycle extends Vehicle {
//   constructor(name, wheel){
//     super(name, wheel)
//   }
// }
// const myBicycle = new Bicycle('삼천리', 2)
// const dauhterBicycle = new Bicycle('세발', 3)
// console.log(myBicycle)
// console.log(dauhterBicycle)

// class Car extends Vehicle {
//   constructor(name, wheel, license){
//     super(name, wheel)
//     this.license = license
//   }
// }
// const myCar = new Car('람보르기니', 4, true)
// const daughterCar = new Car('포르쉐', 4, false)
// console.log(myCar)
// console.log(daughterCar)

// const str = '012 34567'
// const str2 = 'theiron@gmial.com'
// const str3 = '     Hello world  '

// console.log(str.length)
// console.log('0123'.length)
// console.log(str.indexOf('0123'))
// console.log(str.indexOf('Ironman') !==-1)
// console.log(str.slice(0,3))
// console.log(str.slice(4,8))
// console.log(str.replace('012','Ironman'))
// console.log(str.replace(' 34567',''))
// console.log(str2.match(/.+(?=@)/)[0])
// console.log(str3.trim())

// const pi = 3.14159265258979
// console.log(pi)

// const str = pi.toFixed(2)
// console.log(str)
// console.log(typeof str)

// const integer = parseInt(str)
// const float = parseFloat(str)
// console.log(integer)
// console.log(float)
// console.log(typeof integer, typeof float)

// console.log('abs: ',Math.abs(-12))
// console.log('min: ', Math.min(2,8))
// console.log('max: ',Math.max(2,8))
// console.log('ceil: ', Math.ceil(3.14))   // 올림
// console.log('floor: ',Math.floor(3.14))  // 내림
// console.log('round: ',Math.round(3.14))  // 반올림
// console.log('random: ',Math.random())

// const numbers = [1, 2, 3, 4]
// const fruits = ['Apple', 'Banana', 'Cherry']

// console.log(numbers)
// console.log(numbers[2])
// console.log(fruits)
// console.log(fruits[2])

// .length

// const numbers = [1, 2, 3, 4]
// const fruits = ['Apple', "Banana", 'Cherry']

// console.log(numbers.length)
// console.log(fruits.length)
// console.log([1,2].length)

// console.log([].length)

// .concat()

// const numbers = [1, 2, 3, 4]
// const fruits = ['Apple', "Banana", 'Cherry']

// console.log(numbers.concat(fruits))
// console.log(numbers)
// console.log(fruits)

// .forEach()

// const numbers = [1, 2, 3, 4]
// const fruits = ['Apple', "Banana", 'Cherry']

// fruits.forEach(function (fruit, i) {
//   console.log(fruit, i)
// })

// .map()

// const numbers = [1, 2, 3, 4]
// const fruits = ['Apple', "Banana", 'Cherry']

// const a = fruits.forEach((fruit, i) => {
//   console.log(`${fruit}-${i}`)
// })
// console.log(a)

// const b = fruits.map((fruit, i) => ({
//   id: i,
//   name: fruit
// }))
// console.log(b)

// .filter()

// const numbers = [1, 2, 3, 4]
// const fruits = ['Apple', "Banana", 'Cherry']

// const a = numbers.map(number => number <3)
// console.log(a)

// const b = numbers.filter(number => number <3)
// console.log(b)

// console.log(numbers)

// .find() .findIndex()

// const numbers = [1, 2, 3, 4]
// const fruits = ['Apple', "Banana", 'Cherry']

// const a = fruits.find(fruit => /^C/.test(fruit))
// console.log(a)
// const b = fruits.findIndex(fruit => /^C/.test(fruit))
// console.log(b)

// .includes()

// const numbers = [1, 2, 3, 4]
// const fruits = ['Apple', "Banana", 'Cherry']

// const a = numbers.includes(3)
// console.log(a)

// const b = fruits.includes('HERO')
// console.log(b)

// .push() .unshift()
// 원본 수정됨 

// const numbers = [1, 2, 3, 4]
// const fruits = ['Apple', "Banana", 'Cherry']

// numbers.push(5)         // 맨 뒤에 삽입
// console.log(numbers)
// numbers.unshift(0)      // 맨 앞에 삽입
// console.log(numbers)

// .reverse()
// 원본 수정됨

// const numbers = [1, 2, 3, 4]
// const fruits = ['Apple', "Banana", 'Cherry']

// numbers.reverse()
// fruits.reverse()

// console.log(numbers)
// console.log(fruits)

// .splice(인덱스 시작점, 지울 개수, 넣을 숫자)
// 원본 수정됨

// const numbers = [1, 2, 3, 4]
// const fruits = ['Apple', "Banana", 'Cherry']

// numbers.splice(2,1,999)
// console.log(numbers)

// fruits.splice(2, 0, 'Orange')
// console.log(fruits)

// const userAge = {
//   // key: value
//   name: 'HERO',
//   age: 100
// }
// const userEmall = {
//   name: 'HERO',
//   email: 'the@gmail.com'
// }

// const target = Object.assign({}, userAge, userEmall)
// console.log(target)
// console.log(userAge)
// console.log(target === userAge)

// const a = {k: 123}
// const b = {K: 123}
// console.log(a === b)

// const user = {
//   name: 'HERO',
//   age: 100,
//   email: 'the@gmail.com'
// }

// const keys = Object.keys(user)
// console.log(keys)
// // ['name', 'age', 'email']

// console.log(user['email'])

// const values = keys.map(key => user[key])
// console.log(values)

// 구조 분해 할당(Destructuring assignment)
// 비구조화 할당

// const user = {
//   name: 'HERO',
//   age: 100,
//   email: 'the@google.com',
//   address: 'UN'
// }
// const {name:hero, age, email, address='Korea'} = user
// // E.g, user.address

// console.log(`사용자의 이름은 ${hero}입니다.`)
// console.log(`${hero}의 나이는 ${age}세 입니다.`)
// console.log(`${hero}의 이메일 주소는 ${email}입니다.`)
// console.log(address)

// const fruits = ['Apple', 'Banana', 'Cherry']
// const [, b,] = fruits
// console.log(b)

// 전개 연산자(Spread)

// const fruits = ['Apple', 'Banana', 'Cherry', 'Orange']
// console.log(fruits)
// console.log(...fruits)
// // console.log('Apple', 'Banana', 'Cherry', 'Orange')

// const toObject = (a, b, ...c) => ({a, b, c})
// console.log(toObject(...fruits))

// 데이터 불변성(Immutability)
// 원시 데이터: String, Number, Boolean, undefined, null
// 참조형 데이터: Object, Array, Function
// let a = 1
// let b = 4
// console.log(a, b, a === b)
// b = a
// console.log(a, b, a === b)
// a = 7
// console.log(a, b, a === b)
// let c = 1
// console.log(b, c, b === c)
// let a = { K: 1}
// let b = { K: 1}
// console.log(a, b, a === b)
// a.k = 7
// b = a
// console.log(a, b, a === b)
// a.k = 2
// console.log(a, b, a === b)
// let c = b
// console.log(a, b, c, a === c)
// a.k = 9
// console.log(a, b, c, a === c)

// 얕은 복사(Shallow copy), 깊은 복사(Deep copy)
// const user = {
//   name: 'Hero',
//   age: 100,
//   emails: ['the@google.com']
// }
// const copyUser = _.cloneDeep(user)
// console.log(copyUser === user)

// user.age = 22
// console.log('user',user)
// console.log('copyUser',copyUser)

// console.log('-----')
// console.log('-----')

// user.emails.push('iron@marvel.com')
// console.log(user.emails === copyUser.emails)
// console.log('user', user)
// console.log('copyUser', copyUser)

// import _ from 'lodash'
// import checkType from './getType'
// // import { random, user as Ironman } from './getRandom'
// import * as R from './getRandom'

// console.log(_.camelCase('the hello world'))
// console.log(checkType([1, 2, 3]))
// // console.log(random(), random())
// console.log(R)

// import _ from 'lodash'

// const usersA = [
//   { userId: '1', name: 'Ironman'},
//   { userId: '2', name: 'Thor'}
// ]
// const usersB = [
//   { userId: '1', name: 'Ironman'},
//   { userId: '3', name: 'Hurk'}
// ]

// const usersC = usersA.concat(usersB)
// console.log('concat', usersC)
// console.log('uniqBy', _.uniqBy(usersC, 'userId'))

// const usersD = _.unionBy(usersA, usersB, 'userId')
// console.log('unionBy', usersD)

// const users = [
//   { userId: '1', name: 'A'},
//   { userId: '2', name: 'B'},
//   { userId: '3', name: 'C'},
//   { userId: '4', name: 'D'},
//   { userId: '5', name: 'E'}
// ]

// const foundUser = _.find(users, { name: 'B'})
// const foundUserIndex = _.findIndex(users, { name: 'B'})
// console.log(foundUser)
// console.log(foundUserIndex)

// _.remove(users, { name: 'A'})
// console.log(users)

// JSON(JavaScript Object Notation)
// 자바스크립트의 객체 표기법
// import myData from './myData.json'

// console.log(myData)

// const user = {
//   name: 'HERO',
//   age: 100,
//   emails: [
//     'one@google.com',
//     'two@google.com'
//   ]
// }
// console.log('user',user)

// const str = JSON.stringify(user)
// console.log('str', str)
// console.log(typeof str)

// const obj = JSON.parse(str)
// console.log('obj', obj)

// const user = {
//   name: 'HERO',
//   age: 100,
//   emails: [
//     'one@google.com',
//     'two@google.com'
//   ]
// }

// const str = localStorage.getItem('user')
// const obj = JSON.parse(str)
// obj.age = 22
// console.log(obj)
// localStorage.setItem('user', JSON.stringify(obj))

// import axios from 'axios'

// function fetchMovies() {
//   axios
//     .get('https://www.omdbapi.com/?apikey=7035c60c&s=frozen')
//     .then( res => {
//       console.log(res)
//       const h1El = document.querySelector('h1')
//       const imgEl = document.querySelector('img')
//       h1El.textContent = res.data.Search[0].Title
//       imgEl.src = res.data.Search[0].Poster
//     } )
// }
// fetchMovies()