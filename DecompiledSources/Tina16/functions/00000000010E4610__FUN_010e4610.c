/* Ghidra address: 010e4610 */
/* Ghidra symbol: FUN_010e4610 */


void FUN_010e4610(void)

{
  undefined8 uVar1;
  int iVar2;
  
  DAT_0202fd50 = DAT_0202fd50 + 1;
  if (DAT_0202fd50 == 0) {
    FUN_01d42ec0(L"VirtInst.Finalization.0");
    iVar2 = *(int *)(DAT_0202f9b8 + 0x10);
    DAT_0202fd54 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar1 = FUN_004aeac0(DAT_0202f9b8,DAT_0202fd54);
        FUN_00410f20(uVar1);
        DAT_0202fd54 = DAT_0202fd54 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00410f20(DAT_0202f9b8);
    FUN_01d42ec0(L"VirtInst.Finalization.1");
  }
  return;
}

