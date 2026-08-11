/* Ghidra address: 00848790 */
/* Ghidra symbol: FUN_00848790 */


void FUN_00848790(longlong *param_1,int param_2)

{
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  if ((int)param_1[0x98] != param_2) {
    if (param_2 < 0) {
      FUN_0041ddd0(local_20,PTR_PTR_02004318);
      FUN_0083d530(local_20[0]);
    }
    if ((int)param_1[0x9c] <= param_2) {
      FUN_0041ddd0(&local_28,PTR_PTR_02004138);
      FUN_0083d530(local_28);
    }
    *(int *)(param_1 + 0x98) = param_2;
    FUN_00844190();
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  FUN_00414560(&local_28,2);
  return;
}

