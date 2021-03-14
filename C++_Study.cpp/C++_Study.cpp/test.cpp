#include<iostream>
using namespace std;

//namespace LY//命名空间解决自己定义的名字冲突的问题
//{
//	int printf = 1;
//}
//namespace RNGLY
//{
//	int ADD(int a, int b)
//	{
//		return a + b;
//	}
//}
////using namespace RNGLY;//展开命名空间（缺点：整个暴露出来，失去了隔离效果）
////using RNGLY::ADD;//指定展开
//int main()
//{
//	//printf("%d\n", LY::printf);//指定命名空间的形式访问
//	//ADD(1, 2);//展开后就可以直接访问
//	//ADD(1, 2);//只能访问指定展开的
//	return 0;
//}

//#include<iostream>//IO流文件
//using namespace std;//std是C++库里面的命名空间（防止命名冲突）
//
//int main()
//{
//	cout << "hello world" << endl;
//	int a = 1;
//	float f = 1.11;
//	printf("%d,%0.2f\n", a, f);
//	cout << a << ',' << f << endl;//不需要指定类型格式，自动识别格式，而且更形象
//	return 0;
//}