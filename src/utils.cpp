#if defined(_WIN32)
	#include <Windows.h>
#endif

#include <chrono>
#include <thread>
#include "utils.h"

#if defined(_WIN32)
void  enableANSI() {
	HANDLE h0out = GetStdHandle(STD_OUTPUT_HANDLE);
	DWORD dwMode = 0;
	GetConsoleMode(h0out, &dwMode);
	dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
	SetConsoleMode(h0out, dwMode);

}
#endif
void delaysec(int s) {
	std::this_thread::sleep_for(std::chrono::seconds(s));
}