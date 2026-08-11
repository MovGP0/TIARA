/* Ghidra address: 00f7d500 */
/* Ghidra symbol: FUN_00f7d500 */


void FUN_00f7d500(longlong param_1)

{
  char cVar1;
  
  cVar1 = _GetThreadFlag(*(undefined8 *)(param_1 + 0x10),0x4000);
  if (cVar1 == '\0') {
    cVar1 = _GetThreadFlag(*(undefined8 *)(param_1 + 0x10),0x8000);
    if (cVar1 == '\0') {
      cVar1 = _GetThreadFlag(*(undefined8 *)(param_1 + 0x10),1);
      if (cVar1 != '\0') {
        _ClearThreadFlag(*(undefined8 *)(param_1 + 0x10),1);
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0xc6c) = 1;
      }
    }
    else {
      _ClearThreadFlag(*(undefined8 *)(param_1 + 0x10),0x8000);
      FUN_00f7d2b0(param_1);
      *(undefined4 *)(param_1 + 0xc6c) = 0x8000;
    }
  }
  else {
    _ClearThreadFlag(*(undefined8 *)(param_1 + 0x10),0x4000);
    _Dbg_SetStopped(*(undefined8 *)(param_1 + 0x10),1);
    FUN_00f7d2b0(param_1);
    *(undefined4 *)(param_1 + 0xc6c) = 0x4000;
  }
  return;
}

