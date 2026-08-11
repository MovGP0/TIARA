/* Ghidra address: 0163ebf0 */
/* Ghidra symbol: FUN_0163ebf0 */


void FUN_0163ebf0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 local_30;
  undefined8 local_28;
  int local_1c [3];
  
  local_30 = 0;
  local_28 = 0;
  FUN_004b84c0(param_2,local_1c,4);
  if (-1 < local_1c[0] + -1) {
    do {
      FUN_01b20f00(&local_30,param_2);
      FUN_004168b0(&local_28,local_30);
      (**(code **)(*param_3 + 0x78))(param_3,local_28);
      local_1c[0] = local_1c[0] + -1;
    } while (local_1c[0] != 0);
  }
  FUN_00414520(&local_30);
  FUN_00414480(&local_28);
  return;
}

