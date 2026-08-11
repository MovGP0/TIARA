/* Ghidra address: 015fcfd0 */
/* Ghidra symbol: FUN_015fcfd0 */


void FUN_015fcfd0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res8 [2];
  undefined8 local_res18 [2];
  
  local_res8[0] = param_1;
  local_res18[0] = param_3;
  FUN_00414610(param_1);
  FUN_00414610(local_res18[0]);
  uVar1 = FUN_015749b0(&PTR_FUN_015726b8,1,local_res8[0],local_res18[0],param_2,0x100);
  FUN_004134c0(uVar1);
  FUN_00414480(local_res8);
  FUN_00414480(local_res18);
  return;
}

