/* Ghidra address: 0043e2c0 */
/* Ghidra symbol: FUN_0043e2c0 */


undefined8 FUN_0043e2c0(longlong *param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_3 < 1) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    plVar1 = (longlong *)((longlong)param_3 + -0x10 + (longlong)param_1);
    if (param_1 <= plVar1) {
      if (*param_1 != *param_2) {
        return 0;
      }
      plVar5 = (longlong *)((ulonglong)(param_1 + 1) & 0xfffffffffffffff8);
      plVar4 = (longlong *)((longlong)param_2 + (8 - (longlong)(param_1 + 1)) + (longlong)plVar5);
      for (; param_2 = plVar4, param_1 = plVar5, plVar5 <= plVar1; plVar5 = plVar5 + 4) {
        if (*plVar5 != *plVar4) {
          return 0;
        }
        if (plVar5[1] != plVar4[1]) {
          return 0;
        }
        param_1 = plVar5 + 2;
        param_2 = plVar4 + 2;
        if (plVar1 < param_1) break;
        if (*param_1 != *param_2) {
          return 0;
        }
        if (plVar5[3] != plVar4[3]) {
          return 0;
        }
        plVar4 = plVar4 + 4;
      }
    }
    iVar3 = ((int)plVar1 + 0x10) - (int)param_1;
    if (7 < iVar3) {
      if (*param_1 != *param_2) {
        return 0;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      iVar3 = iVar3 + -8;
    }
    if (5 < iVar3) {
      if ((int)*param_1 != (int)*param_2) {
        return 0;
      }
      if (*(short *)((longlong)param_1 + 4) != *(short *)((longlong)param_2 + 4)) {
        return 0;
      }
      param_1 = (longlong *)((longlong)param_1 + 6);
      param_2 = (longlong *)((longlong)param_2 + 6);
      iVar3 = iVar3 + -6;
    }
    if (4 < iVar3) {
      if ((int)*param_1 != (int)*param_2) {
        return 0;
      }
      if (*(char *)((longlong)param_1 + 4) != *(char *)((longlong)param_2 + 4)) {
        return 0;
      }
      param_1 = (longlong *)((longlong)param_1 + 5);
      param_2 = (longlong *)((longlong)param_2 + 5);
      iVar3 = iVar3 + -5;
    }
    if (3 < iVar3) {
      if ((int)*param_1 != (int)*param_2) {
        return 0;
      }
      param_1 = (longlong *)((longlong)param_1 + 4);
      param_2 = (longlong *)((longlong)param_2 + 4);
      iVar3 = iVar3 + -4;
    }
    if (1 < iVar3) {
      if ((short)*param_1 != (short)*param_2) {
        return 0;
      }
      param_1 = (longlong *)((longlong)param_1 + 2);
      param_2 = (longlong *)((longlong)param_2 + 2);
      iVar3 = iVar3 + -2;
    }
    if ((iVar3 < 1) || ((char)*param_1 == (char)*param_2)) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

