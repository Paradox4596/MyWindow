#include <Windows.h>

// 4. ���ν��� �ۼ�

const wchar_t gClassName[] = L"MyWindowClass";

LRESULT CALLBACK WindowProc(HWND hWhd, UNIT message, WPA)

// entry point
int WINAPI WinMain(_In_ HINSTANCE hInstance,
					_In_opt_ HINSTANCE hPrevInstance,
					_In_ LPSTR lpCmdLine,
					_In_ int nShowCmd)

{
	// 1. '������Ŭ����' ���
	WNDCLASSEX wc{};
	// ***important***
	ZeroMemory(&wc, sizeof(WNDCLASSEX));
	wc.style = CS_HREDRAW | CS
	
	// 2. '������'�� ����
	// 3. '������޽���' ó��
	
	MessageBox(nullptr, L"Hello World", L"MyWindow", MB_ICONEXCLAMATION | MB_OK);

	int ret = MessageBox(nullptr, L"Hello World", L"MyWindow", MB_ICONQUESTION | MB_OKCANCEL);

	return 0;
}