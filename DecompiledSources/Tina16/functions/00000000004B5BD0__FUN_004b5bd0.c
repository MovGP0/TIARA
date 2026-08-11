/* Ghidra address: 004b5bd0 */
/* Ghidra symbol: FUN_004b5bd0 */


void FUN_004b5bd0(longlong *param_1,int param_2,int param_3)

{
  if ((param_2 < 0) || ((int)param_1[8] <= param_2)) {
    FUN_004b3510(param_1,PTR_PTR_02004940,param_2);
  }
  if ((param_3 < 0) || ((int)param_1[8] <= param_3)) {
    FUN_004b3510(param_1,PTR_PTR_02004940,param_3);
  }
  (**(code **)(*param_1 + 0x130))(param_1);
  FUN_004b5c50(param_1,param_2,param_3);
  (**(code **)(*param_1 + 0x128))(param_1);
  return;
}

