/* Ghidra address: 00d7cdb0 */
/* Ghidra symbol: FUN_00d7cdb0 */


void FUN_00d7cdb0(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_01ed0658 != 0) {
    iVar3 = *(int *)(DAT_01ed0658 + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar1 = FUN_004aeac0(DAT_01ed0658,iVar2);
        FUN_004095f0(uVar1);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00410f20(DAT_01ed0658);
  }
  return;
}

