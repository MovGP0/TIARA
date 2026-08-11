/* Ghidra address: 008fc510 */
/* Ghidra symbol: FUN_008fc510 */


undefined1 FUN_008fc510(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong local_res8 [4];
  undefined1 local_31;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar2 = FUN_004170c0(&DAT_008fc63c,local_res8[0],1);
  if (iVar2 < 1) {
    local_31 = 0;
  }
  else {
    iVar3 = 0;
    if (local_res8[0] != 0) {
      iVar3 = *(int *)(local_res8[0] + -4);
    }
    FUN_00416dc0(local_20,local_res8[0],iVar2 + 1,iVar3 - iVar2);
    FUN_00416dc0(local_30,local_res8[0],1,iVar2 + -1);
    cVar1 = FUN_008fce40(local_30[0]);
    if ((cVar1 == '\0') ||
       ((cVar1 = FUN_008fc7a0(local_20[0]), cVar1 == '\0' &&
        (cVar1 = FUN_008fc8e0(local_20[0]), cVar1 == '\0')))) {
      local_31 = 0;
    }
    else {
      local_31 = 1;
    }
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  FUN_00414480(local_res8);
  return local_31;
}

