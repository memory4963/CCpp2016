#PushBoxs
##1. 让玩家选择关卡
##2. 画出图形
##3. 将图形保存在文件中
##4. 玩家每走一步，就从总分中扣一分， 总分300分
##5. 推箱子步骤：
###1.判断：

####1)人前面是路，可移动，将人移到前面

####2)人前面是目标，将人移到目标上，标记为T

####3)人前面是箱子，判断：

1. 箱子前面是路，将箱子移到前面，人移到箱子处

2. 箱子前面是目标，将箱子移到目标并标为R，人移到箱子处

####4）人前面是R，判断：

1. R前面是路，将箱子移到前面，人移到箱子处变为T

2. R前面是X，将箱子移到X处变为R，人移到箱子处变为T

tip:每次更改值判断map[x][y]是否为T
###2.每次移动判断是否整个地图有3个R，判定玩家是否胜利，返回一个bool值是否跳出循环，0为继续，1为结束