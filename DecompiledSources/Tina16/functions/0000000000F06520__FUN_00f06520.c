/* Ghidra address: 00f06520 */
/* Ghidra symbol: FUN_00f06520 */


longlong * FUN_00f06520(longlong *param_1)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  
  FUN_00f05860(param_1);
  iVar3 = FUN_004170c0(&DAT_00f06714,*param_1,1);
  if (0 < iVar3) {
    while( true ) {
      iVar3 = 0;
      lVar1 = *param_1;
      if (lVar1 != 0) {
        iVar3 = *(int *)(lVar1 + -4);
      }
      if (*(short *)(*param_1 + -2 + (longlong)iVar3 * 2) != 0x30) break;
      uVar4 = 0;
      if (lVar1 != 0) {
        uVar4 = *(undefined4 *)(lVar1 + -4);
      }
      FUN_00416e20(param_1,uVar4,1);
    }
  }
  iVar3 = 0;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    iVar3 = *(int *)(lVar1 + -4);
  }
  if (*(short *)(*param_1 + -2 + (longlong)iVar3 * 2) == 0x2e) {
    uVar4 = 0;
    if (lVar1 != 0) {
      uVar4 = *(undefined4 *)(lVar1 + -4);
    }
    FUN_00416e20(param_1,uVar4,1);
  }
  iVar3 = FUN_00416db0(*param_1,&DAT_00f06724);
  if (iVar3 == 0) {
    bVar5 = true;
  }
  else {
    iVar3 = 0;
    if (*param_1 != 0) {
      iVar3 = *(int *)(*param_1 + -4);
    }
    bVar5 = iVar3 == 0;
  }
  if (bVar5) {
    FUN_00414480(param_1);
  }
  else {
    iVar3 = 0;
    if (*param_1 != 0) {
      iVar3 = *(int *)(*param_1 + -4);
    }
    uVar2 = *(short *)(*param_1 + -2 + (longlong)iVar3 * 2) - 0x40;
    if (uVar2 < 0x40) {
      bVar5 = (1L << ((byte)uVar2 & 0x3f) & 0x7fffffe07fffffeU) != 0;
    }
    else {
      bVar5 = false;
    }
    if ((bVar5) && (iVar3 = FUN_004170c0(&DAT_00f06714,*param_1,1), 0 < iVar3)) {
      while( true ) {
        iVar3 = 0;
        lVar1 = *param_1;
        if (lVar1 != 0) {
          iVar3 = *(int *)(lVar1 + -4);
        }
        if (*(short *)(*param_1 + -2 + (longlong)(iVar3 + -1) * 2) != 0x30) break;
        iVar3 = 0;
        if (lVar1 != 0) {
          iVar3 = *(int *)(lVar1 + -4);
        }
        FUN_00416e20(param_1,iVar3 + -1,1);
      }
      iVar3 = 0;
      lVar1 = *param_1;
      if (lVar1 != 0) {
        iVar3 = *(int *)(lVar1 + -4);
      }
      if (*(short *)(*param_1 + -2 + (longlong)(iVar3 + -1) * 2) == 0x2e) {
        iVar3 = 0;
        if (lVar1 != 0) {
          iVar3 = *(int *)(lVar1 + -4);
        }
        FUN_00416e20(param_1,iVar3 + -1,1);
      }
      iVar3 = 0;
      if (*param_1 != 0) {
        iVar3 = *(int *)(*param_1 + -4);
      }
      if ((iVar3 == 2) && (*(short *)*param_1 == 0x31)) {
        FUN_00416e20(param_1,1,1);
      }
    }
  }
  return param_1;
}

