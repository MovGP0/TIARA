/* Ghidra address: 00f81c30 */
/* Ghidra symbol: FUN_00f81c30 */


undefined8 FUN_00f81c30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  uVar1 = FUN_00f81350(&DAT_00f7e218,1,local_res10,local_res18);
  FUN_004ae7e0(param_1,uVar1);
  FUN_00414560(&local_res10,2);
  return uVar1;
}

