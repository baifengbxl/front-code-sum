//匿名函数自调用
(function myModule (window) {
	var msg = " AT guigu"
	
	function doSomething (){
		console.log("doSomething" + msg.toUpperCase())
	}
	
	function doOtherthing (){
		console.log("doOtherthing" + msg.toLowerCase())
	}
	
	//使用对象返回值
	window.myModule =  {
		doSomething : doSomething,
		doOtherthing : doOtherthing
	}
})(window)
