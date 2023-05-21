#pragma once

#ifdef SERVER_EXPORTS 
#define SERVER_API __declspec(dllexport)
#else
#define SERVER_API __declspec(dllimport)
#endif

extern "C" SERVER_API void giveText(std::string input);