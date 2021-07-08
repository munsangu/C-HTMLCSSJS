// 산술 연산자(arithemetic operator)

console.log(1 + 2)
console.log(5 - 7)
console.log(3 * 4)
console.log(10 / 2)
console.log(7 % 5)

// 할당 연산자(assignment operator)

let a = 2
// a = a + 1
a += 1

console.log(a)

// 비교 연산자(comparison operator)

const c = 1
const d = 1

console.log(c === d)  // 일치 연산자
console.log(c !== d)
console.log(c < d)
console.log(c > d)
console.log(c <= d)
console.log(c >= d)

function isEqual(x,y) {
  return x === y
}

console.log(isEqual(1, 1))
console.log(isEqual(2, '2'))

// 논리 연산자(logical operator)

 const x = 1 === 1
 const y = 'AB' === 'AB'
 const z = false
 
 console.log(x)
 console.log(y)
 console.log(z)

 console.log('&&: ', x && y && z)
 console.log('||: ', x || y || z)
 console.log('!: ', !x)

