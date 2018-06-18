# **C++与C论述**
## 总论
>C++ 几乎是 C 的超集，只有少量功能 C++ 不支持。
>![C](https://pic2.zhimg.com/80/ef1bd7c8d0129eb61578605baaef20d5_hd.jpg)
>![C++](https://pic4.zhimg.com/80/3c15be4b7e168355373109e39db31662_hd.jpg)
###### 来源： [C 与 C++ 的真正区别在哪里？ - Milo Yip的回答 - 知乎](https://www.zhihu.com/question/28834538/answer/100698972)

我在网上也曾经看到过一张图，我觉得也能体现出这句话。
![对比](https://i.loli.net/2018/03/16/5aab80c5c0b00.jpg)

_______________________________________________
## C语言起源
>C的起源紧密相关的开发的Unix操作系统，在最初实现了汇编语言在PDP-7由Dennis Ritchie和肯·汤普森，从同事纳入一些想法。最终，他们决定将操作系统移植到PDP-11上。Unix的原始PDP-11版本是用汇编语言开发的。开发人员正在考虑使用Thompson简化版BCPL的B语言重写系统。然而，B无法利用PDP-11的一些特性，特别是字节寻址能力，导致了C的出现。
>C的开发始于1972年的PDP-11 Unix系统，并且最初出现在版本2 Unix中。该语言最初并没有考虑到可移植性，但很快就在不同的平台上运行：霍尼韦尔6000的编译器在C历史的第一年编写，而IBM System / 370端口很快就出现了。

## C++起源
>1979年，丹麦计算机科学家Bjarne Stroustrup开始研究C ++的前身“ C with Classes ”。创建一种新语言的动机起源于Stroustrup在博士学位编程方面的经验。论文。Stroustrup发现Simula具有对大型软件开发非常有用的特性，但是该语言在实际应用中速度太慢，而BCPL虽然快速但是太低级不适合大型软件开发。当Stroustrup的开始在工作AT＆T贝尔实验室，他分析的问题UNIX 内核相对于分布式计算。基于他博士学位的经验，Stroustrup着手用类似Simula的功能来增强C语言。
选择C语言， 是因为它是通用的，快速，便携和广泛使用。除了C和Simula的影响外，其他语言也影响C ++，包括ALGOL 68，Ada，CLU和ML。最初，Stroustrup的“C with Classes”为C编译器Cpre添加了一些功能，包括类，派生类，强类型，内联和默认参数。1983年，“C with Classes”被重新命名为“C ++”（++是C 中的增量运算符），增加了包括虚函数，函数名称和运算符重载，引用，常量，类型安全的free-store内存分配新/删除）。
——[维基百科](https://en.wikipedia.org/wiki/C%2B%2B#Etymology)

## C++哲学
- 它必须由实际问题驱动，其功能应该立即在现实世界中有用。
- 程序员应该可以自由选择他们自己的编程风格，并且该风格应该完全由C ++支持。
- 允许一个有用的功能比防止C ++的每一种可能的滥用都更为重要。
- 它应该提供设施来将程序组织成明确的单独部分，并提供将单独开发的部分组合起来的设施。
- 没有对类型系统的隐式违反（但允许显式违规;也就是程序员明确要求的那些）。
- 用户创建的类型需要与内置类型具有相同的支持和性能。
- 未使用的功能不应该对创建的可执行文件产生负面影响（例如性能较低）。
- C ++应该和其他现有的编程语言一起工作，而不是培养自己独立和不兼容的编程环境。
- 如果程序员的意图是未知的，则允许程序员通过提供手动控制来指定它。

## 区别
#### 1.类与对象
C++最开始的名字就是“C with class”。可见C++最初的设计目的就是为C语言扩展了“类”的功能。当然，“类”的出现使得C++有了比C语言更加强大的模块化设计能力。C++在大型工程中也比C语言有了更多的优势。C++的类的概念，体现了以现实世界中的问题为驱动的编程哲学。这是从面向过程的程序设计方法到面向对象的转变。
###### PS：C++不仅支持面向对象，还支持面向过程、泛型程序设计等方法的多重编程范式。
类的实质是一种数据类型，类似于int、char等基本类型，不同的是它是一种复杂的数据类型。因为它的本质是类型，而不是数据，所以不存在于内存中，不能被直接操作，只有被实例化为对象时，才会变得可操作。
___________________________________________________________
- **定义**
**类**是对现实生活中**一类具有共同特征的事物的抽象**。如果一个程序里提供的类型与应用中的概念有直接的对应，这个程序就会更容易理解，也更容易修改。一组经过很好选择的用户定义的类会使程序更简洁。此外，它还能使各种形式的代码分析更容易进行。特别地，它还会使编译器有可能检查对象的非法使用。
类的内部封装了方法，用于操作自身的成员。类是对某种对象的定义，具有行为，它描述一个对象能够做什么以及做的方法，它们是可以对这个对象进行操作的程序和过程。它包含有关对象行为方式的信息，包括它的名称、方法、属性和事件。
类的构成包括数据成员和成员函数。数据成员对应类的属性，类的数据成员也是一种数据类型，并不需要分配内存。成员函数则用于操作类的各项属性，是一个类具有的特有的操作，比如“学生”可以“上课”，而“水果”则不能。类和外界发生交互的操作称为接口。
**对象**就是以类为模板的实例。对象具有类中定义好的属性与方法、行为。类是对具有相同或相似性质的事物的抽象，而对象就是类的具体存在形式。

- **继承**
如果一个类别A“继承自”另一个类别B，就把这个A称为“B的子类别”，而把B称为“A的父类别”也可以称“B是A的超类”。继承可以使得子类别具有父类别的各种属性和方法，而不需要再次编写相同的代码。在令子类别继承父类别的同时，可以重新定义某些属性，并重写某些方法，即覆盖父类别的原有属性和方法，使其获得与父类别不同的功能。另外，为子类别追加新的属性和方法也是常见的做法。
子类拥有父类得特征，而父类没有，父类更通用，子类更具体。子类可以通过public、private和protected三种方式继承。而且可以同时继承多个父类，即“**多重继承**”。
继承的好处很显而易见：因为大部分是继承而来的，新的功能实现很容易； 易于修改和扩展已有的实现 。
缺点：打破了封装，因为基类向子类暴露了实现细节；白盒重用，因为基类的内部细节通常对子类是可见的；当父类的实现改变时可能要相应的对子类做出改变；不能在运行时改变由父类继承来的实现 
-  **封装与接口**
封装，即隐藏对象的属性和实现细节，仅对外公开接口，控制在程序中属性的读和修改的访问级别；将抽象得到的数据和行为（或功能）相结合，形成一个有机的整体，也就是将数据与操作数据的源代码进行有机的结合，形成“类”，其中数据和函数都是类的成员。
封装是对现实生活中常见现象的抽象。例如，我们日常见到的电脑，电视等设备，我们并不关心它们是如何实现传输视频、音频，如何将键盘上的敲击变为屏幕上的字母，我们要知道的是如何使用这些设备。这就是封装的意义——隐藏技术细节，只提供必要的信息交换途径——接口。
封装与接口技术带来了许多好处。实现了对成员访问权限的合理控制，使不同类之间的相互影响减少到最低限度，进而增强数据的安全性和简化程序的编写工作。

- **多态**
单一的接口提供不同的实体类型，即多态。同一操作作用于不同的对象，可以有不同的解释，产生不同的执行结果。但是多态又是区别于继承的。
形象地说，在一个学校里，“学生”、“老师”、“教务人员”是不同的对象，对于“上课铃声”这个消息，他们会做出不同的反应。学生在座位上做好上课准备；老师要在讲台上准备上课；教务人员要开始一天的事物——这就是多态。
> 多态指同样的消息被不同类型的对象接受时导致不同行为的现象。所谓消息是指调用不同类型对象的成员函数，不同的行为是指函数执行的内容。 
> ——《C++语言程序设计教程》
#### 2.数据流
C++中的数据是以抽象成流（stream）的形式进行交换的。常见的输入/输出流就分别是istream和ostream类实例化的对象cin和cout。除此之外还有文件I/O和字符串I/O等形式。以流的形式输入输出相比C语言中标准库函数输入输出，有很多**优点**。
- C语言中输入输出的数据无法保证其安全可靠。最常见的问题就是数据类型不匹配。
- C语言中需要记忆大量的格式字符，而C++中则可以简洁地进行。
```
cin>>Num1>>Num2;
cout<<"Hello, world!""<<endl
```

- printf()和scanf()不可扩展，只能输入输出基本数据类型，无法对用户自定义数据类型惊醒输入输出。
```
struct Student{
    char name[10];
    int id;
    double grade;
};
Stduent s = {"Bill", 1001, 3.5};
printf("%Student",s);        //语法错误
```
而C++通过输入输出流中运算符“<<”和“>>”的重载，就可以解决这类问题。

- 缓冲区。数据需要在不同的物理设备之间进行传输，各个部件处理和传送数据的速度又天壤之别，如果用户每输入一个字符就要CPU开启I/O通道，将会占用很多资源。于是通过开辟缓冲区用来存放暂时未被接受的数据，可以更好地匹配不同设备数据传输率的差异，提高资源利用率。
 
#### 3.多态性
**多态**不只是一个属于类的概念，多态包括了静态多态性和动态多态性。在类中的多态主要表现了其动态多态性。而静态多态性是指通过函数重载等方法，在编译时就确定的多态性。运算符重载和函数重载就是C++的主要的多态形式。
- 函数重载是指对于多个同名函数，通过区分其参数列表成员类型，使得同一个函数名可以实现多个功能。但是函数重载与默认参数连用时要注意。
- 运算符重载是通过`opertator`关键字实现的对运算符的重新定义，以适应不同的数据类型。运算符重载可以实现对象与对象的加法。

#### 4.其他
C++相比于C语言，还有诸多改进。比如，引入了**命名空间**，解决了变量与函数重名的问题；通过**const**、**内联（inline）**、**模板（template）**改善了C语言中因为宏出现的各种问题；**引用**的出现，极大程度代替了指针的地位，等。

## 缺点
#### C语言
- **面向对象编程功能缺失**
面向对象编程的特点是C语言缺少的，你只能使用面向过程的语言来开发程序。C没有的OOP概念，在面对大型工程时，一旦需要对某个功能进行修改，将会十分繁琐。
- **运行时类型检查是不可用**
在C语言没有规定运行时类型检查，比如我传递浮点值，而接收参数为整数类型那么值将会被改变，它不会给任何类型的错误信息。- 
- **构造函数和析构函数不可**
C不提供面向对象的特性，因此它不具有构造和析构功能。构造函数和析构函数用于构造对象和销毁对象。因此，在C语言中，你必须通过方法或者以其他方式来手动实现变量的析构和构造。


#### C++ 

- **功能过于丰富**
在C语言没有规定运行时类功能全面在C++的角度看，提供给程序员最为全面的功能，给与程序员极大的自由度。但是与此同时，C++也变得及其臃肿，规则复杂。也有人说过，没人能够精通C++。 
- **兼容C**
C++是一门从C语言中发展出来的语言。虽然和C又许多相似点，如今的C++，实际上已经和C大不相同了。C++兼容C语言会带来代码风格不统一。
- **接口混乱**
许多函数接口混乱，有些函数的接口提供的参数提供的指针，有的提供的是引用。

## 总结
C++的学习可以从C语言开始，C++本身是一门几乎全能的语言，从能力的角度看，C++毫无疑问比C语言更加优秀。但是要掌握C++，必须对其规则充分熟悉，对于C中不存在的虚函数等概念有深刻的理解。

## 参考资料
- CSDN
 - http://blog.csdn.net/he_zhidan/article/details/78026299
 - http://blog.csdn.net/njchenyi/article/details/1520440
- 维基百科
 - https://en.wikipedia.org/wiki/C++
 - https://en.wikipedia.org/wiki/C_(programming_language)
 - https://en.wikipedia.org/wiki/Polymorphism_(computer_science)
- 知乎 
 - https://www.zhihu.com/question/28834538/answer/100698972
 - https://www.zhihu.com/question/20200615/answer/19322336
 - https://www.zhihu.com/question/20200615/answer/52598753
- 《C++ Primer Plus》
- 《C++语言程序设计教程》