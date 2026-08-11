/* Ghidra address: 00c65f70 */
/* Ghidra symbol: FUN_00c65f70 */


longlong * FUN_00c65f70(longlong *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_248 [40];
  undefined1 *local_220;
  undefined1 local_218 [512];
  longlong local_18;
  undefined8 local_10;
  
  local_220 = auStack_248;
  local_10 = FUN_005ea3c0(&DAT_005e7878,1);
  local_18 = 0;
  FUN_00414480(param_1);
  if (param_2 == '\f') {
    FUN_005ea670(local_10,0xffffffff80000000);
    cVar1 = FUN_005ea880(local_10,L"\\CLSID\\{208D2C60-3AEA-1069-A2D7-08002B30309D}",0);
    if (cVar1 != '\0') {
      FUN_005eb6d0(local_10,param_1,0);
      FUN_005ea630(local_10);
    }
    if (*param_1 == 0) {
      FUN_00414ad0(param_1,L"Network");
    }
  }
  else if (param_2 == '\a') {
    FUN_005ea670(local_10,0xffffffff80000000);
    cVar1 = FUN_005ea880(local_10,L"\\CLSID\\{00021400-0000-0000-C000-000000000046}",0);
    if (cVar1 != '\0') {
      FUN_005eb6d0(local_10,param_1,0);
      FUN_005ea630(local_10);
    }
    iVar2 = FUN_00416db0(*param_1,L"Desktop");
    if (iVar2 == 0) {
      if (local_18 == 0) {
        local_18 = thunk_FUN_04163be6(L"SHELL32.DLL");
      }
      iVar2 = thunk_FUN_039b3fd2(local_18,0x1042,local_218,0xfe);
      if (iVar2 < 1) {
        FUN_00414ad0(param_1,L"Desktop");
      }
      else {
        FUN_004167d0(param_1,local_218);
      }
    }
  }
  else if (param_2 == '\t') {
    FUN_005ea670(local_10,0xffffffff80000001);
    cVar1 = FUN_005ea880(local_10,
                         L"\\SOFTWARE\\Classes\\CLSID\\{20D04FE0-3AEA-1069-A2D8-08002B30309D}",0);
    if (cVar1 != '\0') {
      FUN_005eb6d0(local_10,param_1,0);
      FUN_005ea630(local_10);
    }
    if (*param_1 == 0) {
      if (local_18 == 0) {
        local_18 = thunk_FUN_04163be6(L"SHELL32.DLL");
      }
      iVar2 = thunk_FUN_039b3fd2(local_18,0x2400,local_218,0xfe);
      if (iVar2 < 1) {
        FUN_00414ad0(param_1,L"My Computer");
      }
      else {
        FUN_004167d0(param_1,local_218);
      }
    }
  }
  else if (param_2 == '\r') {
    FUN_005ea670(local_10,0xffffffff80000001);
    cVar1 = FUN_005ea880(local_10,
                         L"\\SOFTWARE\\Classes\\CLSID\\{450D8FBA-AD25-11D0-98A8-0800361B1103}",0);
    if (cVar1 != '\0') {
      FUN_005eb6d0(local_10,param_1,0);
      FUN_005ea630(local_10);
    }
    if (*param_1 == 0) {
      if (local_18 == 0) {
        local_18 = thunk_FUN_04163be6(L"SHELL32.DLL");
      }
      iVar2 = thunk_FUN_039b3fd2(local_18,0x238c,local_218,0xfe);
      if (iVar2 < 1) {
        FUN_00414ad0(param_1,L"My Documents");
      }
      else {
        FUN_004167d0(param_1,local_218);
      }
    }
  }
  else if (param_2 == '\x0e') {
    FUN_00414ad0(param_1,L"Favorites");
  }
  else if (param_2 == '\x11') {
    FUN_00414ad0(param_1,L"Recent");
  }
  else {
    FUN_00414480(param_1);
  }
  if (local_18 != 0) {
    thunk_FUN_041c8c2f(local_18);
  }
  FUN_00410f20(local_10);
  return param_1;
}

