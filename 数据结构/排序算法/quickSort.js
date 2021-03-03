/**
 * 
 * @param {*} arr 
 * @param {*} length 
 * 
 * 快排思路：主要是递归
 * 获取数组中间的一个值cur，遍历数组，
 * 如果arr[i] < cur，将arr[i]存到left数组里
 * 如果arr[i] > cur，将arr[i]存到right数组里
 * 不断递归，当数组长度为1时，结束递归，将left + cur + right 作为一个结果数组返回
 *
 * 
 */
function quickSort(arr, length){
  // 递归的结束条件
  if(length <= 1){
    return arr
  }else{
    // 获取数组中间值的索引，采用向下取整的方式
    let index = Math.floor(length/2)
    // 返回中间索引的值
    let cur = arr.splice(index, 1)
    // 小值数组
    let left = []
    // 大值数组
    let right = []
    // 遍历数组，
    for(let i=0; i<length; i++){
      // 让比中间值小的值存到小值数组里
      if(arr[i] < cur) {
        left.push(arr[i])
        // 让比中间值大的值存到大值数组里
      }else if(arr[i] > cur) {
        right.push(arr[i])
      }
    }
    // 对小值数组和大值数组做同样的操作
    return quickSort(left, left.length).concat(cur, quickSort(right, right.length)) 
  } 
}
