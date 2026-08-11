/* Ghidra address: 00eaec40 */
/* Ghidra symbol: FUN_00eaec40 */


void FUN_00eaec40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_00414610(local_res18);
  (**(code **)(*DAT_0202ea70 + 0x18))(DAT_0202ea70,local_res8,local_res10,local_res18);
  FUN_00414560(&local_res8,3);
  return;
}

