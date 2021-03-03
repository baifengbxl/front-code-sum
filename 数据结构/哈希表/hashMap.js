/*
 * @,@Author: ,: your name
 * @,@Date: ,: 2020-11-15 15:58:53
 * @,@LastEditTime: ,: 2020-11-15 16:30:51
 * @,@LastEditors: ,: Please set LastEditors
 * @,@Description: ,: In User Settings Edit
 * @,@FilePath: ,: \dataConctructor\hashMap\hashMap.js
 */


 class ValuesPair{
   constructor(key, value){
     this.key = key
     this.value = value
   }
   toString(){
     return `[${this.key} : ${this.value}]`
   }
 }


 /* 
  hashMap 的本质
  ：是对字典的key值做了一层封装 ，让他转变为一个数字，并将所有的key存到一个数组里，这样就能快速的从、进行查找
  attr:
    toStrFn: function key值转换为字符串
    table： Object 存放当前的数据 
  methods:
    hashCode(key) :自定义的hash函数，实现对key值的一个转换
    put(key, value)： 向散列表里面添加一个新的项
    get(key)：根据key值获取特定的值
    remove(key)： 从散列表里面删除一个元素
 */
class HashMap{
  
  constructor(){
    this.toStrFn = key => {
      if(key === null){
        return 'NULL'
      }else if(key === undefined){
        return 'UNDEFINED'
      }else if( typeof key === 'string' || key instanceof String){
        return `${key}`
      }
      return key.toString()
    }
    this.table = {}
  }

  // 自定义的hash函数
  loseloseHashCode(key){
    // 如果为数字，直接返回
    if(typeof key === 'number' ){
      return key
    }
    const tableKey = this.toStrFn(key)
    let hash = 0
    // 按照ASCII码表，将key按位置拆分，找到他们对应的ASCII值，并且相加，得到当前key的hash值
    for(let i = 0; i < tableKey.length; i++ ){
      hash += tableKey.charCodeAt(i)
    }
    // 避免生成 的数字过大，超过数字的表示范围
    return hash % 37
  }

  // hashCode()
  hashCode(key){
    return this.loseloseHashCode(key)
  }

  // put()
  put(key, value){
    if(key != null && value != null){
      const position = this.hashCode(key)
      this.table[position] = new ValuesPair (key, value)
      return true
    }
    return false
  }

  // get ()
  get(key){
    const ValuesPair = this.table[this.hashCode(key)]
    return ValuesPair == null ? undefined : ValuesPair.value
  }

  // remove()
  remove(key){
    const hash = this.hashCode(key)
    const ValuesPair = this.table[hash]
    if(ValuesPair != null ){
      delete this.table[hash]
      return true
    }
    return false
  }
}

// 测试函数
new function (){
  const hash = new HashMap()
  //put
  hash.put('grand', 'grand@com')
  hash.put('john', 'john@com')
  hash.put('type', 'type@com')
  console.log(hash);
  // get
  console.log(hash.get('john'));
  console.log(hash.get('john1'));
  console.log(hash);
  // remove
  console.log(hash.remove('type'));
  console.log(hash);
}()

