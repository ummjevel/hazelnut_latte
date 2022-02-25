#pragma once

#include "Hazel/Layer.h"

namespace HAzel {
	class ImGuiLayer : public Layer {
	public:
		ImGuiLayer();
		~ImGuiLayer();

		void OnUpdate();
		void OnEvent(Event& event);

	private:

	};
}