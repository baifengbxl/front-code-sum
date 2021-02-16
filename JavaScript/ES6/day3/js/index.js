
// 设置监听器
var timer
// 显示方格
var showatom = true
// 获取外部盒子id
var main = document.getElementById("main")

// 设置画布
function Map (atom , xnum , ynum ){
    // 设置原子大小
    this.atom = atom
    // 横向原子数量 ==== 画布的宽度
    this.xnum = xnum
    // 竖向原子数量 ==== 画布的高度
    this.ynum = ynum

    this.canvas = null
    // 创建画布的方法 
    this.creat = function (){
        // 画布对象div
        this.canvas = document.createElement("div") 
        // 画布的样式
        this.canvas.style.cssText = "position: relative ; margin:100px atuo; border: 1px solid black ; background : #fafafa  "
        // 画布的宽
        this.canvas.style.width = this.atom * this.xnum + 'px'
        // 画布的高度
        this.canvas.style.height = this.atom * this.ynum + 'px'
        // 讲画布添加到盒子里
        main.appendChild(this.canvas)

        // 是否展示画布的格子
        if(showatom){

            for(var y = 0; y<ynum; y++){
                for (var x = 0; x<xnum; x++){
                    // 格子对象
                    var a = document.createElement("div")
                    // 设置格子的宽和高
                    a.style.cssText = "border: 1px solid  rgb(173, 161, 161); "
                    a.style.width = this.atom + 'px'
                    a.style.height = this.atom + 'px'
                    a.style.backgroundColor = "rgb(71, 69, 69)"
                    // 设置原子的位置
                    a.style.position = "absolute"
                    a.style.left = this.atom * x + 'px'
                    a.style.top = this.atom * y + 'px'
                    // 将格子添加到画布里面
                    this.canvas.appendChild(a)
                }
            }
        }
    }
// console.log(this)
}

// 设置食物的构造函数
function Food(map){
    // 设置食物的高和宽,颜色
    this.height = map.atom
    this.width = map.atom
    this.bcgColor = "yellow"
    // 设置食物在第几个方格
    this.x = Math.floor(Math.random()*map.xnum)
    this.y = Math.floor(Math.random()*map.ynum)
    // 创建一个食物的对象
    this.flag = document.createElement("div")
    this.flag.style.height = this.height + 'px'
    this.flag.style.width = this.width + 'px'
    this.flag.style.backgroundColor = this.bcgColor
    this.flag.style.position = "absolute"
    // 设置食物的位置 
    this.flag.style.left = this.width*this.x + 'px'
    this.flag.style.top = this.height*this.y + 'px'
    // 将食物添加到画布
    map.canvas.appendChild(this.flag)
    // console.log(this)
}

// 设置蛇的构造函数
function Snake (map){
    // 设置蛇的宽高
    this.height = map.atom
    this.width = map.atom
    // 蛇本身 由三节组成 头 体  尾 
    this.body = [
        {x : 2, y : 0},  //头
        {x : 1, y : 0},  //体
        {x : 0, y : 0}  //尾
    ]
    // 默认蛇是向右走的
    this.direction = "right"
    // 显示蛇
    this.display = function (){
        for(var i = 0; i<this.body.length; i++){
            if(this.body[i].x != null){     // 当吃到食物的时候，x=== null 不能新建，否则会在【0.0】处新建一个
                // 每一个蛇都是一个div
                var s = document.createElement("div")
                // 给蛇添加一个动态属性flag ，
                this.body[i].flag = s
                // 设置蛇的宽高
                s.style.height = this.height + "px"
                s.style.width = this.width + "px"
                s.style.border = "1px solid white"
                s.style.backgroundColor = "rgb(62, 220, 255)"
                s.style.borderRadius = "50%"
                // 设置蛇的位置
                s.style.position = "absolute"
                s.style.left = this.body[i].x * this.width + "px"
                s.style.top = this.body[i].y * this.height + "px"

                // 将蛇添加到画布里
                map.canvas.appendChild(s)
            }
        }
    }

    // 使蛇动起来
    this.run = function (){
        for(var i=this.body.length-1; i>0; i--){
            // 使蛇移动
            this.body[i].x = this.body[i-1].x
            this.body[i].y = this.body[i-1].y
        }
        //  控制蛇头的方向，默认蛇是向右走的
        switch(this.direction){
            case "right" : this.body[0].x +=1; break
            case "left" : this.body[0].x -=1; break
            case "up" : this.body[0].y -=1; break
            case "down" : this.body[0].y +=1; break
        }
        // 当蛇吃到食物的时候,创建一个新的div
        if (this.body[0].x == food.x && this.body[0].y == food.y){
            this.body.push({ x : null, y : null, flag : null})
            
            // 计算分数
            document.getElementsByTagName("h2")[0].innerHTML = "你的分数为:" + (index++) + "分"

            
            // 删除食物
            map.canvas.removeChild(food.flag)
            // 产生新的食物
            food = new Food(map)
            
            // 设置通关属性
            if(this.body.length > l.slength){
                l.set()
            }
            
        }

        // 蛇撞墙的时候，游戏重新开始
        if(this.body[0].x<0 || this.body[0].x>map.xnum-1 || this.body[0].y<0 || this.body[0].y>map.ynum-1){
            // 清除定时器
            clearInterval(timer)
            alert("游戏结束")
            // 重新开始
            restart (map, this, l)
            return false
        }
        // 蛇撞到自己的时候，游戏结束
        for(var i=4; i<this.body.length; i++){
            if(this.body[0].x == this.body[i].x && this.body[0].y == this.body[i].y ){
                // 清除定时器
                clearInterval(timer)
                alert("游戏结束")
                // 重新开始
                restart (map, this, l)
                return false
            }
        }

        // 删掉之前的蛇尾
        for(var i=0; i<this.body.length; i++  ){
            if(this.body[i].flag !=null ){      // 如果社已经吃到了食物  flag = null 长度加一
                map.canvas.removeChild(this.body[i].flag)
            }
        }
        this.display()
    }
}

