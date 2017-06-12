#include "stdafx.h"  //________________________________________ Enteros.cpp
#include "Enteros.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Enteros app;
	return app.BeginDialog(IDI_Enteros, hInstance);
}

void Enteros::Window_Open(Win::Event& e)
{
	int anos = 22;
	this->MessageBoxW(Sys::Convert::ToString(anos), L"Edad", MB_OK);
}

