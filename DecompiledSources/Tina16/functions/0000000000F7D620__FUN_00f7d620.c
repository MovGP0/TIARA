/* Ghidra address: 00f7d620 */
/* Ghidra symbol: FUN_00f7d620 */


undefined8 FUN_00f7d620(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_00414ad0(param_2,L"Thread is terminated");
  }
  else {
    cVar1 = _Dbg_IsSuspended(*(undefined8 *)(param_1 + 0x38));
    if ((cVar1 != '\0') &&
       (cVar1 = _GetThreadFlag(*(undefined8 *)(param_1 + 0x10),1), cVar1 == '\0')) {
      FUN_00414ad0(param_2,L"Thread is suspended");
      return param_2;
    }
    cVar1 = _Dbg_IsSuspended(*(undefined8 *)(param_1 + 0x38));
    if ((cVar1 == '\0') &&
       (cVar1 = _GetThreadFlag(*(undefined8 *)(param_1 + 0x10),1), cVar1 == '\0')) {
      FUN_00414ad0(param_2,L"Thread is running");
    }
  }
  return param_2;
}

