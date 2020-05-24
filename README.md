# 前端难点
## var let const区别  
var有变量提升，在全局定义下变量在window上，let、const在全局定义时，不在window上，功能上let和const基本一致，const一旦赋值就不能改了 

## new的实现原理  
1.创建一个空对象  
2.指向原型  
3.绑定this  
4.返回新对象
