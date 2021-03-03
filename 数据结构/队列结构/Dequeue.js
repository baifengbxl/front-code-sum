/*
  Dequeue类
    attr: 
      count: 队列的长度
      lowestCount： 队头指向
      item：保存当前队列的对象
    methods:
      isEmpty(): 判断队列是否为空，返回boolean值
      size()：队列的长度
      clear()：清除当前队列
      toString()：复写toString方法，返回当前队列指向的内容
      addFront(elements): 队头增加元素
      addBack(elements): 队尾增加元素
      removeFront(): 队头删除元素
      removeBack(): 队尾删除元素
      peekFront()：返回队头的元素，也就是lowestCount指向的元素
      peekBack(): 返回队尾的元素， lowestCount + count - 1

*/

class Dequeue {
  constructor(){
    this.count = 0
    this.lowestCount = 0
    this.items = {}
  }

  // isEmpty()
  isEmpty(){
    return this.count - this.lowestCount === 0
  }

  // size()
  size(){
    return this.count - this.lowestCount 
  }

  // clear()
  clear(){
    this.count = 0
    this.lowestCount = 0
    this.items = {}
  }

  // toString()
  toString(){
    if(this.isEmpty()){
      return ''
    }
    let objString = `${this.items[this.lowestCount]}`
    for(let i=1; i<this.count; i++){
      objString = `${objString}, ${this.items[i]}`
    }
    return objString
  }

  // removeBack()
  removeBack(){
    if(this.isEmpty()){
      return undefined
    }
    this.count--
    const result = this.items[this.count]
    delete this.items[this.count]
    return result

  }

  // removeFront(): 删除队头的元素
  removeFront(){
    if(this.isEmpty()){
      return undefined
    }
    const result = this.items[this.lowestCount]
    delete this.items[this.lowestCount]
    this.lowestCount ++
    // this.count --
    return result
  }

  // addFront() :在双端队列头部添加元素
  addFront(elements){
    if(this.isEmpty()){
      // 队列为空
      this.items[this.lowestCount] = elements
    }else if(this.lowestCount > 0){
      // 队列的头指针 不等于 0
      this.lowestCount--
      this.items[this.lowestCount] = elements
    }else{
      // 队列lowestCount === 0
      for(let i = this.count; i > 0; i--){
        this.items[i] = this.items[i - 1]
      }
      this.count++
      this.lowestCount = 0
      this.items[0] = elements
    }

  }

   // addBack()
  addBack(elements){
    this.items[this.count] = elements
    this.count++
  }

  // peekFront()
  peekFront(){
    if(this.isEmpty()){
      return undefined
    }
    return this.items[this.lowestCount]
  }

  // peekBack()
  peekBack(){
    if(this.isEmpty()){
      return undefined
    }
    // else if(this.lowestCount > 0){
    //   return this.items[this.lowestCount + this.count - 1]
    // }else{
    //   return this.items[this.count - 1]
    // }
    // return this.items[this.lowestCount + this.count - 1]
    return this.items[this.count - 1]

  }
}

// test
new function(){
  // 队列的实例化对象
  const dequeue = new Dequeue()
  // 创建队的实例
  console.log(dequeue.isEmpty())
  // 入队
  dequeue.addBack('jack')
  dequeue.addBack('danny')
  dequeue.addBack('jenny')
  dequeue.addFront('tom')
  dequeue.addFront('jerry')
  dequeue.addFront('derry')
  console.log(dequeue)
  // // 队列长度
  console.log(dequeue.size())
  // 出队
  let frontRes = dequeue.removeBack()
  console.log(frontRes)
  let backRes = dequeue.removeFront()
  console.log(backRes)
  console.log(dequeue)
  // 返回队两端的元素
  console.log(dequeue.peekFront())
  console.log(dequeue.peekBack())
  dequeue.clear()
  console.log(dequeue)
}()

// 回文字符串
new function (){
  function plainDromeChecker(aString){
    aString += ''
    if( (aString === undefined || aString === null) || (aString !== null && aString.length === 0)){
      return false
    }

    const dequeue = new Dequeue()
    let lowString = aString.toLocaleLowerCase().split(' ').join('')
    // console.log(lowString)
    let firstChar, lastChar
    let equals = true
    for(let i = 0; i < lowString.length; i++){
      dequeue.addBack(lowString.charAt(i))
    }
    // console.log(dequeue)
    while(dequeue.size() > 1 && equals){
      firstChar = dequeue.removeFront()
      // console.log(firstChar)
      lastChar = dequeue.removeBack()
      console.log(lastChar)
      if(firstChar !== lastChar){
        equals = false
      }
    }
    return equals
  }
  let res = plainDromeChecker('aba')
  res = plainDromeChecker('ab')
  res = plainDromeChecker('aa')
  res = plainDromeChecker(12221)
  res = plainDromeChecker( 'dci am  ma  i cd')
  console.log(res)

}()

