/* Ghidra address: 01c16de0 */
/* Ghidra symbol: FUN_01c16de0 */


void FUN_01c16de0(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_2;
  uStack_30 = param_2[1];
  local_res18[0] = param_3;
  local_res20 = param_4;
  FUN_00414610(param_4);
  (**(code **)(*param_1 + 0x1f8))(param_1,&local_38,local_res18,local_res20);
  FUN_00414480(&local_res20);
  return;
}

