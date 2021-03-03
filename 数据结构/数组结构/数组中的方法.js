/*
 * @,@Author: ,: your name
 * @,@Date: ,: 2020-11-08 12:16:22
 * @,@LastEditTime: ,: 2020-11-21 23:26:37
 * @,@LastEditors: ,: Please set LastEditors
 * @,@Description: ,: In User Settings Edit
 * @,@FilePath: ,: \dataConctructor\array\数组中的方法.js
 */

    let arr = [1,2,4,6,8,9,]
    let arr2 = ['A', 'b', 'c', 'a', 'B', 'C']
    let arrTest

    console.log(arr)
    console.log(arr2)
    console.log('===========================')

    // concat ：concat() 方法用于连接两个或多个数组。
    // 该方法不会改变原有数组，会返回一个数组副本
    // arrTest = arr.concat(arr2)
    // console.log(arr)
    // console.log(arrTest, "返回值的类型："+ typeof arrTest)


    // join("分隔符") 方法：数组转为字符串 同时按指定的分隔符来分割,没有分隔符的话默认为（，）逗号
    // 返回一个字符串，
    // arrTest = arr.join('@')
    // arrTest = arr.join()

    // push()方法改变原有数组，往数组尾部添加一个或者多个值
    // 返回值是新数组的长度
    arrTest = arr.push(0,1,2)

    // pop()方法 ： 删除数组最后一个元素
    // 改变原有数组
    // arrTest = arr.pop()

    // shift()方法： 删除数组的第一个元素，改变原有数组
    // 返回值是删除的第一个元素
    // arrTest = arr.shift()

    // unshift()方法; 往数组头部添加一个或者多个元素，改变原有数组
    // 返回新数组的长度
    // arrTest = arr.unshift(12,3,4,4,5,6)

    // reverse()方法 ； 倒转数组的元素，改变原数组
    // 返回一个新数组
    // arrTest = arr.reverse()

    // sort() ： 按照ASCII码值对数组排序 ，改变原数组
    // arrTest = arr2.sort()
    // console.log(arr2)

    // arrTest = arr.toString()
    
    // slice: 分割数组，不改变原数组 ，有两个参数，
      //  第一个参数 ： 截取的开始位置 （包括他本身）
      //  第二个参数： 截取的结束位置（不包括它本身）
    // 返回一个新的数组
    // arrTest = arr.slice(1, -2)
    // arrTest = arr.slice(1, 3)

    // splice : 删除/替换数组元素，改变原数组。三个参数
    // 1. 开始的位置
    // 2. 删除的个数
    // 3. ...item[] 要添加的元素
    // 返回值是删掉的数组元素，若不删，数组为空
    // arrTest = arr.splice(0, 4)  //  删除
    // arrTest = arr.splice(0, 4, 1,2,3,4)  //  替换
    // arrTest = arr.splice(0, 0, 0,3,4)   //  添加


    
    console.log(arr)
    console.log(arrTest, "返回值的类型："+ typeof arrTest)

