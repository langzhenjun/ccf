#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	 
	float top = 15;    // ��֪���߳�
	float bottom = 25; // ��֪�ױ߳�
	float height;      // ��
	float s1 = 100;    // ��֪���������
	float s2;          // ����������� 
	
	height = s1 * 2 / top;
	s2 = (top + bottom) * height / 2;
	
	cout << s2 << endl;
	
	return 0;
}
