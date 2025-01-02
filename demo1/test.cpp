#include <iostream>
#include <memory>


using namespace std;

class Test :public enable_shared_from_this<Test>
{
public:
	Test() {}
	~Test() {}
	shared_ptr<Test> getPtr()
	{
		return shared_from_this();
	}

	void set(int id, string name)
	{
		_id = id;
		_name = name;
	}

	int getId()
	{
		return _id;
	}

	string getName()
	{
		return _name;
	}
private:
	string _name;
	int _id;
};


int main()
{
	shared_ptr<Test>t1 = make_shared<Test>();
	t1->set(1, "test");
	cout << "id:" << t1->getId() << endl;
	cout << "name:" << t1->getName() << endl;
	
	std::cin.get();
	return 0;
}