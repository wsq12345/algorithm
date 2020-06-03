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

## 重绘和回流
回流是指计算dom节点在设备视口的确切位置和大小的过程。（添加删除dom，位置变化，内容变化，开始渲染时，窗口大小变化）  
重绘是指将渲染树的每个节点都转换成屏幕上的实际像素。  
回流一定会触发重绘，重绘不一定触发回流。  

## 如何获取一个页面所有dom
利用document.getElementsByTagName("*")或者使用$$("*")获取到HTMLCollection（看起来像数组但是不能用数组的方法），再用es6的扩展运算符转换成数组
