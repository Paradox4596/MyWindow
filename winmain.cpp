#include <Windows.h>

// 4. 프로시저 작성

const wchar_t gClassName[] = L"MyWindowClass";

LRESULT CALLBACK WindowProc(HWND hWhd, UNIT message, WPA)

// entry point
int WINAPI WinMain(_In_ HINSTANCE hInstance,
					_In_opt_ HINSTANCE hPrevInstance,
					_In_ LPSTR lpCmdLine,
					_In_ int nShowCmd)

{
	// 1. '윈도우클래스' 등록
	WNDCLASSEX wc{};
	// ***important***
	ZeroMemory(&wc, sizeof(WNDCLASSEX));
	wc.style = CS_HREDRAW | CS
	
	// 2. '윈도우'를 생성
	// 3. '윈도우메시지' 처리
	
	MessageBox(nullptr, L"Hello World", L"MyWindow", MB_ICONEXCLAMATION | MB_OK);

	int ret = MessageBox(nullptr, L"Hello World", L"MyWindow", MB_ICONQUESTION | MB_OKCANCEL);

	return 0;
}