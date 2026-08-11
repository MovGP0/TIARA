/* Ghidra address: 008fd560 */
/* Ghidra symbol: FUN_008fd560 */


undefined1 FUN_008fd560(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong local_res8 [4];
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar2 = 0;
  if (local_res8[0] != 0) {
    iVar2 = *(int *)(local_res8[0] + -4);
  }
  if (iVar2 == 0) {
    local_29 = 0;
  }
  else {
    local_29 = 1;
    iVar3 = iVar2;
    if (*(short *)(local_res8[0] + -2 + (longlong)iVar2 * 2) == 0x2e) {
      iVar2 = iVar2 + -1;
      iVar3 = iVar2;
    }
    while ((0 < iVar2 && (*(short *)(local_res8[0] + -2 + (longlong)iVar2 * 2) != 0x2e))) {
      iVar2 = iVar2 + -1;
    }
    FUN_00416dc0(local_20,local_res8[0],iVar2 + 2,iVar3 - iVar2);
    cVar1 = FUN_008fd7b0(local_20[0]);
    if (cVar1 == '\0') {
      local_29 = 0;
    }
    else {
      do {
        if (iVar2 < 1) goto LAB_008fd674;
        iVar3 = iVar2;
        if (*(short *)(local_res8[0] + -2 + (longlong)iVar2 * 2) == 0x2e) {
          iVar2 = iVar2 + -1;
          iVar3 = iVar2;
        }
        while ((0 < iVar2 && (*(short *)(local_res8[0] + -2 + (longlong)iVar2 * 2) != 0x2e))) {
          iVar2 = iVar2 + -1;
        }
        FUN_00416dc0(&local_28,local_res8[0],iVar2 + 2,iVar3 - iVar2);
        cVar1 = FUN_008fd6d0(local_28);
      } while (cVar1 != '\0');
      local_29 = 0;
    }
  }
LAB_008fd674:
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res8);
  return local_29;
}

