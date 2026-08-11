/* Ghidra address: 01b7fd30 */
/* Ghidra symbol: FUN_01b7fd30 */


bool FUN_01b7fd30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar1 = FUN_004170c0(&DAT_01b7fe7c,local_res8[0],1);
  if (0 < iVar1) {
    FUN_00416dc0(&local_28,local_res8[0],1,iVar1 + -1);
    FUN_0043ea00(local_20,local_28);
    FUN_00414ad0(param_2,local_20[0]);
    FUN_00416dc0(&local_38,local_res8[0],iVar1 + 1,0xff);
    FUN_0043ea00(&local_30,local_38);
    FUN_00414ad0(param_3,local_30);
  }
  FUN_00414560(&local_38,4);
  FUN_00414480(local_res8);
  return 0 < iVar1;
}

