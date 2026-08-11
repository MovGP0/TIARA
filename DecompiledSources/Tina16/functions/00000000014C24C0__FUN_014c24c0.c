/* Ghidra address: 014c24c0 */
/* Ghidra symbol: FUN_014c24c0 */


undefined8 FUN_014c24c0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_0044f900(&LAB_014c2544,local_res10[0]);
  FUN_005b8960(param_1,local_res10[0],1,iVar1 + -1);
  FUN_00414480(local_res10);
  return param_1;
}