// 重新开始方法
function restart (map, snake ,l){
    // 删除之前的蛇
    for( var i=0; i<snake.body.length; i++){
        map.canvas.removeChild(snake.body[i].flag)
    }
    // 创建新的蛇
    snake.body = [
        {x : 2, y : 0},  //头
        {x : 1, y : 0},  //体
        {x : 0, y : 0}  //尾
    ]
    // 默认蛇是向右走的
    snake.direction = "right"
    snake.display()

    // 删除之前的食物
    map.canvas.removeChild(food.flag)
    // 新建食物
    food = new Food(map)
    // 清空得分 
    index = 1
    document.getElementsByTagName("h2")[0].innerHTML = "你的分数为:0分"

    // 重置关卡
    l.num = 1    // 开始关卡
    l.slength = 5   // 开始长度
    l.speed = 300    //开始速度
    l.show()





}
// 升级对象
function Level (){
    this.num = 1    // 开始关卡
    this.slength = 5   // 开始长度
    this.speed = 300    //开始速度
    // 通关设置
    this.set = function(){
        // 关数
        this.num++
        // 速度
        if(this.speed <= 50){
            this.speed = 50
        }else{
            this.speed -=50 
        }
        // 长度
        this.slength += 3  // 长度增加3则进入下一关,速度加快
        // 通关后显示
        this.show()

        start()
    }

    //显示
    this.show = function(){
        document.getElementById('gnum').innerHTML = this.num
    }

}
// 开始游戏
function start (){
     // 每次定时器开启之前删除上一次调用，防止多次开启
     clearInterval(timer)
     // 设置定时器
     timer = setInterval(function (){
         // 让蛇动起来
         snake.run()
     },l.speed)
}

// 关卡
var l = new Level()
l.show()
// 创建速度
var speed = 200
// 创建得分
var index = 1
// 创建地图实例对象
var map = new Map(20, 40, 20)
map.creat()
// 创建食物实例
var food = new Food(map)
// 创建蛇的实例化对象
var snake = new Snake(map)
snake.display()


// 给开始按钮绑定事件
document.getElementsByClassName("start")[0].onclick = function (){
    start()
}
// 给键盘绑定事件
window.onkeydown = function (event){
    var event = event || window.event
    // 默认蛇是向右的
    // console.log(event.keyCode)
    switch(event.keyCode){
        /*
            up W 87
            down S 83
            left A 65
            right D 68
        */
        case 87 : 
        // 在向下走的时候，不能向上走
            if( snake.direction != "down"){
                snake.direction = "up"
                break
            }
                
        case 83 : 
            if( snake.direction != "up"){
                snake.direction = "down"
                break
            }

        case 65 : 
            if( snake.direction != "right"){
                snake.direction = "left"
                break
            }

        case 68 : 
            if( snake.direction != "left"){
                snake.direction = "right"
                break
            }
    }
}
//给暂停按钮绑定监听事件
document.getElementsByClassName("pause")[0].onclick = function (){
    //清除定时器，暂停游戏
    clearInterval(timer)
}
