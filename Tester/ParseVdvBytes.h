#include <string>
#include <iostream>
using namespace std;

#ifndef _PARSE_VDV_BYTES_H_INCLUDE
#define _PARSE_VDV_BYTES_H_INCLUDE
#ifdef DLLPARSE_VDV_BYTES_EXPORTS
#define EXPORTS_PARSE_VDV_BYTES _declspec( dllexport )
#else
#define EXPORTS_PARSE_VDV_BYTES _declspec(dllimport)
#endif


//VOID  BuildFeigSelectCmdWithCRC(BYTE UID[], INT UIDLen,BYTE * cmd, INT &  cmdLen );
void Test();
void Test1(string s);
void Test2(string & s);
#endif