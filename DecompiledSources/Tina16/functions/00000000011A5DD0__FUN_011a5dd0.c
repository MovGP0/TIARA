/* Ghidra address: 011a5dd0 */
/* Ghidra symbol: FUN_011a5dd0 */


void FUN_011a5dd0(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) < 7) {
    (**(code **)(*DAT_020c6568 + 0x120))(DAT_020c6568,param_1,param_2,local_res18[0]);
  }
  FUN_00414480(local_res18);
  return;
}

