/* Ghidra address: 01b05080 */
/* Ghidra symbol: FUN_01b05080 */


void FUN_01b05080(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res8 [2];
  undefined8 local_res18 [2];
  
  local_res8[0] = param_1;
  local_res18[0] = param_3;
  FUN_00414610(param_1);
  FUN_00414610(local_res18[0]);
  uVar1 = FUN_0044d9f0(&PTR_FUN_01af2c90,1,local_res8[0],param_2);
  FUN_004134c0(uVar1);
  FUN_00414480(local_res8);
  FUN_00414480(local_res18);
  return;
}

