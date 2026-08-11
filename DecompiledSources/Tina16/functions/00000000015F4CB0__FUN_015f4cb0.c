/* Ghidra address: 015f4cb0 */
/* Ghidra symbol: FUN_015f4cb0 */


undefined8 FUN_015f4cb0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong local_res10;
  undefined8 local_res18;
  undefined1 local_30 [8];
  int local_28;
  undefined8 local_20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00417580(local_30,&DAT_00e021a8);
  iVar4 = 0;
  if (local_res10 != 0) {
    iVar4 = *(int *)(local_res10 + -4);
  }
  FUN_00414b50(local_30,local_res18);
  iVar2 = FUN_00416db0(local_res18,&DAT_015f4e30);
  if (iVar2 == 0) {
    if (iVar4 == 1) {
      uVar3 = FUN_015f4ad0();
      local_28 = -1 - (uVar3 & 0xff);
    }
    else {
      cVar1 = FUN_015f4c00(local_res10);
      if (cVar1 == '\0') {
        local_28 = 0;
      }
      else {
        local_28 = FUN_01aa1170(local_res10);
      }
    }
  }
  else {
    iVar4 = FUN_00416db0(local_res18,&DAT_015f4e40);
    if (iVar4 == 0) {
      local_28 = FUN_01aa1170(local_res10);
    }
    else {
      iVar4 = FUN_00416db0(local_res18,&LAB_015f4e50);
      if (iVar4 == 0) {
        local_20 = FUN_00448650(local_res10,PTR_DAT_02004830);
      }
    }
  }
  FUN_00417c40(param_1,local_30,&DAT_00e021a8);
  FUN_00417740(local_30,&DAT_00e021a8);
  FUN_00414560(&local_res10,2);
  return param_1;
}

