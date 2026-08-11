/* Ghidra address: 01196220 */
/* Ghidra symbol: FUN_01196220 */


void FUN_01196220(undefined4 param_1,int param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  (**(code **)(*DAT_02042090 + 0x120))(DAT_02042090,param_1,param_2 * 2,local_res18[0]);
  FUN_00414480(local_res18);
  return;
}

