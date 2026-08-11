/* Ghidra address: 00d1c180 */
/* Ghidra symbol: FUN_00d1c180 */


void FUN_00d1c180(longlong *param_1)

{
  uint uVar1;
  ulonglong local_20;
  
  uVar1 = *(uint *)(param_1 + 5);
  *(undefined1 *)((longlong)param_1 + (longlong)(int)(uVar1 & 0x3f) + 0x2c) = 1;
  uVar1 = (uVar1 & 0x3f) + 1;
  if (0x38 < uVar1) {
    FUN_0040d200((longlong)param_1 + (longlong)(int)uVar1 + 0x2c,(longlong)(int)(0x40 - uVar1),0);
    (**(code **)(*param_1 + 0x68))(param_1,(longlong)param_1 + 0x2c);
    uVar1 = 0;
  }
  FUN_0040d200((longlong)param_1 + (longlong)(int)uVar1 + 0x2c,(longlong)(int)(0x40 - uVar1),0);
  local_20 = (ulonglong)(uint)((int)param_1[5] * 8);
  FUN_00409a70(&local_20,(longlong)param_1 + 100,8);
  (**(code **)(*param_1 + 0x68))(param_1,(longlong)param_1 + 0x2c);
  FUN_0040d200((longlong)param_1 + 0x2c,0x40,0);
  FUN_00d0d260(param_1,0);
  return;
}

