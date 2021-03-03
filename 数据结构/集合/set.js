/*
 * @Author: your name
 * @Date: 2020-11-15 11:17:26
 * @LastEditTime: 2020-11-15 13:04:48
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \dataConctructor\set\set.js
 */

/* 
  Set类：集合是由一组无序且不重复的项组成的。
    attr； 
      items: Object类型
    methods:
      has(element): 判断集合里面是否有该元素
      add(element)： 往集合里面添加一个新的元素
      delete(element)：从集合里面删除一个新的元素
      size()： 集合里面的元素个数
      clear()： 清楚集合
      values()：打印出集合里面的值，返回值是一个数组
*/

class Set{
  constructor (){
    this.items = {}
  }

  has(element){
    // return Object.prototype.hasOwnProperty.call(this.items, element)
    return element in this.items
  }

  add(element){
    if(!this.has(element)){
      /*  注意： 集合的kv是  值-值 的结构  */
      this.items[element] = element
      return true
    }
    return false
  }

  delete(element){
    if(this.has(element)){
      delete this.items[element]
      return true
    }
    return false
  }

  clear(){
    this.items = {}
  }

  size(){
    // return Object.keys(this.items).length
    // 方法2
    let count = 0
    for(let key in this.items){
      if(this.items.hasOwnProperty(key)){
        count++
      }
    }
    return count
  }

  values(){
    // return Object.values(this.items)
    let values =  []
    for(let value in this.items){
      if(this.items.hasOwnProperty(value)){
        values.push(value)
      }
    }
    return values
  }
  
  // 并集： 纯函数编程，不会修改当前的函数参数和对象
  union(otherSet){
    const unionSet = new Set()
    // console.log(this.values());
    this.values().forEach(value => unionSet.add(value))
    // console.log(otherSet.values());
    otherSet.values().forEach(value => unionSet.add(value))
    return unionSet
  }

  // 交集
  intersection(setB){
    const intersectionSet = new Set()
    this.values().forEach(val => {
      if(setB.has(val)){
        intersectionSet.add(val)
      }
    })
    return intersectionSet
  }
  
  // 差集
  difference(otherSet){
    const differentSet = new Set()
    this.values().forEach(val =>{
      if( !otherSet.has(val)){
        differentSet.add(val)
      }
    })
    return differentSet
  }

  /* 子集 */
  isSubOf(otherSet){
    if(this.size() > otherSet.size() ){
      return false
    }
    let isTrue = true
    this.values().every(val => {
      if( !otherSet.has(val)){
        isTrue = false
        return false
      }
      return true
    })
    return isTrue
  }
}

/* 测试代码 */
new function (){
  const set = new  Set()
  set.add(1)
  set.add(2)
  set.add(3)
  set.add(4)
  console.log(set)
  set.delete(4)
  console.log('set:' + set)
  console.log(set.size())
  console.log(set.values())
  const setB = new Set()
  setB.add(1)
  setB.add(2)
  setB.add(3)
  setB.add(4)
  setB.add(5)
  console.log('setB:' + setB );
  // 并集
  console.log(set.union(setB))
  // 交集
  console.log(set.intersection(setB))
  // 差集
  console.log(set.difference(setB))
  console.log(setB.difference(set))
  // 子集
  console.log(set.isSubOf(setB))
  console.log(setB.isSubOf(setB))
  console.log(setB.isSubOf(set))
  
}()

