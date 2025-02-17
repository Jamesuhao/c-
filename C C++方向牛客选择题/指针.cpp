#if 0
#1下列程序的运行结果为：1 2 15
#include<stdio.h>
void main()
{
	short* p, * q;
	short arr[15] = { 0 };
	p = q = arr;
	p++;
	printf("%d,", p - q);
	printf("%d,", (char*)p - (char*)q);
	printf("%d", sizeof(arr) / sizeof(*arr));
}
注解：指针自增、自减每次移动的偏移量是指针所指向对象的字节大小，所以p++与q的偏移量是2个字节。
指针相减的值是指针地址的偏移除以指针每次移位的大小；
1)p - q = 1; 偏移量为2个字节，每次移动2个字节，所以为1
2)(char*)p - (char*)q，指针的偏移没变，但是每次指针移位是按照（char * ）类型移动，即每次移动1个字节，所以是2
3）数字每次元素2个字节，所以sizeof(arr)为30，sizeof(*arr)为2。

#2指针可以做减法、比较、指向同一块内存空间，但是不能相加，因为相加是没有意义的

#3以下关于C++的描述中哪一个是正确的(C)
A 任何指针都必须指向一个实例
B 子类指针不可以指向父类实例
C 任何引用都必须指向一个实例
D 引用所指向的实例不可能无效

#4下面关于"指针"的描述不正确的是(A)
A 当使用free释放掉一个指针内容后, 指针变量的值被置为NULL   //free只负责释放空间
B 32位系统下任何类型指针的长度都是4个字节
C 指针的数据类型声明的是指针实际指向内容的数据类型
D 野指针是指向未分配或者已经释放的内存地址

#5以下程序的输出结果为(A)
#include <iostream>
using namespace std;
void func(char** m) {
	++m;
	cout << *m << endl;
}
int main() {
	static char* a[] = { "morning", "afternoon", "evening" };
	char** p;
	p = a;
	func(p);
	return 0;
A afternoon
B 字符o的起始地址
C 字符o
D 字符a的起始地址
注解：
p指向数组a的首地址，指针m++即为p++即为a++，指向数组中第二个元素的地址，解引用拿到第二个字符串。

#6二维数组X按行顺序存储，其中每个元素占1个存储单元。若X[4][4]的存储地址为Oxf8b82140, 
X[9][9]的存储地址为Oxf8b8221c, 则X[7][7]的存储地址为(A)。 ？？？
A Oxf8b821c4
B Oxf8b821a6
C Oxf8b82198
D Oxf8b821c0
注解：
先求出一行有多少个元素：21C-140=5n+5==>n=43
然后根据元素个数求地址，43×3+3=132==>84
84+140=1c4

#7下面关于this指针的说法正确的是：
A.调用类的成员函数时，对象的地址会隐式地作为第一个参数传递给this指针；
B.通过取地址符 & 可以获得this指针的地址；
C.对象进行sizeof运算时会加上this指针所占用的空间；
D.不能对this指针进行赋值操作。
注解：
只有在访问类的非静态成员函数时编译器才会自动将对象的地址隐式地作为第一个参数传递给this指针，而在访问匪类跌静态成员函数时并不会如此，因此A是错误的。
由于this指针是一种特殊的指针，无法直接获取this指针的地址，如果试图通过取地址符来获取this指针的地址，编译器会报错。因此B是错误的。
由于this指针并不是类的成员，不属于类的一部分，其作用与仅局限于非静态成员函数内部，因此C是错误的。
由于this指针只能指向试图访问非静态成员的对象本身，而不能指向其他的对象，因此this指针是一个常量，不能修改this指针的值。D正确。

#8如果有一个类是 myClass, 关于下面代码正确描述的是:C
myClass::~myClass() {
	delete this;
	this = NULL;
}
A 正确，我们避免了内存泄漏
B 它会导致栈溢出
C 无法编译通过
D 这是不正确的，它没有释放任何成员变量。
注解：this不能被赋值的
#endif

