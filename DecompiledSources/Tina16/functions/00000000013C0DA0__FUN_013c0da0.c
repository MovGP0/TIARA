/* Ghidra address: 013c0da0 */
/* Ghidra symbol: FUN_013c0da0 */


bool FUN_013c0da0(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong local_res8;
  longlong local_res10;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  iVar3 = FUN_004170c0(local_res10,local_res8,1);
  iVar4 = 0;
  if (local_res10 != 0) {
    iVar4 = *(int *)(local_res10 + -4);
  }
  iVar4 = iVar3 + iVar4;
  iVar5 = 0;
  if (local_res8 != 0) {
    iVar5 = *(int *)(local_res8 + -4);
  }
  iVar3 = iVar3 + -1;
  cVar2 = '\0';
  if ((iVar3 == 0) && (iVar4 == iVar5 + 1)) {
    cVar2 = '\0';
  }
  else if ((iVar3 < 1) || (iVar4 != iVar5 + 1)) {
    if ((iVar3 == 0) && (iVar4 <= iVar5)) {
      cVar2 = FUN_013c0d70(*(undefined2 *)(local_res8 + -2 + (longlong)iVar4 * 2));
    }
    else if ((0 < iVar3) && (iVar4 <= iVar5)) {
      uVar1 = *(undefined2 *)(local_res8 + -2 + (longlong)iVar4 * 2);
      cVar2 = FUN_013c0d70(*(undefined2 *)(local_res8 + -2 + (longlong)iVar3 * 2));
      if (cVar2 == '\0') {
        cVar2 = FUN_013c0d70(uVar1);
        if (cVar2 == '\0') {
          cVar2 = '\0';
          goto LAB_013c0eb2;
        }
      }
      cVar2 = '\x01';
    }
  }
  else {
    cVar2 = FUN_013c0d70(*(undefined2 *)(local_res8 + -2 + (longlong)iVar3 * 2));
  }
LAB_013c0eb2:
  FUN_00414560(&local_28,2);
  FUN_00414560(&local_res8,2);
  return cVar2 == '\0';
}

