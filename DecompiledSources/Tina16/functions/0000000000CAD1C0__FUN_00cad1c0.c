/* Ghidra address: 00cad1c0 */
/* Ghidra symbol: FUN_00cad1c0 */


void FUN_00cad1c0(longlong param_1,longlong *param_2,int param_3,undefined8 param_4)

{
  undefined8 local_res20;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  local_res20 = param_4;
  FUN_0041b910(param_4);
  FUN_00875240(local_20,local_res20,*(undefined8 *)(param_1 + 0x150),3);
  FUN_0041b840(&local_res20,local_20[0]);
  local_2c = param_3;
  if (param_3 < 0) {
    local_2c = FUN_00cad710(param_1,1);
  }
  if (-1 < local_2c + -1) {
    do {
      FUN_00cad9f0(param_1,&local_28,local_res20);
      (**(code **)(*param_2 + 0x78))(param_2,local_28);
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  FUN_00414480(&local_28);
  FUN_0041b800(local_20);
  FUN_0041b800(&local_res20);
  return;
}

