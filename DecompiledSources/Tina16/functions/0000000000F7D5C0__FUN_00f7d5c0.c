/* Ghidra address: 00f7d5c0 */
/* Ghidra symbol: FUN_00f7d5c0 */


undefined8 FUN_00f7d5c0(longlong param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == 0x10000) {
    cVar1 = _Dbg_IsSuspended(*(undefined8 *)(param_1 + 0x38));
    if ((cVar1 == '\0') &&
       (cVar1 = _GetThreadFlag(*(undefined8 *)(param_1 + 0x10),1), cVar1 == '\0')) {
      return 1;
    }
    uVar2 = 0;
  }
  else if (param_2 == 0x20000) {
    uVar2 = _Dbg_IsSuspended(*(undefined8 *)(param_1 + 0x38));
  }
  else {
    uVar2 = _GetThreadFlag(*(undefined8 *)(param_1 + 0x10));
  }
  return uVar2;
}

