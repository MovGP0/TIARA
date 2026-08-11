/* Ghidra address: 00647f00 */
/* Ghidra symbol: FUN_00647f00 */


void FUN_00647f00(undefined4 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_00647eb0(param_2);
  if (cVar1 == '\0') {
    thunk_FUN_0410f747(param_1);
  }
  else {
    uVar2 = GetDpiForWindow(param_2);
    GetSystemMetricsForDpi(param_1,uVar2);
  }
  return;
}

