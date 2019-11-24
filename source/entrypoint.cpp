#include <stdexcept>

auto main() -> int try {
	return 0;

}
catch (std::exception const& exception) {

#ifdef _DEBUG
	throw exception;
#endif

	return -1;
}