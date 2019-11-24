#pragma once
#include <string>
#include <Windows.h>

namespace sfx::gui {

	struct window {

		window(std::wstring title, int width, int height);
		
	private:
		HWND _window_handle;
		
	};
	

}