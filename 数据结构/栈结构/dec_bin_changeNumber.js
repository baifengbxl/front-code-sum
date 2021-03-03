/**
 * 十进制转换为二进制
 */
import Stack from './arrStack'
const stack = new Stack()
let number = 10
let rem 
let binaryString = ''
while(number > 0){
  rem = Math.floor( number % 2)
  stack.push(rem)
  number = Math.floor(number / 2)
}
while(! stack.isEmpty()){
  binaryString += stack.pop().toString() 
}
console.log(binaryString)

/***
 * 十进制转换为任意进制
 */

// const stack = new Stack()
// // 10 进制数
// let number = 10
// // 要转换的进制数
// let base = 8
// // 作为基数
// const digest = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'
// // 余数
// let rem 
// let binaryString = ''
// // 判断合理的进制
// if( ! (base >= 2 && base <= 36) ){
//   return ''
// }
// // 进栈
// while(number > 0){
//   rem = Math.floor( number % base)
//   stack.push(rem)
//   number = Math.floor(number / base)
// }
// // 出栈
// while(! stack.isEmpty()){
//   // 机制转换
//   binaryString += digest[stack.pop()]
// }
// console.log(binaryString)
