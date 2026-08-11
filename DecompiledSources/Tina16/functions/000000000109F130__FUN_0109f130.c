/* Ghidra address: 0109f130 */
/* Ghidra symbol: FUN_0109f130 */


void FUN_0109f130(longlong param_1)

{
  char cVar1;
  
  cVar1 = _GetThreadFlag(*(undefined8 *)(param_1 + 0x9c0),0x4000);
  if (cVar1 == '\0') {
    cVar1 = _GetThreadFlag(*(undefined8 *)(param_1 + 0x9c0),0x8000);
    if (cVar1 == '\0') {
      cVar1 = _GetThreadFlag(*(undefined8 *)(param_1 + 0x9c0),1);
      if (cVar1 != '\0') {
        _ClearThreadFlag(*(undefined8 *)(param_1 + 0x9c0),1);
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1660) + 0x3548) + 0x38) = 0;
        FUN_0109f0b0(param_1);
      }
    }
    else {
      _ClearThreadFlag(*(undefined8 *)(param_1 + 0x9c0),0x8000);
      FUN_0109f070(param_1);
    }
  }
  else {
    _ClearThreadFlag(*(undefined8 *)(param_1 + 0x9c0),0x4000);
    _Dbg_SetStopped(*(undefined8 *)(param_1 + 0x9c0),1);
    FUN_0109f0b0(param_1);
  }
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  return;
}

