/* Ghidra address: 00c23420 */
/* Ghidra symbol: FUN_00c23420 */


void FUN_00c23420(longlong *param_1,int param_2)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if ((param_2 < 0) || ((int)param_1[2] <= param_2)) {
    FUN_0041ddd0(local_20,PTR_PTR_02004e18);
    FUN_00c1a320(local_20[0]);
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  if (param_2 < (int)param_1[2]) {
    FUN_00409a70(param_1[1] + (longlong)(param_2 + 1) * 3,param_1[1] + (longlong)param_2 * 3,
                 (longlong)(((int)param_1[2] - param_2) * 3));
  }
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  (**(code **)(*param_1 + 0x38))(param_1);
  FUN_00414480(local_20);
  return;
}

