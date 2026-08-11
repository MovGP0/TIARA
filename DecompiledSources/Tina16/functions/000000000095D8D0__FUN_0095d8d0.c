/* Ghidra address: 0095d8d0 */
/* Ghidra symbol: FUN_0095d8d0 */


undefined1 FUN_0095d8d0(longlong param_1,undefined8 param_2,int *param_3,char param_4,char *param_5)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 local_49;
  int local_3c [3];
  
  *param_5 = '\0';
  local_49 = 0;
  iVar10 = *param_3;
  bVar1 = false;
  iVar9 = 0;
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))();
  iVar8 = 0;
  bVar3 = false;
  if (-1 < iVar5 + -1) {
    do {
      bVar1 = bVar3;
      local_3c[0] = *param_3;
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))
                        (*(longlong **)(param_1 + 0x38),iVar8);
      plVar7 = (longlong *)FUN_004113f0(uVar6,&PTR_FUN_00911b78);
      cVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,param_2,local_3c,param_5);
      iVar2 = iVar10;
      if (cVar4 == '\0') {
        bVar3 = bVar1;
        if (*param_5 != '\0') break;
      }
      else {
        bVar1 = true;
        bVar3 = true;
        if ((*param_3 != local_3c[0]) && (iVar9 = iVar9 + 1, iVar2 = local_3c[0], 1 < iVar9)) {
          *param_5 = '\x01';
          break;
        }
      }
      bVar1 = bVar3;
      iVar10 = iVar2;
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + -1;
      bVar3 = bVar1;
    } while (iVar5 != 0);
  }
  if (param_4 == '\0') {
    if (bVar1) {
      *param_3 = iVar10;
      local_49 = 1;
    }
    else {
      local_49 = 0;
    }
  }
  else if (param_4 == '\x01') {
    if (bVar1) {
      *param_3 = iVar10;
    }
    local_49 = 1;
  }
  if (*param_5 != '\0') {
    local_49 = 0;
  }
  return local_49;
}

