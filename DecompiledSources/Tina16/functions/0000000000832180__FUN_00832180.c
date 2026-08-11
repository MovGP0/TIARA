/* Ghidra address: 00832180 */
/* Ghidra symbol: FUN_00832180 */


ulonglong FUN_00832180(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined7 uVar5;
  
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar4 = CONCAT71(uVar5,1);
  iVar6 = 0;
  if (param_1 != 0) {
    iVar6 = *(int *)(param_1 + -4);
  }
  if (3 < iVar6) {
    iVar7 = -1;
    iVar8 = -1;
    iVar6 = 0;
    if (param_1 != 0) {
      iVar6 = *(int *)(param_1 + -4);
    }
    do {
      cVar2 = FUN_008317e0(param_1,iVar6);
      iVar3 = iVar8;
      if ((cVar2 == '\x06') && (iVar3 = iVar6, iVar7 < 0)) {
        iVar3 = iVar8;
        iVar7 = iVar6;
      }
      iVar8 = iVar3;
      iVar6 = iVar6 + -1;
      if (iVar6 < 1) {
        bVar1 = true;
      }
      else {
        iVar3 = 0;
        if (param_1 != 0) {
          iVar3 = *(int *)(param_1 + -4);
        }
        bVar1 = iVar6 < iVar3 + -4;
      }
    } while ((!bVar1) && (iVar8 < 0));
    if (iVar8 < 0) {
      iVar8 = iVar7;
    }
    if (0 < iVar8) {
      iVar6 = 0;
      if (param_1 != 0) {
        iVar6 = *(int *)(param_1 + -4);
      }
      if (iVar8 != iVar6) {
        uVar4 = CONCAT71(uVar5,*(short *)(param_1 + (longlong)iVar8 * 2) != DAT_01e18908);
      }
    }
  }
  return uVar4 & 0xffffffff;
}

