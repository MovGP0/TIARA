/* Ghidra address: 015fd240 */
/* Ghidra symbol: FUN_015fd240 */


bool FUN_015fd240(undefined8 param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined8 local_10;
  
  local_10 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_0043e1a0(&local_10,local_res8[0]);
  FUN_00414b50(local_res8,local_10);
  iVar1 = FUN_004170c0(&LAB_015fd2f4,local_res8[0],1);
  FUN_00414480(&local_10);
  FUN_00414480(local_res8);
  return iVar1 == 0;
}

