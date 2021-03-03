
 /**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
let root = [3,9,20,null,null,15,7]
let  levelOrder = function(root){
  if(!root) return []
  let curRoot = [root]
  let res = []
  // 整个树的元素
  while(curRoot.length){
    let curRes = []
    let nextRes = []
    // 遍历当前根
    for(let i = 0; i < curRoot.length; i++){
      // 第一次初始化时当前层的结果
      curRes.push(curRoot[i].val)
      // 当前层的第i个根有左子树
      if(curRoot[i].left){
        nextRes.push(curRoot[i].left)
      }
      // 当前层的第i个根有右子树
      if(curRoot[i].right){
        nextRes.push(curRoot[i].right)
      }
    }
    // 当前根和下一层的根数据装填完毕，开始数据交接，改变当前层，当前层的结果入栈，进入下一次循环
    curRoot = nextRes
    res.push(curRes)

  }
  return res 
  console.log(res);
}

console.log(levelOrder(root));
