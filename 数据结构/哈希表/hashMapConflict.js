/*
 * @,@Author: ,: your name
 * @,@Date: ,: 2020-11-15 16:35:06
 * @,@LastEditTime: ,: 2020-11-15 18:10:41
 * @,@LastEditors: ,: Please set LastEditors
 * @,@Description: ,: In User Settings Edit
 * @,@FilePath: ,: \dataConctructor\hashMap\hashMapConflict.js
 */

/* 
  当两个或者多个key值映射到同一个散列值的时候，旧的value会被新的value所覆盖，此时，我们称为散列值发生了冲突
  解决办法：
    分离链接： 
      在当前节点创建一个链表，每当出现一个冲突的元素的时候，存到链表的下一个节点里
    线性探查：
      当出现冲突的时候，指针一直往下走（position + 1），直到找到一个空的位置
    双散列法:
      采用更好的hash函数
  
  hashMap和dictionary的区别：
    Map类中的values和keys方法返回的是一个iterator，而不是值和键构成的数组
    Map类中有自带的size属性
*/