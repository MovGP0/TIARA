/* Ghidra address: 008e6230 */
/* Ghidra symbol: FUN_008e6230 */


undefined8 FUN_008e6230(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = thunk_FUN_041a78f9();
  if (iVar1 < 0x4e4) {
    if (iVar1 == 0x4e3) {
      FUN_00414ad0(param_2,L"windows-1251");
      return param_2;
    }
    if (iVar1 < 0x3b6) {
      if (iVar1 == 0x3b5) {
        FUN_00414ad0(param_2,L"cp949");
        return param_2;
      }
      if (iVar1 == 0x36a) {
        FUN_00414ad0(param_2,L"cp874");
        return param_2;
      }
      if (iVar1 == 0x3a4) {
        FUN_00414ad0(param_2,L"cp932");
        return param_2;
      }
      if (iVar1 == 0x3a8) {
        FUN_00414ad0(param_2,L"cp936");
        return param_2;
      }
    }
    else {
      if (iVar1 == 0x3b6) {
        FUN_00414ad0(param_2,L"cp950");
        return param_2;
      }
      if (iVar1 == 0x4b0) {
        FUN_00414ad0(param_2,L"ISO-10646-UCS-2");
        return param_2;
      }
      if (iVar1 == 0x4e2) {
        FUN_00414ad0(param_2,L"windows-1250");
        return param_2;
      }
    }
  }
  else if (iVar1 < 0x4e8) {
    if (iVar1 == 0x4e7) {
      FUN_00414ad0(param_2,L"windows-1255");
      return param_2;
    }
    if (iVar1 == 0x4e4) {
      FUN_00414ad0(param_2,L"windows-1252");
      return param_2;
    }
    if (iVar1 == 0x4e5) {
      FUN_00414ad0(param_2,L"windows-1253");
      return param_2;
    }
    if (iVar1 == 0x4e6) {
      FUN_00414ad0(param_2,L"windows-1254");
      return param_2;
    }
  }
  else {
    if (iVar1 == 0x4e8) {
      FUN_00414ad0(param_2,L"windows-1256");
      return param_2;
    }
    if (iVar1 == 0x4e9) {
      FUN_00414ad0(param_2,L"windows-1257");
      return param_2;
    }
  }
  FUN_00414480(param_2);
  return param_2;
}

