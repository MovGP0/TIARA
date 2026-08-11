/* Ghidra address: 004b5e60 */
/* Ghidra symbol: FUN_004b5e60 */


int FUN_004b5e60(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int local_3c [3];
  
  if ((char)param_1[9] == '\0') {
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    iVar3 = 0;
    if (param_2 != 0) {
      iVar3 = *(int *)(param_2 + -4);
    }
    plVar5 = (longlong *)param_1[7];
    if (*(char *)((longlong)param_1 + 0x71) == '\0') {
      local_3c[0] = 0;
      if (-1 < iVar2 + -1) {
        do {
          iVar4 = 0;
          if (*plVar5 != 0) {
            iVar4 = *(int *)(*plVar5 + -4);
          }
          if ((iVar4 == iVar3) &&
             (iVar4 = (**(code **)(*param_1 + 0x70))(param_1,*plVar5,param_2), iVar4 == 0)) {
            return local_3c[0];
          }
          plVar5 = plVar5 + 2;
          local_3c[0] = local_3c[0] + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    else {
      local_3c[0] = 0;
      if (-1 < iVar2 + -1) {
        do {
          iVar3 = (**(code **)(*param_1 + 0x70))(param_1,*plVar5,param_2);
          if (iVar3 == 0) {
            return local_3c[0];
          }
          plVar5 = plVar5 + 2;
          local_3c[0] = local_3c[0] + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    local_3c[0] = -1;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x140))(param_1,param_2,local_3c);
    if (cVar1 == '\0') {
      local_3c[0] = -1;
    }
  }
  return local_3c[0];
}

