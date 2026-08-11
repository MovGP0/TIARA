/* Ghidra address: 01bbaaa0 */
/* Ghidra symbol: FUN_01bbaaa0 */


undefined1 FUN_01bbaaa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_00414610(local_res18);
  FUN_00416cd0(&local_10,3,local_res10,&DAT_01bbabbc,local_res18);
  iVar2 = FUN_00416db0(local_res8,local_10);
  if (iVar2 != 0) {
    FUN_00416cd0(&local_18,3,local_res10,&DAT_01bbabcc,local_res18);
    iVar2 = FUN_00416db0(local_res8,local_18);
    if (iVar2 != 0) {
      uVar1 = 0;
      goto LAB_01bbab4c;
    }
  }
  uVar1 = 1;
LAB_01bbab4c:
  FUN_00414560(&local_18,2);
  FUN_00414560(&local_res8,3);
  return uVar1;
}

