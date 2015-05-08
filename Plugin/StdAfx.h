
#pragma once

#define WIN32_LEAN_AND_MEAN
#define WINVER       _WIN32_WINNT_WINXP
#define _WIN32_WINNT _WIN32_WINNT_WINXP
#define _WIN32_IE_   _WIN32_WINNT_WINXP
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <mmsystem.h>
#include <tchar.h>
#include <math.h>
#include <crtdbg.h>
#include <intrin.h>

#pragma intrinsic(memset, memcpy, strcat, strcmp, strcpy, strlen, abs, fabs, labs, atan, atan2, tan, sqrt, sin, cos)

// IDA libs
#define USE_DANGEROUS_FUNCTIONS
#include <ida.hpp>
#include <auto.hpp>
#include <loader.hpp>
#include <search.hpp>
#include <typeinf.hpp>
#include <struct.hpp>
#include <nalt.hpp>
#include <demangle.hpp>

#include "Utility.h"

// Qt libs
#include <QtCore/QTextStream>
#include <QtCore/QFile>
#include <QtGui/QApplication>
#include <QtGui/QProgressDialog>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QHeaderView>
#include <QtGui/QScrollBar>
// (IDA SDK)\lib\x86_win_qt
#pragma comment(lib, "QtCore4.lib")
#pragma comment(lib, "QtGui4.lib")

#define STYLE_PATH ":/classinf/"

#define MY_VERSION MAKEWORD(0, 2) // Low, high, convention: 0 to 99
