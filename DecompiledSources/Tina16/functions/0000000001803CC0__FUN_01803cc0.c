/* Ghidra address: 01803cc0 */
/* Ghidra symbol: FUN_01803cc0 */


undefined8 * FUN_01803cc0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_res18 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_20[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_0043e5a0(&local_28,local_res18[0]);
  FUN_00416cd0(local_20,3,&DAT_01803e9c,local_28,&DAT_01803eac);
  FUN_00416ba0(&local_38,&DAT_01803e9c,*(undefined8 *)(param_1 + 0x30));
  FUN_0043e5a0(&local_30,local_38);
  iVar1 = FUN_004170c0(local_20[0],local_30,1);
  if (iVar1 == 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00416ba0(&local_40,local_res18[0],&DAT_01803eac);
    iVar2 = FUN_00414cb0(local_40);
    FUN_00416dc0(param_2,*(undefined8 *)(param_1 + 0x30),iVar1 + iVar2,0x7fffffff);
    iVar1 = FUN_004170c0(&LAB_01803ec0,*param_2,1);
    FUN_00416dc0(&local_50,*param_2,1,iVar1 + -1);
    FUN_018033c0(&local_48,local_50);
    FUN_00414ad0(param_2,local_48);
  }
  FUN_00414560(&local_50,7);
  FUN_00414480(local_res18);
  return param_2;
}

