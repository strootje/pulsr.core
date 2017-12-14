#include <Pulsr.Core/Kernel/WindowManager.hpp>
#include <cstdlib>
#include <string>

class WindowManager : public Pulsr::Core::Kernel::WindowManager
{
// public:
	void Create( const std::string& name ) { /* nothing */}
	bool HasWork() { return true; }
	void Update() { /* nothing */ }
};

int main(int argc, char* argv[])
{
	WindowManager testManager;
	return EXIT_SUCCESS;
}
