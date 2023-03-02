#include"Assistance.h"
#include"SeqStack.h"
using namespace std;
int main()
{
	SeqStack<Vehicle>s(5);
	Vehicle w,z;
	int d,l,v;
	char c='9';
	while (c != '0')
	{
		cout << endl << "1. 生成车辆信息.";
		cout << endl << "2. 显示车辆信息.";
		cout << endl << "3. 总长度.";
		cout << endl << "4. 取栈顶元素.";
		cout << endl << "5. 出栈.";
		cout << endl << "0. 退出"<<endl;
		cin >> c;
		switch (c)
		{
		case'1':
			s.Clear();
			cout << "当前容量为5" << endl;
			cout << "请按车牌号，进场时间（年，月，日，时，分，秒）输入" << endl;
			cout << "要输入几个车辆信息" << endl;
			cin >> d;
			cout << "请输入" << endl;
			for (int i = 0; i < d; i++) {
				cin >> w;
				s.Push(w);
			}
			if (d > 5) {
				v = s.GetMaxsize();
				cout << "已扩增容量，容量为：" << v << endl;
			}
			break;
		case'2':
			s.Traverse(Write<Vehicle>);
			cout << endl;
			break;
		case'3':
			l = s.GetLength();
			cout << "栈的长度为：" << l << endl;
			break;
		case'4':
			s.Top(z);
			cout << "栈顶元素为：" << z << endl;
			break;
		case'5':
			s.Pop(z);
			cout << "原栈顶元素为：" << z << endl;
			s.Traverse(Write<Vehicle>);
			break;
		case'0':
			return 0;
		}
	}
	return 0;
}