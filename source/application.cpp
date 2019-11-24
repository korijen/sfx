#include <application.hpp>

namespace sfx {

	application::application(){

		_window = std::make_unique<gui::window>(L"Project SFX", 1280, 720);
	
	}
	auto application::execute() -> int {

		MSG message_structure{};

		while (message_structure.message != WM_QUIT) {

			if (PeekMessageW(&message_structure, nullptr, 0, 0, PM_REMOVE)) {
				TranslateMessage(&message_structure);
				DispatchMessageW(&message_structure);
			}
			else {
				// ...
			}

		}


		return static_cast<int>(message_structure.wParam);
	}
}
