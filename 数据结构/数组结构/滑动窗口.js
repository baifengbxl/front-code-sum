/*
 * @,@Author: ,: your name
 * @,@Date: ,: 2020-11-18 00:31:44
 * @,@LastEditTime: ,: 2020-11-18 00:44:04
 * @,@LastEditors: ,: Please set LastEditors
 * @,@Description: ,: In User Settings Edit
 * @,@FilePath: ,: \dataConctructor\array\滑动窗口.js
 */

//  https://leetcode-cn.com/problemset/lcof/

new function(target) {
  // 滑动窗口求解
  // 1 要求至少两个数，所以index必须是目标值target的一半
  let index = target % 2 == 0 ? target/2 : Math.floor(target/2) + 1
  let tmp = []
  let res = []
  let sum = 0
  for(let i = 1; i <= index; i++){
    // 移动右边界
    tmp.push(i)
    sum += i
    while(target < sum ){
      // 移动左边界
      sum -= tmp[0]
      tmp.shift()
    } 
    // console.log(tmp);
    if( sum === target ){
      tmp.length >= 2 && res.push([...tmp])
      
      // 注意： 这里tmp是数组的一个地址，如果我们tmp入栈，相当于地址入栈，
      // 最后res里面保存的是一个一个数组的地址，所有的值是最后一次数组更改后的值，都是一样。
      // 像30： 如果执行代码：结果是 [ [ 9, 10, 11 ], [ 9, 10, 11 ], [ 9, 10, 11 ] ]，
      // 解释： [ 9, 10, 11 ],是数组最后一次变更后的值。所有之前的值都被覆盖掉了。
      // 因为我们res数组里面存的tmp是数组的地址指向，当数组变化了，tmp的值也会随之变化
      // res.push(tmp)
      
      console.log(res);
    }
  }
  return res 
}(30)

