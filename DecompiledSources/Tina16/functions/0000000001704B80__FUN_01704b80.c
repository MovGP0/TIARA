/* Ghidra address: 01704b80 */
/* Ghidra symbol: FUN_01704b80 */


void FUN_01704b80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_10;
  
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00416cd0(&local_10,3,local_res10,&LAB_01704c48,local_res18);
  uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,local_10);
  FUN_004134c0(uVar1);
  FUN_00414480(&local_10);
  FUN_00414560(&local_res10,2);
  return;
}

