/* Ghidra address: 004b5ad0 */
/* Ghidra symbol: FUN_004b5ad0 */


void FUN_004b5ad0(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  if ((param_2 < 0) || ((int)param_1[8] <= param_2)) {
    FUN_004b3510(param_1,PTR_PTR_02004940,param_2);
  }
  (**(code **)(*param_1 + 0x130))(param_1);
  if ((char)param_1[0xe] == '\0') {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1[7] + 8 + (longlong)param_2 * 0x10);
  }
  FUN_00417740(param_1[7] + (longlong)param_2 * 0x10,&DAT_00478090);
  *(int *)(param_1 + 8) = (int)param_1[8] + -1;
  if (param_2 < (int)param_1[8]) {
    FUN_00409a70(param_1[7] + (longlong)(param_2 + 1) * 0x10,param_1[7] + (longlong)param_2 * 0x10,
                 (longlong)(((int)param_1[8] - param_2) * 0x10));
    *(undefined8 *)(param_1[7] + (longlong)(int)param_1[8] * 0x10) = 0;
    *(undefined8 *)(param_1[7] + 8 + (longlong)(int)param_1[8] * 0x10) = 0;
  }
  if (lVar1 != 0) {
    FUN_00410f20(lVar1);
  }
  (**(code **)(*param_1 + 0x128))(param_1);
  return;
}

