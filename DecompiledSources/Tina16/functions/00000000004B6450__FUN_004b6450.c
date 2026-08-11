/* Ghidra address: 004b6450 */
/* Ghidra symbol: FUN_004b6450 */


void FUN_004b6450(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  (**(code **)(*param_1 + 0x130))(param_1);
  if ((int)param_1[8] == *(int *)((longlong)param_1 + 0x44)) {
    FUN_004b5de0(param_1);
  }
  if (param_2 < (int)param_1[8]) {
    FUN_00409a70(param_1[7] + (longlong)param_2 * 0x10,param_1[7] + (longlong)(param_2 + 1) * 0x10,
                 (longlong)(((int)param_1[8] - param_2) * 0x10));
  }
  lVar1 = (longlong)param_2;
  *(undefined8 *)(param_1[7] + lVar1 * 0x10) = 0;
  *(undefined8 *)(param_1[7] + 8 + lVar1 * 0x10) = 0;
  *(undefined8 *)(param_1[7] + 8 + lVar1 * 0x10) = param_4;
  FUN_00414ad0(param_1[7] + lVar1 * 0x10,param_3);
  *(int *)(param_1 + 8) = (int)param_1[8] + 1;
  (**(code **)(*param_1 + 0x128))(param_1);
  return;
}

