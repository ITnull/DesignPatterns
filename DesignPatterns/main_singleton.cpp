#include<iostream>
#include<string>

using namespace std;

/*����ģʽֻ�ܴ���һ��ʵ������*/
class Singleton{
public:
	static Singleton* getInstance(){
		if ( singleton == NULL ){
			singleton = new Singleton();
		}
		//singleton = new Singleton();
		return singleton;
	}

private:
	Singleton(){
		cout << "private��ֹ���캯��new����." << endl;
	}

	static Singleton* singleton;
};

Singleton* Singleton::singleton = NULL;
//Singleton* singleton = NULL;������ôд

int main(){
	//����д���Ǵ���ģ�������ͨ��Ա����������Singleton::
	//Ӧ�þ��嵽ʵ�ʵ�������У��� obj.getInstance()
	//Singleton* singleton1 = Singleton::getInstance();
	
	//ֻ��static�Ķ����ʹ��Singleton::
	//��Ϊ���еľ�̬�����ǹ���һ����
	Singleton* singleton1 = Singleton::getInstance();
	Singleton* singleton2 = Singleton::getInstance();

	if (singleton1 == singleton2){
		cout << "����������һ���ġ�" << endl;
	}
	else{
		cout << "���������ǲ�һ���ġ�" << endl;
	}

	system("pause");
	return 0;
}