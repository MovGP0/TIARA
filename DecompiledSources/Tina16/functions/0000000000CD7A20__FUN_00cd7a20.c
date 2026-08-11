/* Ghidra address: 00cd7a20 */
/* Ghidra symbol: FUN_00cd7a20 */


void FUN_00cd7a20(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  if ((DAT_01eaf040 != 0) && (iVar4 = *(int *)(DAT_01eaf040 + 0x10) + -1, -1 < iVar4)) {
    do {
      uVar2 = FUN_004aeac0(DAT_01eaf040,iVar4);
      lVar3 = FUN_00419bd0(uVar2);
      if ((param_1 < 0) || (lVar3 != param_1)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_004ae870(DAT_01eaf040,iVar4);
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  return;
}

