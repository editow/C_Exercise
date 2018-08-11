#include<math.h>
#include<Windows.h>
extern "C" WINBASEAPI HWND WINAPI GetConsoleWindow();
int main(int argv, char *argc[])
{
	system("cls");
	HDC dc = GetDC(GetConsoleWindow());
	for (double i = 0; i < 2 * 3.1415926; i += 0.01){
		double r = 1 + cos(i), x = r*cos(i), y = r*sin(i);
		SetPixel(dc, x * 100 + 200, y * 100 + 200, 0xff12);
	}
	return 0;
}