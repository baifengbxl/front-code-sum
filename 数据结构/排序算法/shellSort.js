/**
 * 
 * @param {*} arr 
 * @param {*} length 
 * 
 * 主要思想：
 *  将当前数组按照间隔gap分为小数组，分别对小数组进行插排，
 *  然后间隔gap不断变小，继续插排，
 * 直到gap = 1时，排序结束
 */
function shellSort(arr, length){
  // 设置间隔为数组长度的一半，
  let gap = Math.floor(length/2)
  // 当间隔gap >= 1 时，开始排序
  // 对由间隔分开的每个小数组做插排
  while(gap >= 1){
    // 遍历数组
    // 将当前间隔gap作为遍历数组的初始值 i=gap
    for(let i=gap; i<length; i++){
      // 获取当前值和索引 
      let temp = arr[i]
      let index = i
      // 索引向前寻找，直到找到符合条件的索引或者index = 0 时，停止寻找
      if(arr[index-gap] > temp && index > gap-1){
        arr[index] = arr[index-gap]
        index -= gap 
      }
      // 将temp插入到该位置
      arr[index] = temp 
    }
    // 间隔变小
    gap = Math.floor(gap/2)
  }
  return arr
}