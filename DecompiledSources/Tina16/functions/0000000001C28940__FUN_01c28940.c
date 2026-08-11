/* Ghidra address: 01c28940 */
/* Ghidra symbol: FUN_01c28940 */


bool FUN_01c28940(undefined8 param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar1 = FUN_004170c0(&LAB_01c289c4,local_res8[0],1);
  FUN_00414480(local_res8);
  return 0 < iVar1;
}

