/* Ghidra address: 0088ee50 */
/* Ghidra symbol: FUN_0088ee50 */


longlong FUN_0088ee50(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    if ((param_1 == 0) || (*(uint *)(param_1 + 0x20) < 0x10)) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x28);
    }
  }
  else {
    lVar1 = FUN_0088ee30(*param_2);
    if (*(longlong *)(param_1 + 0x28) + (ulonglong)*(uint *)(param_1 + 0x20) <
        (ulonglong)((longlong)param_2 + lVar1 + 0x10)) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_0088ee30(*param_2);
      lVar1 = (longlong)param_2 + lVar1;
    }
  }
  return lVar1;
}

