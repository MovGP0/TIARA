/* Ghidra address: 005b9eb0 */
/* Ghidra symbol: FUN_005b9eb0 */


void FUN_005b9eb0(longlong *param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1[1];
  if (iVar4 < 1) {
    bVar1 = false;
  }
  else {
    iVar3 = 0;
    if (*param_1 != 0) {
      iVar3 = *(int *)(*param_1 + -4);
    }
    bVar1 = iVar4 <= iVar3;
  }
  if (bVar1) {
    sVar2 = *(short *)(*param_1 + -2 + (longlong)iVar4 * 2);
  }
  else {
    sVar2 = 0;
  }
  while ((sVar2 == 0x20 || (sVar2 == 9))) {
    iVar4 = 0;
    if (*param_1 != 0) {
      iVar4 = *(int *)(*param_1 + -4);
    }
    if ((int)param_1[1] <= iVar4) {
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    }
    iVar4 = (int)param_1[1];
    if (iVar4 < 1) {
      bVar1 = false;
    }
    else {
      iVar3 = 0;
      if (*param_1 != 0) {
        iVar3 = *(int *)(*param_1 + -4);
      }
      bVar1 = iVar4 <= iVar3;
    }
    if (bVar1) {
      sVar2 = *(short *)(*param_1 + -2 + (longlong)iVar4 * 2);
    }
    else {
      sVar2 = 0;
    }
  }
  return;
}

