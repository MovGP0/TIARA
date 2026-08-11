/* Ghidra address: 008fc960 */
/* Ghidra symbol: FUN_008fc960 */


undefined1 FUN_008fc960(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong local_res8 [4];
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00416dc0(local_20,local_res8[0],1,2);
  iVar2 = FUN_00416db0(local_20[0],&DAT_008fcad8);
  if (iVar2 == 0) {
    iVar2 = 0;
    if (local_res8[0] != 0) {
      iVar2 = *(int *)(local_res8[0] + -4);
    }
    FUN_00416dc0(local_res8,local_res8[0],3,iVar2 + -2);
    iVar2 = FUN_004170c0(&DAT_008fcaec,local_res8[0],1);
    if (iVar2 < 1) {
      local_31 = FUN_008fcf40(local_res8[0]);
    }
    else {
      FUN_00416dc0(&local_28,local_res8[0],1,iVar2 + -1);
      cVar1 = FUN_008fcf40(local_28);
      if (cVar1 == '\0') {
        local_31 = 0;
      }
      else {
        iVar3 = 0;
        if (local_res8[0] != 0) {
          iVar3 = *(int *)(local_res8[0] + -4);
        }
        FUN_00416dc0(&local_30,local_res8[0],iVar2,(iVar3 - iVar2) + 1);
        local_31 = FUN_008fcaf0(local_30);
      }
    }
  }
  else {
    local_31 = 0;
  }
  FUN_00414560(&local_30,3);
  FUN_00414480(local_res8);
  return local_31;
}

