#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	 
	float top = 15;    // ��֪���߳�
	float bottom = 25; // ��֪�ױ߳�
	float s1 = 100;    // ��֪���������
	float s2;          // ����������� 
	
	s2 = s1 * bottom / top + s1;
	
	cout << s2 << endl;
	
	return 0;
}
