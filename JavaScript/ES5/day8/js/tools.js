
//获取元素样式函数
function getStyle (obj , name){
					if(window.getComputedStyle){
						return getComputedStyle(obj , null )[name]
					}else{
						return obj.currentStyle[name]
					}
				}

//设置移动函数
			/*
			 * obj:对象名
			 * attr: 属性值
			 * target: 边缘检测值
			 * speed:速度（整数向右移动，负数向左移动）
			 * callback  回调函数
			 */
			var timer
			function move ( obj ,  attr , target , speed , callback ){
					//	清楚上一个定时器
					clearInterval(obj.timer)
					/*
					 * 获取当前的位置使speed始终未正
					 */
					var current = parseInt(getStyle(obj , attr))
					if(current > target  ){
						speed = -speed
					}
					//设置定时
					//给每个对象绑定自己的定时器
					
					obj.timer = setInterval(function(){
						//获得当前盒子的宽度
						//只获得数字，便于计算
						var  oldValue =  parseInt(getStyle(obj , attr
						))
						//获取新的值,使其在原来的基础上增加
						var newValue = oldValue + speed
						//判断800
						if(speed < 0 && newValue <= target || speed > 0 && newValue >= target ){
							newValue = target;
						}
						//设置当前值
						obj.style[attr] = newValue + "px"
						//设置边界
						if(newValue === target ){
							//当达到800px是，关闭定时器
							clearInterval(obj.timer)
							//设置回调函数可以随时传
							callback() && callback()
						}
					} , 30)
			};

//添加class属性函数
			function addClass (obj , cn ){
				//如果没有，就添加class
				if(!hasClass(obj, cn )){	
					obj.className += " "+ cn;
				};
			};
			
			//判断是否含有class函数
			function hasClass(obj , cn){
				//动态正则，并设置字母边界
				var reg = new  RegExp("\\b" + cn + "\\b")
				return (reg.test(obj.className))
			};
			
			//删除class
			function removeClass(obj , cn){
				var reg = new RegExp("\\b" + cn + "\\b")
				obj.className = obj.className.replace(reg , "")
			}
			
			//toggleClass来切换
			function toggleClass (obj , cn ){
				if(hasClass(obj , cn )){
					removeClass(obj , cn )
				}else{
					//没有，则添加
					addClass(obj , cn )
				}
			}