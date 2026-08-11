/* Ghidra address: 00bbc650 */
/* Ghidra symbol: FUN_00bbc650 */


void FUN_00bbc650(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  
  iVar1 = FUN_00bbc5f0(auStack_38);
  if (iVar1 != -1) {
    lVar2 = FUN_004aeac0(DAT_02019ad8,iVar1);
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
    if (*(int *)(lVar2 + 8) == 0) {
      FUN_00410f20(*(undefined8 *)(lVar2 + 0x18));
      FUN_004ae870(DAT_02019ad8,iVar1);
      FUN_00410f20(lVar2);
    }
    if (*(int *)(DAT_02019ad8 + 0x10) == 0) {
      FUN_00410f20(DAT_02019ad8);
      DAT_02019ad8 = 0;
    }
  }
  return;
}

