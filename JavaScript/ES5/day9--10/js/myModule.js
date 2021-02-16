function myModule () {
	var msg = " AT guigu"
	
	function doSomething (){
		console.log("doSomething" + msg.toUpperCase())
	}
	
	function doOtherthing (){
		console.log("doOtherthing" + msg.toLowerCase())
	}
	//使用函数返回值
	return {
		doSomething : doSomething ,
		doOtherthing : doOtherthing
	}
}
