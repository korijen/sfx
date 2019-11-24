#include <stdexcept>
#include <application.hpp>

auto main() -> int try {
	sfx::application app {};
	
	return app.execute();


}
catch (std::exception const& exception) {

#ifdef _DEBUG
	throw exception;
#endif

	return -1;
}