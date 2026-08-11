/* Ghidra address: 006d8070 */
/* Ghidra symbol: FUN_006d8070 */


void FUN_006d8070(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int local_28;
  int local_24;
  short *local_20;
  
  FUN_00650a80(param_1,param_2);
  local_20 = (short *)(param_2 + 0x10);
  local_28 = (int)*local_20;
  local_24 = (int)*(short *)(param_2 + 0x12);
  lVar1 = FUN_006d7fb0(param_1,&local_28);
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x4c1) == '\0')) {
    FUN_0064e9e0(lVar1,0,0xffffffff);
  }
  return;
}

