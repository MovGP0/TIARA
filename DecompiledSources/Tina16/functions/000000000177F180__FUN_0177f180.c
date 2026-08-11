/* Ghidra address: 0177f180 */
/* Ghidra symbol: FUN_0177f180 */


void FUN_0177f180(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  while( true ) {
    iVar3 = 0;
    if (*param_1 != 0) {
      iVar3 = *(int *)(*param_1 + -4);
    }
    if ((iVar3 < 1) || (*(short *)*param_1 != 0x20)) break;
    FUN_00416e20(param_1,1,1);
  }
  while( true ) {
    iVar3 = 0;
    lVar1 = *param_1;
    if (lVar1 != 0) {
      iVar3 = *(int *)(lVar1 + -4);
    }
    if (iVar3 < 1) {
      bVar4 = false;
    }
    else {
      iVar3 = 0;
      if (lVar1 != 0) {
        iVar3 = *(int *)(lVar1 + -4);
      }
      bVar4 = *(short *)(*param_1 + -2 + (longlong)iVar3 * 2) == 0x20;
    }
    if (!bVar4) break;
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = *(undefined4 *)(lVar1 + -4);
    }
    FUN_00416e20(param_1,uVar2,1);
  }
  return;
}

