// import Queue from './queue.js'

// 击鼓传花： 循环队列的练习
function hotPotato (elementList, num) {  
  const queue = new Queue()
  const eliminatedList = []
  for(let i = 0; i < elementList.length; i++){
    queue.enqueue(elementList[i])
  }
  while(queue.size() > 1){
    for(let i = 0; i < num; i++){
      // 核心
      queue.enqueue(queue.dequeue())
    }
    eliminatedList.push(queue.dequeue())
  }
  return {
    eliminate: eliminatedList,
    winner: queue.dequeue()
  }
}

const names = ['john', 'jack', 'Camila', 'ingrid', 'carl' ]
const res = hotPotato(names,7)
res.eliminate.forEach( name => {
  console.log(`${name} 在击鼓传花中被淘汰`)
})
console.log(`${res.winner} 是胜利者` )

