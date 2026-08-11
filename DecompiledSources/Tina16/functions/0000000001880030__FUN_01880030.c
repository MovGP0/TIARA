/* Ghidra address: 01880030 */
/* Ghidra symbol: FUN_01880030 */


void FUN_01880030(longlong *param_1)

{
  ulonglong uVar1;
  
  (**(code **)(*(longlong *)param_1[4] + 0x90))((longlong *)param_1[4]);
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  FUN_004b67b0(param_1[4],(uVar1 & 2) != 0);
  return;
}

