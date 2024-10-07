#include <iostream>
#include <string>
#include <utility/smart_ptr.h>
using namespace yazi::utility;
using std::string;
class Test
{
public:
	Test() = default;
	~Test()
	{
		std::cout << "Test is deleted" << std::endl;
	}

	void name(const string & name)
	{
		m_name = name;
		std::cout << "set new name " + m_name << std::endl;
	}
	string name() const
	{
		std::cout << "get name " + m_name << std::endl;
		return m_name;
	}
private:
	string m_name;
};

int main()
{
	auto p = new Test();
	
	SmartPtr<Test> sp(p);
	sp->name("jack");
	std::cout << sp->name() << std::endl;
	return 0;
}
