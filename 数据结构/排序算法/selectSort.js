/**
 * 
 * @param {*} arr 
 * @param {*} length 
 * 
 * 主要思路：每一次从待排序的数据元素中选出最小（或最大）的一个元素，存放在序列的起始位置，直到全部待排序的数据元素排完
 * 循环遍历数组，数组当前值arr[i]，值为min 索引 index ，
 * 让min和该索引后面的值进行比较，如果arr[j] < min ，交换他们的值，更新索引 index = j
 * 找到最小的值之后，让他和初始数组值arr【i】 交换，
 * 进入下一次循环
 */
function selectSort(arr, length){
  // 遍历数组
  for(let i=0; i<length; i++){
    // 设置当前值为小值
    let min = arr[i]
    // 存储当前值索引
    let index = i
    // 遍历数组，让当前值和当前值后面的值比较
    // 注意： j = i+1
    for(let j=i+1; j<length; j++ ){
      // 如果后面的值比当前值小，交换他们的数据和索引
      if(arr[j] < min){
        min = arr[j]
        // 保存最小值的索引
        index = j
      }
    }
    // 将最小值直接提取到当前位置，循环结束，进入下一次循环
    if( index != i){
      // swap(arr[index], arr[i])
      let temp = arr[i]
      arr[i] = arr[index]
      arr[index] = temp
    }
    
  }
  return arr
}
