/* Ghidra address: 00bff790 */
/* Ghidra symbol: FUN_00bff790 */


void FUN_00bff790(longlong param_1)

{
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  thunk_FUN_03cc0d62(local_20);
  local_20[0] = FUN_0064d3a0(param_1,local_20);
  if ((int)local_20[0] < *(int *)(param_1 + 0x910) + 2) {
    FUN_006508f0(param_1);
  }
  else {
    if ((*(uint *)(param_1 + 0x63a) & 0x2000) == 0) {
      local_30[0] = FUN_00bfaa10(param_1);
      FUN_00bff5d0(param_1,local_30);
    }
    FUN_006508f0(param_1);
    *(ushort *)(param_1 + 0x638) = *(ushort *)(param_1 + 0x638) | 0x20;
    *(ushort *)(param_1 + 0x638) = *(ushort *)(param_1 + 0x638) & 0xfbff;
    FUN_0064e190(param_1,0);
  }
  return;
}

