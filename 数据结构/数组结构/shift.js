let num = [1,2,3,4,5,6,7,8,9,10]

// 数据重排函数
Array.prototype.reIndex = function (arr){
  let res = []
  for(let item = 0; item < arr.length; item++){
    if(arr[item] !== undefined){
      // console.log(arr[item])
      res.push(arr[item])
    }
  }
  return res
}

// 移动覆盖函数
Array.prototype.removeFirstPosition = function (){
  for(let i=0; i<this.length; i++){
    this[i] = this[i+1]
  }
  res = this.reIndex(this)
  // console.log(res)
  return res
} 

// 输出
console.log(num)
num.removeFirstPosition()
console.log(num)
