/* Ghidra address: 00408590 */
/* Ghidra symbol: FUN_00408590 */


longlong FUN_00408590(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  FUN_00409a70(param_1,param_2,param_3 & 0xffffffff);
  return param_2 + (param_3 & 0xffffffff);
}

