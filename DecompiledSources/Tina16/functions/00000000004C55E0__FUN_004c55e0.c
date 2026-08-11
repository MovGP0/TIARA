/* Ghidra address: 004c55e0 */
/* Ghidra symbol: FUN_004c55e0 */


void FUN_004c55e0(undefined8 param_1,wchar_t *param_2)

{
  int iVar1;
  bool bVar2;
  
  if (param_2 == L"False") {
    bVar2 = true;
  }
  else if (param_2 == (wchar_t *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_0043e420(param_2,L"False");
    bVar2 = iVar1 == 0;
  }
  if (bVar2) {
    FUN_004c8510(param_1,8);
  }
  else {
    if (param_2 == L"True") {
      bVar2 = true;
    }
    else if (param_2 == (wchar_t *)0x0) {
      bVar2 = false;
    }
    else {
      iVar1 = FUN_0043e420(param_2,L"True");
      bVar2 = iVar1 == 0;
    }
    if (bVar2) {
      FUN_004c8510(param_1,9);
    }
    else {
      if (param_2 == L"Null") {
        bVar2 = true;
      }
      else if (param_2 == (wchar_t *)0x0) {
        bVar2 = false;
      }
      else {
        iVar1 = FUN_0043e420(param_2,L"Null");
        bVar2 = iVar1 == 0;
      }
      if (bVar2) {
        FUN_004c8510(param_1,0);
      }
      else {
        if (param_2 == L"nil") {
          bVar2 = true;
        }
        else if (param_2 == (wchar_t *)0x0) {
          bVar2 = false;
        }
        else {
          iVar1 = FUN_0043e420(param_2,&LAB_004c578c);
          bVar2 = iVar1 == 0;
        }
        if (bVar2) {
          FUN_004c8510(param_1,0xd);
        }
        else {
          FUN_004c8510(param_1,7);
          FUN_004c8440(param_1,param_2);
        }
      }
    }
  }
  return;
}

