/* Ghidra address: 00d1ae50 */
/* Ghidra symbol: FUN_00d1ae50 */


void FUN_00d1ae50(longlong param_1)

{
  uint uVar1;
  longlong local_20 [2];
  
  uVar1 = (*(uint *)(param_1 + 0x2c) & 0x1f) + 1;
  if (0x18 < uVar1) {
    FUN_0040d200(param_1 + 0x70 + (longlong)(int)uVar1,(longlong)(int)(0x20 - uVar1),0);
    FUN_00d1acd0(param_1,param_1 + 0x70);
    uVar1 = 0;
  }
  FUN_0040d200(param_1 + 0x70 + (longlong)(int)uVar1,(longlong)(int)(0x20 - uVar1),0);
  local_20[0] = (longlong)(*(int *)(param_1 + 0x2c) * 8);
  FUN_00409a70(local_20,param_1 + 0x88,8);
  FUN_00d1acd0(param_1,param_1 + 0x70);
  FUN_0040d200(param_1 + 0x70,0x20,0);
  FUN_00d0d260(param_1,0);
  return;
}

