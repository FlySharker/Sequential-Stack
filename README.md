# 顺序栈
1．顺序栈的验证与改造 
（1）定义一个结构体，描述停车场中车辆的信息。车辆信息包括：车牌号（8 个字符）、
进场时间（年、月、日、时、分、秒）。用描述车辆信息的结构体作为栈的数据元素类
型测试顺序栈的实现。
（2）修改顺序栈的入栈成员函数 push（x），要求当栈满时，执行私有成员函数
stackfull()进行栈满处理。其功能是：动态创建一个比原来的栈数组大一倍的新数组，
代替原来的栈数组，原来栈数组中的元素占据新数组的前半部分的位置。
