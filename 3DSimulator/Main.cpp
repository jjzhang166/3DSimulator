/*
기능
1. 윈도우 핸들링
2. 직사각형, 원, 큐브, 구체 -> 크기 조절, 색 조절, 텍스쳐
3. 모델링
4. 모든 것을 ImGui로 제어
*/

#include "Engine/RenderWindow.h"
#include "Engine/Graphics.h"
#include <iostream>

int main()
{
	auto renderWindow = RenderWindow(1200, 900, "3DSimulator");
	if (!renderWindow.Initialize())
	{
		std::cout << "Failed to initialize a RenderWindow class." << std::endl;
		return -1;
	}

	while (renderWindow.IsOpen())
	{
		renderWindow.Clear(Mask::Color);

		// RENDER

		renderWindow.SwapBuffers();
		renderWindow.PollEvents();
	}

	renderWindow.Terminate();

	return 0;
}