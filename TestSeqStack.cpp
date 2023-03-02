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
		cout << endl << "1. ���ɳ�����Ϣ.";
		cout << endl << "2. ��ʾ������Ϣ.";
		cout << endl << "3. �ܳ���.";
		cout << endl << "4. ȡջ��Ԫ��.";
		cout << endl << "5. ��ջ.";
		cout << endl << "0. �˳�"<<endl;
		cin >> c;
		switch (c)
		{
		case'1':
			s.Clear();
			cout << "��ǰ����Ϊ5" << endl;
			cout << "�밴���ƺţ�����ʱ�䣨�꣬�£��գ�ʱ���֣��룩����" << endl;
			cout << "Ҫ���뼸��������Ϣ" << endl;
			cin >> d;
			cout << "������" << endl;
			for (int i = 0; i < d; i++) {
				cin >> w;
				s.Push(w);
			}
			if (d > 5) {
				v = s.GetMaxsize();
				cout << "����������������Ϊ��" << v << endl;
			}
			break;
		case'2':
			s.Traverse(Write<Vehicle>);
			cout << endl;
			break;
		case'3':
			l = s.GetLength();
			cout << "ջ�ĳ���Ϊ��" << l << endl;
			break;
		case'4':
			s.Top(z);
			cout << "ջ��Ԫ��Ϊ��" << z << endl;
			break;
		case'5':
			s.Pop(z);
			cout << "ԭջ��Ԫ��Ϊ��" << z << endl;
			s.Traverse(Write<Vehicle>);
			break;
		case'0':
			return 0;
		}
	}
	return 0;
}