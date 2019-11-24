#pragma once

#include <memory>
#include <window.hpp>

namespace sfx {

	struct application{

		application();

		auto execute() -> int;

	private:
		std::unique_ptr<gui::window> _window;


	};
}