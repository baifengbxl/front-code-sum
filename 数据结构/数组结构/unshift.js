let num = [1,2,3,4,5,6,7,8,9,10]

Array.prototype.insertFirstPosition =  function(value){
  for(let i=this.length; i>0; i--){
    this[i] = this[i-1]
  }
  this[0] = value
}

console.log(num)
num.insertFirstPosition(-1)
console.log(num)