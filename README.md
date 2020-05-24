# 前端难点
## var let const区别  
var有变量提升，在全局定义下变量在window上，let、const在全局定义时，不在window上，功能上let和const基本一致，const一旦赋值就不能改了 

## new的实现原理  
1.创建一个空对象  
2.指向原型  
3.绑定this  
4.返回新对象

## call apply bind区别  
call、apply功能相同，都是改变this的指向，并立刻执行，区别在于传递参数不同。apply传的是数组对象，而call是一个个的值。bind返回一个函数。

## 继承  
原型继承  
组合继承  
寄生组合继承
