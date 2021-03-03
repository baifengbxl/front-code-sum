/**
 * 
 * @param {*} arr 
 * @param {*} length 
 * 主要思想： 数组当前值左边的值是一个有序数组（从小到大/从大到小排列），
 * 把当前值和有序数组里面的值从右到左不断比较大小，交换位置
 * 如果满足条件，就将当前值插入到该位置
 * 
 */
function insertSort(arr, length){
  // 外部循环，遍历数组
  // 注意，这里 i=1，第一次不用排序
  for(let i=1; i<length; i++){
    // 获取当前值
    let temp = arr[i]
    // 获取当前值的索引
    let index = i
    // 当前值和有序数组里面的值不断向前比较
    while (temp < arr[index-1] && index > 0 ){
      // 如果符合条件，index存储当前位置
      arr[index] = arr[index-1]
      index--
    }
    // 将当前值插入到符合条件的位置
    arr[index] = temp
  }
  // 排序结束，返回当前数组
  return arr
}