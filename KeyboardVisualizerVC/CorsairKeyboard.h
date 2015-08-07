#pragma once

#include <sstream>
#include <wchar.h>
#include <string.h>
#include <Windows.h>
extern "C"
{
	#include <hidsdi.h>
}
#include <setupapi.h>
#include <cfgmgr32.h>

class CorsairKeyboard
{
public:
	CorsairKeyboard();
	~CorsairKeyboard();

	int Initialize();
	void SetLEDs(COLORREF pixels[64][256]);

private:
	HANDLE dev;
	void send_usb_msg(char * data_pkt);
};

