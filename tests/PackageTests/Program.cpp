#include <Pulsr.Core/Window/Manager.hpp>

class TestWindowManager : public Pulsr::Core::Window::Manager
{
public:
	void Create( const std::string& name )
	{
	};

	bool HasWork()
	{
		return false;
	};

	void Update()
	{
	};
};

int main(int argc, char* argv[])
{
	TestWindowManager windowManager;
	windowManager.Create("Hello, World");
	return 0;
}
