const { is } = require("sequelize/types/lib/operators")

function BST(){
  // 节点类
  function Node(key){
    this.key = key
    this.left = null
    this.right = null
  }
  // 属性：
  this.root = null

  // 方法：
  // 1. 插入方法
  BST.prototype.insert = function(key){
    // 1 创建一个新的节点
    var newNode = new Node(key)
    // 2 判断树是否为空
    if(this.root == null ){
      this.root =  newNode
    }else{  // 树不为空 
      this.insertNode(this.root, newNode)
    }
  }
  // 辅助函数，插入节点
  BST.prototype.insertNode = function (node, newNode){
    // 1 向左查找
    if(newNode.key < node.key){ 
      // 1-1叶子结点
      if(node.left == null){
        node.left = newNode
      }else{
        // 1-2 非叶子结点
        this.insertNode(node.left, newNode)
      }
    } else {
      // 2 向右查找
      if(node.right == null){
        node.right = newNode
      }else{
        this.insertNode(node.right, newNode)
      }
    }
  }


  // 2. 树的遍历
  // 2-1 先序遍历
  BST.prototype.preOrderTravesal = function (handler) {
    this.preOrderTravesalNode(this.root, handler)
  }
  BST.prototype.preOrderTravesalNode = function (node, handler) {
    // 树非空
    if (node !== null) {
      handler(node.key)
      // 左节点
      this.preOrderTravesalNode(node.left, handler)
      // 右节点
      this.preOrderTravesalNode(node.right, handler)
    }
  }
  // 2-2 中序遍历
  BST.prototype.midOrderTravesal = function (handler) {
    this.midOrderTravesalNode(this.root, handler)
  }
  BST.prototype.midOrderTravesalNode = function (node, handler) {
    // 树非空
    if (node !== null) {
      // 左节点
      this.midOrderTravesalNode(node.left, handler)
      // 根结点
      handler(node.key)
      // 右节点
      this.midOrderTravesalNode(node.right, handler)
    }
  }
  // 2-3 后粗遍历
  BST.prototype.postOrderTravesal = function (handler) {
    this.postOrderTravesalNode(this.root, handler)
  }
  BST.prototype.postOrderTravesalNode = function (node, handler) {
    // 树非空
    if (node !== null) {
      // 左节点
      this.postOrderTravesalNode(node.left, handler)
      // 右节点
      this.postOrderTravesalNode(node.right, handler)
      // 根结点
      handler(node.key)
    }
  }

  //  3 最值
  BST.prototype.min = function () {
    // 如果树为空
    if(!this.root) return null 
    // tree 不为空
    var node = this.root
    while(node !== null &&  node.left !== null){
      node = node.left
    }
    return node.key
  }

  BST.prototype.max = function () {
    // 如果树为空
    if(!this.root) return null 
    // 不为空
    var node = this.root
    while(node.right !== null){
      node = node.right
    }
    return node.key
  }

  // 搜索
  BST.prototype.search = function(key){
    return this.searchNode(this.root, key)
  }
  BST.prototype.searchNode = function (node, key) {
    // 空
    if(node == null) return false
    // 不为空
    if(key < node.key){  // 小于
      return this.searchNode(node.left, key)
    }else if(key > node.key){
      return this.searchNode(node.right, key)
    }else{
      return true
    }
  }

  // 删除操作
  BST.prototype.remove = function (key){

    // baseCase
    if(!this.root) return false
    // 1, 查找删除的结点
    // 1.1 定义一些变量
    var cur = this.root
    var parent = null 
    var isLeftChild = true

    while(cur.node !== key){
      parent = cur 
      if(key < node.key){  // 左节点
        isLeftChild = true
        cur = cur.left
      }else { // 右节点
        isLeftChild = false
        cur = cur.right
      }

      // 1.2 遍历结束整个树，都没有找到该节点
      if(cur === null) return false
    }

    // 2 找到删除的结点之后,根据不同的结点类型来删除
    // 2.1 叶子结点 
    if(cur.left === null && cur.right === null){
      if(cur.key === this.root){  // 根结点
        this.root = null
      }else if(isLeftChild){  // 左节点
        parent.left = null
      }else { // 右节点
        parent.right = null 
      }
    }
    // 2.2 结点只有一个子节点 ， 或左节点/右节点
    else if(cur.right === null){  // 2.2.1 唯一节点是左节点
      if(this.root.key === cur.key){    // 当前节点是根结点
        this.root = cur.left
      }else if(isLeftChild){    // 当前节点是父节点的左侧的结点
        parent.left = cur.left
      }else{    // 当前节点是父节点的右侧的几点
        parent.right = cur.left
      }
    }else if(cur.left === null ){   // 2.2.2 唯一节点是右节点
        if(this.root.key === cur.key){
          this.root = cur.right
        }else if(isLeftChild){
          parent.left = cur.right
        }else{
          parent.right = cur.right
        }
    }
    // 2.3 结点有两个子节点 
  }
}


// 测试代码
var bst = new BST()
// 1 insert方法
bst.insert(11)
bst.insert(7)
bst.insert(15)
bst.insert(5)
bst.insert(3)
bst.insert(9)
bst.insert(8)
bst.insert(10)
bst.insert(13)
bst.insert(12)
bst.insert(14)
bst.insert(20)
bst.insert(18)
bst.insert(25)
bst.insert(6)

/**
 *                           11
 *                    /             \
 *                   7              15          
 *                /    \         /     \    
 *               5      9       13     20     
 *             /  \   /  \     /  \   /  \   
 *            3   6  8   10  12   14 18   25 
 */

// 树的遍历辅助函数
var resString = ''
function handler(key) {
  resString += key + ' ' 
}

// 树的先序遍历
bst.preOrderTravesal(handler) 
console.log('树的先序遍历为： ', resString)
resString = ''

// 中序遍历
bst.midOrderTravesal(handler) 
console.log('树的中序遍历为： ', resString)
resString = ''

// 后序遍历
bst.postOrderTravesal(handler) 
console.log('树的后序遍历为： ', resString)
resString = ''

// 最小值
console.log('树的最小值：', bst.min())
console.log('树的最大值：', bst.max())

// 搜索
console.log('查找树中是否含有1: ', bst.search(1))
console.log('查找树中是否含有3: ', bst.search(3))



