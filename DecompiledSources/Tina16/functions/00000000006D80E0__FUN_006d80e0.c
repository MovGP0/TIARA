/* Ghidra address: 006d80e0 */
/* Ghidra symbol: FUN_006d80e0 */


void FUN_006d80e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int local_28;
  int local_24;
  short *local_20;
  
  FUN_00650b30(param_1,param_2);
  local_20 = (short *)(param_2 + 0x10);
  local_28 = (int)*local_20;
  local_24 = (int)*(short *)(param_2 + 0x12);
  lVar1 = FUN_006d7fb0(param_1,&local_28);
  if (lVar1 != 0) {
    FUN_0064f3f0(lVar1,0,0,0);
  }
  return;
}

