/* Ghidra address: 009e9e30 */
/* Ghidra symbol: FUN_009e9e30 */


void FUN_009e9e30(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  if ((param_2 < 0) || ((int)param_1[7] <= param_2)) {
    FUN_009e7910(param_1,PTR_PTR_02004940,param_2);
  }
  (**(code **)(*param_1 + 0x130))(param_1);
  if ((char)param_1[0xd] != '\0') {
    lVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
    if (lVar1 != 0) {
      FUN_00410f20(lVar1);
    }
  }
  FUN_00417740(param_1[6] + (longlong)param_2 * 0x10,&DAT_009e63d0);
  *(int *)(param_1 + 7) = (int)param_1[7] + -1;
  if (param_2 < (int)param_1[7]) {
    FUN_00409a70(param_1[6] + (longlong)(param_2 + 1) * 0x10,param_1[6] + (longlong)param_2 * 0x10,
                 (longlong)(((int)param_1[7] - param_2) * 0x10));
    *(undefined8 *)(param_1[6] + (longlong)(int)param_1[7] * 0x10) = 0;
  }
  (**(code **)(*param_1 + 0x128))(param_1);
  return;
}

