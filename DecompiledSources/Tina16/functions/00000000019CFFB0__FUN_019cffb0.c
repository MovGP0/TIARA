/* Ghidra address: 019cffb0 */
/* Ghidra symbol: FUN_019cffb0 */


void FUN_019cffb0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int local_20;
  int iStack_1c;
  
  uVar1 = *param_2;
  local_20 = (int)uVar1;
  uVar2 = FUN_0040c770(((double)local_20 / (double)*(int *)(param_1 + 100)) *
                       (double)*(int *)(param_1 + 0x5c));
  *param_3 = uVar2;
  iStack_1c = (int)((ulonglong)uVar1 >> 0x20);
  uVar2 = FUN_0040c770(((double)iStack_1c / (double)*(int *)(param_1 + 0x68)) *
                       (double)*(int *)(param_1 + 0x60));
  param_3[1] = uVar2;
  return;
}

