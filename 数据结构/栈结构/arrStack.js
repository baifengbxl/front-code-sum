// 创建一个栈的类
export class Stack{
  constructor(){
    this.items = []
  }
}
// 创建栈的方法
// push
Stack.prototype.push = function(element){
  this.items.push(element)
}
// pop
Stack.prototype.pop = function(){
  return this.items.pop()
}
// peek
Stack.prototype.peek = function (){
  return this.items[this.items.length - 1]
}
// isEmpty
Stack.prototype.isEmpty = function (){
  return this.items.length === 0
}
// size
Stack.prototype.size = function (){
  return this.items.length
} 
// clear
Stack.prototype.clear = function (){ 
  this.items = []
}

