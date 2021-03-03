
/*
 * 
 * @param {*} arr 
 * @param {*} length 
 * 
 * 冒泡排序的基本思路：
 * 1，对数组的值进行length-1轮排序
 * 2 第一轮通过不断地比较找到其中的最大的或者最小的值，让他移动到数组的尾部
 * 3 第二轮去掉当前的max/min 数组长度-1，再次比较，找到其中的min/max
 * 4 重复以上步骤
 * 
 * 外层循环控制循环的次数,内层循环来讲最大的值放到数组的尾部
 * 
 */
function bubbleSort(arr, length) {
  // 第一轮循环决定排序的轮数
  for(let i=0; i<length; i++){
    // 找出其中的小值,从小到大排列
    for(let j=0; j<length-1-i; j++){
      // 不断交换，使最大值冒泡到数组的尾部
      if(arr[j] > arr[j+1]){
        let temp = arr[j]
        arr[j] = arr[j+1]
        arr[j+1] = temp
      }
    }
  }
  return arr
}

// console.log('1')
// console.log('1')
// console.log('1')
// console.log('1')
// console.log('1')
