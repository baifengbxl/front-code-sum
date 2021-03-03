
/**
 * obj对象模式修改栈 会修改所有打印栈的内容，对象本身是一个 地址内存
 */
class Stack {
  constructor(){
    this.count = 0
    this.items = {}
  }

  // push
  push(element){
    this.items[this.count] = element
    this.count++
  }

  // isEmpty
  isEmpty(){
    return this.count === 0
  }
  // size
  size(){
    return this.count
  }
  // pop
  pop(){
    if(this.isEmpty()) return undefined
    // 栈的长度减1
    this.count --
    // 返回栈顶元素
    const result =  this.items[this.count]
    // 删除栈顶元素
    delete this.items[this.count]
    return result
  }
  // peek 
  peek(){
    if(this.isEmpty()) return undefined
    return this.items[this.count - 1]
  }
  // clear
  clear(){
    this.count = 0
    this.items = {}
  }


}