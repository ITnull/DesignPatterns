#include<iostream>
#include<string>

using namespace std;

/*单例模式只能创建一个实例对象*/
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
		cout << "private阻止构造函数new对象." << endl;
	}

	static Singleton* singleton;
};

Singleton* Singleton::singleton = NULL;
//Singleton* singleton = NULL;不能这么写

int main(){
	//以下写法是错误的，不能普通成员函数不能是Singleton::
	//应该具体到实际的类对象当中，如 obj.getInstance()
	//Singleton* singleton1 = Singleton::getInstance();
	
	//只有static的对象才使用Singleton::
	//因为类中的静态对象是共享一个的
	Singleton* singleton1 = Singleton::getInstance();
	Singleton* singleton2 = Singleton::getInstance();

	if (singleton1 == singleton2){
		cout << "两个对象是一样的。" << endl;
	}
	else{
		cout << "两个对象是不一样的。" << endl;
	}

	system("pause");
	return 0;
}