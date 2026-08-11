/* Ghidra address: 009ea280 */
/* Ghidra symbol: FUN_009ea280 */


void FUN_009ea280(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  (**(code **)(*param_1 + 0x130))(param_1);
  if ((int)param_1[7] == *(int *)((longlong)param_1 + 0x3c)) {
    FUN_009ea120(param_1);
  }
  if (param_2 < (int)param_1[7]) {
    FUN_00409a70(param_1[6] + (longlong)param_2 * 0x10,param_1[6] + (longlong)(param_2 + 1) * 0x10,
                 (longlong)(((int)param_1[7] - param_2) * 0x10));
  }
  puVar1 = (undefined8 *)(param_1[6] + (longlong)param_2 * 0x10);
  *puVar1 = 0;
  puVar1[1] = param_4;
  FUN_00414b90(puVar1,param_3);
  *(int *)(param_1 + 7) = (int)param_1[7] + 1;
  (**(code **)(*param_1 + 0x128))(param_1);
  return;
}

