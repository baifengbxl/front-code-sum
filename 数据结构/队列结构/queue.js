
/* 
  class queue
    attr: 
      count: 队列的长度
      lowestCount： 队头指向
      item：保存当前队列的对象
    methods:
      isEmpty(): 判断队列是否为空，返回boolean值
      size()：队列的长度
      enqueue(elements)：一个或者多个元素入队
      dequeue()：队头的元素出队
      peek()：返回队头的元素，也就是lowestCount指向的元素
      clear()：清除当前队列
      toString()：复写toString方法，返回当前队列指向的内容
*/

// 类的定义
class Queue {
  constructor(){
    // queue's length
    this.count = 0
    // queue's value
    this.items = {}
    // queue's head
    this.lowestCount = 0
  }

  // methods
  // 入队
  enqueue(elements) {
    this.items[this.count] = elements
    this.count++
  }
  // 出队
  dequeue() {
    // 如果队列是空的，返回 undefined
    if(this.isEmpty()){
      return undefined
    }
    // 保留队头的元素
    const result = this.items[this.lowestCount]
    // 删除队头元素
    delete this.items[this.lowestCount]
    // 队头指向下一个位置
    this.lowestCount++
    // 返回队头的元素
    return result
  }

  // 查看队头元素
  peek() {
    if(this.isEmpty()){
      return undefined
    }
    return this.items[this.lowestCount]
  }

  // 查看队列是否为空
  isEmpty(){
    return this.count - this.lowestCount === 0
  }

  // 队列的长度
  size(){
    return this.count - this.lowestCount 
  }

  // 清除队列
  clear(){
    this.count = 0
    this.lowestCount = 0
    this.items = {}
  }

  // toString 方法
  toString(){
    if(this.isEmpty()){
      return  ''
    }
    let objString = `${this.items[this.lowestCount]}`
    for(let i=1; i<this.count; i++){
      objString = `${objString}, ${this.items[i]}`
    }
    return objString
  }

}

// 测试代码
new function(){
  // 创建队的实例
const queue = new Queue()
console.log(queue.isEmpty())
// 入队
queue.enqueue('jack')
queue.enqueue('tom')
queue.enqueue('jerry')
console.log(queue)
// 队列长度
console.log(queue.size())
// jack出队
let res = queue.dequeue()
console.log(queue)
console.log(res)
console.log(queue.peek())
queue.clear()
}()

// 击鼓传花
new function(){

  function hotPotato(elementList, num){
    const queue = new Queue()
    const eliminatedList = []
    for(let i = 0; i < elementList.length; i++){
      queue.enqueue(elementList[i])
    }
    while(queue.size() > 1){
      // i从0开始，花相当于队列的头指针
      for(let i = 0; i < num; i++){
        queue.enqueue(queue.dequeue())
      }
      // 出队的人
      eliminatedList.push(queue.dequeue())
    }
    return {
      eliminator: eliminatedList,
      winner: queue.dequeue() 
    }
  }
  const names = ['john', 'jack', 'calima', 'ingrid', 'carl']
  const res = hotPotato(names, 7)
  res.eliminator.forEach(name => {
    console.log(`${name} 被淘汰了`)
  })
  console.log(`${res.winner} 是胜利者`)
}()



