/* Ghidra address: 004b8b50 */
/* Ghidra symbol: FUN_004b8b50 */


void FUN_004b8b50(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  uVar1 = param_3;
  if (4 < (longlong)param_3) {
    uVar1 = 4;
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2,uVar1 & 0xffffffff);
  if ((longlong)uVar1 < (longlong)param_3) {
    FUN_004b9610(param_1,param_3 - uVar1);
  }
  return;
}

