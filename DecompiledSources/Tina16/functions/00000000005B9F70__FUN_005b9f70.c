/* Ghidra address: 005b9f70 */
/* Ghidra symbol: FUN_005b9f70 */


bool FUN_005b9f70(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int local_2c;
  ulonglong local_28;
  longlong local_20;
  
  local_20 = 0;
  *param_3 = 0;
  FUN_00414ad0(param_1);
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_005b9eb0(param_1);
  bVar2 = false;
  iVar6 = (int)param_1[1];
  if (iVar6 < 1) {
    bVar1 = false;
  }
  else {
    iVar5 = 0;
    if (*param_1 != 0) {
      iVar5 = *(int *)(*param_1 + -4);
    }
    bVar1 = iVar6 <= iVar5;
  }
  if (bVar1) {
    sVar4 = *(short *)(*param_1 + -2 + (longlong)iVar6 * 2);
  }
  else {
    sVar4 = 0;
  }
  if (sVar4 == 0x2d) {
    bVar2 = true;
    iVar5 = 0;
    if (*param_1 != 0) {
      iVar5 = *(int *)(*param_1 + -4);
    }
    if (iVar6 <= iVar5) {
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    }
  }
  sVar4 = FUN_005b9870(param_1);
  if (sVar4 == 0x3a) {
    cVar3 = FUN_005b9b10(param_1,&local_20);
    if (cVar3 != '\0') {
      return (bool)cVar3;
    }
  }
  else {
    cVar3 = FUN_005b99e0(param_1,&DAT_00a2e3ff,&local_2c);
    if (cVar3 != '\0') {
      return (bool)cVar3;
    }
    local_20 = (longlong)local_2c * 864000000000;
    iVar6 = (int)param_1[1];
    if (iVar6 < 1) {
      bVar1 = false;
    }
    else {
      iVar5 = 0;
      if (*param_1 != 0) {
        iVar5 = *(int *)(*param_1 + -4);
      }
      bVar1 = iVar6 <= iVar5;
    }
    if (bVar1) {
      sVar4 = *(short *)(*param_1 + -2 + (longlong)iVar6 * 2);
    }
    else {
      sVar4 = 0;
    }
    if (sVar4 == 0x2e) {
      iVar5 = 0;
      if (*param_1 != 0) {
        iVar5 = *(int *)(*param_1 + -4);
      }
      if (iVar6 <= iVar5) {
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      }
      cVar3 = FUN_005b9b10(param_1,&local_28);
      if (cVar3 != '\0') {
        return (bool)cVar3;
      }
      local_20 = local_20 + local_28;
    }
  }
  if (bVar2) {
    local_20 = -local_20;
    if (0 < local_20) {
      return (bool)2;
    }
  }
  else if (local_20 < 0) {
    return (bool)2;
  }
  FUN_005b9eb0(param_1);
  iVar6 = 0;
  if (*param_1 != 0) {
    iVar6 = *(int *)(*param_1 + -4);
  }
  bVar2 = iVar6 < (int)param_1[1];
  if (bVar2) {
    *param_3 = local_20;
  }
  return !bVar2;
}

