// Copyright (c) 2012-2014 PHP Desktop Authors. All rights reserved.
// License: New BSD License.
// Website: http://code.google.com/p/phpdesktop/

#pragma once

#include "defines.h"

void CenterWindow(HWND hwnd);
bool CenterWindowRelativeToParent(HWND window, HWND parent);
void GetCorrectWindowSize(int* width, int* height);