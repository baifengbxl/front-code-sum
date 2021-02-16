//斐波拉切数列
function f(n){
				return n <= 2 ? 1 : f(n-1) + f(n-2)
			}

var onmessage = function(event){
	var num = event.data
	console.log("分线程接收主线程的数据    " + num)
	//计算
	var result = f(num)
	
	//分线程向主线程发送数据
	console.log("分线程向主线程返回数据    " + result)
	postMessage(result)
}
