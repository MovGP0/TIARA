/* Ghidra address: 00ea9d30 */
/* Ghidra symbol: FUN_00ea9d30 */


undefined8 FUN_00ea9d30(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_004170c0(&DAT_00ea9ebc,local_res10[0],1);
  iVar2 = FUN_004170c0(&DAT_00ea9ecc,local_res10[0],1);
  FUN_00416dc0(local_20,local_res10[0],iVar1,(iVar2 - iVar1) + 1);
  FUN_0043ea00(&local_30,local_20[0]);
  FUN_00414b50(local_20,local_30);
  FUN_00416dc0(&local_28,local_res10[0],1,iVar1 + -1);
  FUN_0043ea00(&local_38,local_28);
  FUN_00414b50(&local_28,local_38);
  FUN_00ea9bd0(&local_40,local_28,&DAT_00ea9edc,&DAT_00ea9eec);
  FUN_00416cd0(param_1,3,local_40,&DAT_00ea9edc,local_20[0]);
  FUN_00414560(&local_40,5);
  FUN_00414480(local_res10);
  return param_1;
}

