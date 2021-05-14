#pragma once

extern rtr::Application* rtr::CreateApplication();

int main(int argc, char** argv)
{
	rtr::Application* app = rtr::CreateApplication();
	app->Run();
	delete app;
}