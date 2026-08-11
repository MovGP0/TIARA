/* Ghidra address: 01955590 */
/* Ghidra symbol: FUN_01955590 */


void FUN_01955590(longlong *param_1)

{
  undefined4 uVar1;
  
  FUN_01950940(param_1);
  uVar1 = FUN_0040c770(((double)param_1[0x14] * (double)(int)param_1[0x41]) / (double)DAT_01fb7de8);
  FUN_0064cb90(param_1[0x34],uVar1);
  (**(code **)(*param_1 + 0x2b0))(param_1);
  return;
}

