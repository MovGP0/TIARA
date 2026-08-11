/* Ghidra address: 01b87ac0 */
/* Ghidra symbol: FUN_01b87ac0 */


void FUN_01b87ac0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18[0]);
  iVar2 = FUN_004170c0(&DAT_01b87c3c,local_res18[0],1);
  if (0 < iVar2) {
    FUN_00450070(&local_10,local_res18[0],&DAT_01b87c3c,0,1);
    FUN_00414b50(local_res18,local_10);
  }
  iVar2 = FUN_004170c0(&DAT_01b87c50,local_res18[0],1);
  if (0 < iVar2) {
    FUN_00450070(&local_18,local_res18[0],&DAT_01b87c50,0,1);
    FUN_00414b50(local_res18,local_18);
  }
  FUN_00416cd0(&local_20,3,local_res10,&LAB_01b87c60,local_res18[0]);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x438);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_20);
  FUN_00414560(&local_20,3);
  FUN_00414560(&local_res10,2);
  return;
}

