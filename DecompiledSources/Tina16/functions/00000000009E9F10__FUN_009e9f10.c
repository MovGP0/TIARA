/* Ghidra address: 009e9f10 */
/* Ghidra symbol: FUN_009e9f10 */


void FUN_009e9f10(longlong *param_1,int param_2,int param_3)

{
  if ((param_2 < 0) || ((int)param_1[7] <= param_2)) {
    FUN_009e7910(param_1,PTR_PTR_02004940,param_2);
  }
  if ((param_3 < 0) || ((int)param_1[7] <= param_3)) {
    FUN_009e7910(param_1,PTR_PTR_02004940,param_3);
  }
  (**(code **)(*param_1 + 0x130))(param_1);
  FUN_009e9f90(param_1,param_2,param_3);
  (**(code **)(*param_1 + 0x128))(param_1);
  return;
}

