// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�

#pragma once

#ifndef STRICT
#define STRICT
#endif

#include "targetver.h"

#define _ATL_APARTMENT_THREADED

#define _ATL_NO_AUTOMATIC_NAMESPACE

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// ĳЩ CString ���캯��������ʽ��


#define ATL_NO_ASSERT_ON_DESTROY_NONEXISTENT_WINDOW

#include "resource.h"
#include <atlbase.h>
#include <atlcom.h>
#include <atlctl.h>

#pragma pack(push)
#pragma pack(4)

#include <cor.h>
#include <corsym.h>
#include <corprof.h>
#include <corhlpr.h>

#pragma pack(pop)

#include <string>
#include <vector>
#include <hash_map>

#ifdef UNICODE
#define tstring std::wstring
#else
#define tstring std::string
#endif