# Design-Pattern
1.策略模式
	策略模式通常把一个系列的算法包装到一系列的策略类里面，作为一个抽象策略类的子类。
	将抽象接口对象放到锦囊Context中，用于注入不同的策略类实现，从而达到很好的可扩展性。
  
2.代理模式
	给某一个对象提供一个代理，并由代理对象控制对原对象的引用。代理模式的英文叫做Proxy它是一种对象结构型模式。
	
3.简单工厂模式
	对于工厂模式，具体上可以分为三类：简单工厂模式；工厂方法模式；抽象工厂模式。
	对于上面的三种工厂模式，从上到下逐步抽象，并且更具一般性。
	在程序中，需要创建的对象很多，导致对象的new操作多且杂时，需要使用简单工厂模式。

4.工厂方法模式
	工厂方法模式是在简单工厂模式的基础上，对“工厂”添加了一个抽象层。将工厂共同的动作抽象出来，作为抽象类，而具体的行为由子类本身去实现，让子类去决定生产什么样的产品。
	在设计的初期，就考虑到产品在后期会进行扩展的情况下，可以使用工厂方法模式；
	产品结构较复杂的情况下，可以使用工厂方法模式；
	
5.建造者模式
	建造者模式生成的对象有复杂的内部结构，将分步骤的去构建一个复杂的对象，分多少步是确定的，而每一步的实现是不同的，可能经常发生变化；
	一个复杂对象是由多个部件组成的，建造者模式是把复杂对象的创建和部件的创建分别开来，分别用Builder类和Director类来表示。
	用Director构建最后的复杂对象，而在上面Builder接口中封装的是如何创建一个个部件（复杂对象是由这些部件组成的），也就是说，Director负责如何将部件最后组装成产品。这样建造者模式就让设计和实现解耦了。
