console.log(new Date('2021-07-03').getDay()); // 6, 토요일
console.log(new Date('2021-07-04').getDay()); // 0, 일요일
console.log(new Date('2021-07-05').getDay()); // 1, 월요일

// 한 줄 메모
/* 한 줄 메모 */

/**
 * 여러 줄
 * 메모 1
 * 메모 2
 */

// String(문자 데이터)
// 따옴표를 사용
let myName = "HERO";
let email = 'the@gmail.com';
let hello = `Hello ${myName}?!`

console.log(myName); //HERO
console.log(email);  // the@gmail.com
console.log(hello);  // Hello HERO?!

// Number(숫자 데이터)
// 정수 및 부동소수점 숫자를 나타냄
let number = 123;
let opacity = 1.57;

console.log(number);  // 123
console.log(opacity); // 1.57 

// Boolean(불린 데이터)
// true, false 두 가지 값 밖에 없는 논리데이터
let checked = true;
let isShow = false;

console.log(checked);  // true
console.log(isShow);   // false

// Undefined
// 값이 할당되지 않은 상태
let undef;
let obj = {abc: 123};

console.log(undef);   // undefined
console.log(obj.abc); // 123
console.log(obj.xyz); // undefined

// Null
// 어떤 값이 의도적으로 비어있음
let empty = null;

console.log(empty); // null

// Object(객체 데이터)
// 여러 데이터를 Key: Value 형태로 저장 { }
let user = {
  // Key: Value,
  name: 'HERO',
  age: 100,
  isValid: true
};
console.log(user);
console.log(user.name);    // HERO
console.log(user.age);     // 100
console.log(user.isValid); // true

// Array(배열 데이터)
// 여러 데이터를 순차적으로 저장 [  ]
let fruits = ['Apple', 'Banana','Cherry'];

console.log(fruits[0]); // 'Apple'
console.log(fruits[1]); // 'Banana'
console.log(fruits[2]); // 'Cherry'

// 재사용 가능
// 변수 선언
let a = 2;
let b = 5;

console.log(a + b); // 7
console.log(a - b); // -3
console.log(a * b); // 10
console.log(a / b); // 0.4

// 값(데이터)의 재할당 가능
let c = 12;
console.log(c); // 12

c = 999;
console.log(c); // 999

// 값(데이터)의 재할당 불가능
// const d = 12;
// console.log(d);  // 12

// d = 999;
// console.log(d);  //TypeError: Assignment to constant variable.

// 예약어
// let this = 'Hello!'; // SyntaxError
// let if = 123; // SyntaxError
// let break = true; // SyntaxError

// 함수 선언
function helloFunc() {
  // 실행 코드
  console.log(1234);
}

// 함수 호출
helloFunc();  // 1234

function returnFunc() {
  return 123;
}

let f = returnFunc();

console.log(f);  // 123

// 함수 선언
function sum(j,h){  // j와 h는 매개변수(Parameters)
  return j+h;
}

// 재 사용
let k = sum(1,2);   // 1, 2는 인수(Arguments)
let l = sum(7,12);
let m = sum(2,4);

console.log(k,l,m);  // 3, 19, 6

// 기명(이름이 있는) 함수
// 함수 선언
function hello2() {
  console.log('Hello~');
}

// 익명(이름이 없는) 함수
// 함수 표현
let world= function() {
  console.log('World~');
}

// 함수 호출
hello2();  // Hello~
world();   // World~

// 객체 데이터
const hero2 = {
  name: 'HERO',
  age: 100,
  // 메소드(Method)
  getName: function(){
    return this.name;
  }
};

const hisName = hero2.getName();
console.log(hisName);         // HERO
// 또는
console.log(hero2.getName()); // HERO

let isShow2 = true;
let checked2 = false;

if(isShow2){
  console.log('Show!')   // Show!
}

if(checked2){
  console.log('Checked!');
}

let isShow3 = false;

if(isShow3){
  console.log('Show!');
}else{
  console.log('Hide?');  // Hide?
}

// DOM API(Document Object Model / Application Programming Interface)
// let boxEl = document.querySelector('.box');

// console.log(boxEl);

// // HTML 요소(Element) 1개 검색/찾기
// // const boxEl2 = document.querySelector('.box');

// // // HTML 요소에 적용할 수 있는 메소드
// // boxEl2.addEventListener();

// // // 인수(Arguments)를 추가
// // boxEl2.addEventListener(1,2);

// // // 1 - 이벤트(Event, 상황)
// // boxEl2.addEventListener('click',2);

// 2 - 핸들러(Handler, 실행할 함수)
// boxEl.addEventListener('click',function() {
//   console.log('Click~!');
// });

// // HTML 요소(Element) 검색/찾기
// const boxEl = document.querySelector('.box');

// // 요소의 클래스 정보 객체 활용
// boxEl.classList.add('active');
// let isContains = boxEl.classList.contains('active');
// console.log(isContains); // true

// boxEl.classList.remove('active');
// isContains = boxEl.classList.contains('active');
// console.log(isContains); // false

// HTML 요소(Element) 모두 검색/찾기
// const boxEls = document.querySelectorAll('.box');
// console.log(boxEls);

// // 찾은 요소들 반복해서 함수 실행
// // 익명 함수를 인수로 추가
// boxEls.forEach(function () {});

// // 첫번째 매개변수(boxEl): 반복 중인 요소
// // 두번째 매개변수(index): 반복 주인 번호
// boxEls.forEach(function (boxEl,index) {});

// // 출력
// boxEls.forEach(function (boxEl,index){
//   boxEl.classList.add(`order-${index+1}`);
//   console.log(index, boxEl);
// });

// const boxEl = document.querySelector('.box');

// // Getter, 값을 얻는 용도
// console.log(boxEl.textContent); // Box!!

// // Setter, 값을 지정하는 용도
// boxEl.textContent = 'HERO?!';
// console.log(boxEl.textContent); // HERO?!

// 메소드 체이닝(Method Chaining)
const x = 'Hello~';
// split: 문자를 인수 기준으로 쪼개서 배열로 반환
// reverse: 배열 뒤집기
// join: 배열을 인수 기준, 문자로 병합해 반환
const y = x.split('').reverse().join(''); // 메소드 체이닝

console.log(x);  // Hello~
console.log(y);  // ~olleH