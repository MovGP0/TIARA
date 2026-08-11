/* Ghidra address: 01718230 */
/* Ghidra symbol: FUN_01718230 */


undefined1 FUN_01718230(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong local_res10;
  longlong local_res18;
  undefined1 local_19;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610();
  lVar3 = local_res18;
  lVar2 = local_res10;
  cVar1 = *(char *)(param_1 + 600);
  if (cVar1 == '\0') {
    iVar5 = FUN_004170c0(local_res10,local_res18,1);
    local_19 = iVar5 == 1;
  }
  else if (cVar1 == '\x01') {
    iVar5 = FUN_004170c0(local_res10,local_res18,1);
    local_19 = 0 < iVar5;
  }
  else if (cVar1 == '\x02') {
    iVar5 = 0;
    if (local_res18 != 0) {
      iVar5 = *(int *)(local_res18 + -4);
    }
    iVar4 = 0;
    if (local_res10 != 0) {
      iVar4 = *(int *)(local_res10 + -4);
    }
    if (iVar4 < iVar5) {
      iVar4 = FUN_004170c0(local_res10,local_res18,1);
      iVar5 = 0;
      if (lVar3 != 0) {
        iVar5 = *(int *)(lVar3 + -4);
      }
      iVar6 = 0;
      if (lVar2 != 0) {
        iVar6 = *(int *)(lVar2 + -4);
      }
      local_19 = iVar4 == (iVar5 - iVar6) + 1;
    }
    else {
      local_19 = 0;
    }
  }
  FUN_00414560(&local_res10,2);
  return local_19;
}

