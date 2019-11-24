#include <window.hpp>

namespace sfx::gui {

	LRESULT CALLBACK window_proc(HWND window_handle, UINT message, WPARAM wparam, LPARAM lparam) {

		if (message == WM_CLOSE) {
			PostQuitMessage(0);
		}

		return DefWindowProcW(window_handle, message, wparam, lparam);

	}

	window::window(std::wstring title, int width, int height) {


		auto instance = GetModuleHandleW(nullptr);

		WNDCLASSEX window_class{
			sizeof(WNDCLASSEX), CS_VREDRAW | CS_HREDRAW, window_proc,
			0, sizeof(this), instance, nullptr, nullptr, nullptr, nullptr,
			L"bruno_prozor", nullptr
		};

		RegisterClassExW(&window_class);
		_window_handle = CreateWindowExW(
			0, window_class.lpszClassName, title.c_str(), WS_OVERLAPPEDWINDOW,
			10, 10, width, height, nullptr, nullptr, instance, this
		);

		UpdateWindow(_window_handle);
		ShowWindow(_window_handle, SW_SHOW);


	}

}
