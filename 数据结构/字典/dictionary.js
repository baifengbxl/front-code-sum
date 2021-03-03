/*
 * @Author: your name
 * @Date: 2020-11-15 13:49:55
 * @,@LastEditTime: ,: 2020-11-15 15:13:15
 * @,@LastEditors: ,: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \dataConctructor\dictionary\dictionary.js
 */

  class ValuesPair{
    // 保存原始的key和value
    constructor(key, value){
      this.key = key
      this.value = value
    }
    toString(){
      // # 代表所有的 key-value
      return `[${this.key} : ${this.value}]`
    }
  }
  
  /* 
    注意事项：JavaScript是弱对象类型，键值对的--键--可以是任何类型，但是理想的情况是字符串类型。
    所以我们需要将传递进来的key转换为字符串类型
    Dictionary 类：
      attr:
        item: Object 列表对象
        toStrFn: function 将键值对的key转换为字符串
      methods:
        set(key, value): 添加新元素，如果key已经存在，则旧的值会被覆盖
        get(key)： 以当前key查找对应的value
        hasKey(key)： 判断当前的字典里是否有key，有的话返回true，没有的话返回false
        remove(key)： 从当前的字典里删除某些元素
        keyValues()： 获取所有的键值对
        keys()： 获取当前字典里面所有的key
        values()： 获取所有的values
        size()： 获取字典的长度
        isEmpty()： 判断字典是否为空
        clear()： 清除当前字典
        forEach(callback)： 遍历当前字典里的所有key-values，
        toString()： 遍历当前字典里面的所有的key-values
  */
 class Dictionary{

  constructor(){
    this.toStrFn = item => {
      if(item === null){
        return 'NULL'
      }else if(item === undefined){
        return 'UNDEFINED'
      }else if(typeof item === 'string' || item instanceof String){
        return `${item}`
      }
      // 将传入的键名key转换为字符串
      // 假如变量item是一个对象的话，必须使用toString方法，要不然会返回一个[Object object]
      return item.toString()
    }
    this.table = {}
 }
 
  //  hasKey()
  hasKey(key){
    return this.table[this.toStrFn(key)] != null
  }

  //  set()
  set(key, value){
    if(key != null && value != null){
      const tableKey = this.toStrFn(key)
      // 保留原始的key 和 value 
      this.table[tableKey] = new ValuesPair(key, value)
      return true 
    }
    return false
  }
  
  // remove(key)
  remove(key){
    if(this.hasKey(key)){
      delete this.table[ this.toStrFn(key)]
      return true
    }
    return false
  }
  
  // get(key)
  get(key){
    // if(this.hasKey(key)){
    //   return this.table[this.toStrFn(key)]
    // }
    // return undefined

    // methods2:
    const valuesPair =  this.table[this.toStrFn(key)]
    return valuesPair == null ? undefined : valuesPair.value
  }


  //keyValues()
  keyValues(){
    return Object.values(this.table)

    // methods2；
    // const valuesPair = []
    // for(let k in this.table){
    //   if(this.hasKey(k)){
    //     valuesPair.push(this.table[k])
    //   }
    // }
    // return valuesPair
  }
  
  // keys()
  keys(){
    return this.keyValues().map( valuesPair => valuesPair.key )
  }

  // values()
  values(){
    return this.keyValues().map(valuesPair => valuesPair.value)
  }
  
  // forEach()
  forEach (callback) {
    const valuesPairs = this.keyValues()
    for(let i = 0; i < valuesPairs.length; i++){
      const result = callback(valuesPairs[i].key, valuesPairs[i].value)
      // 数组对象遍历结束，跳出循环
      if(result === false){
        break
      }
    }
  }

  //size()
  size(){
    return Object.keys(this.table).length
  }

  // isEmpty()
  isEmpty(){
    return this.size() === 0
  }

  // clear()
  clear(){
    this.table = {}
  }

  // toString()
  toString(){
    if(this.isEmpty()){
      return ''
    }
    const valuesPairs = this.keyValues()
    let objString = `${valuesPairs[0].toString()}`
    for(let i = 1; i < valuesPairs.length; i++){
      objString = `${objString}, ${valuesPairs[i].toString()}`
    }
    return objString
  }

}


// 测试代码
new function (){
  const dictionary = new Dictionary()
  // isEmpty()
  console.log(dictionary.isEmpty());
  
  // add()
  dictionary.set('grand', 'grand@com' )
  dictionary.set('john', 'john@com' )
  dictionary.set('type', 'type@com' )
  // hasKey()
  console.log(dictionary.hasKey('grand'));
  console.log(dictionary.hasKey('grand1'));
  // toString()
  console.log(dictionary);
  console.log(dictionary.toString());
  // size()
  console.log(dictionary.size());
  // keys values keyValues
  console.log(dictionary.keys());
  console.log(dictionary.values());
  console.log(dictionary.keyValues());
  // get()
  console.log(dictionary.get('grand'));
  // remove()
  console.log(dictionary.remove('john'));
  console.log(dictionary.toString());
  // forEach()
  dictionary.forEach((k,v) => {
    console.log(`forEach: ${k} : ${v}`);
  })
  // clear()
  dictionary.clear()
  console.log(dictionary.isEmpty());

}()