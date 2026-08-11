/* Ghidra address: 00d7d470 */
/* Ghidra symbol: FUN_00d7d470 */


void FUN_00d7d470(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_01ed0680 != 0) {
    iVar3 = *(int *)(DAT_01ed0680 + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar1 = FUN_004aeac0(DAT_01ed0680,iVar2);
        FUN_00410f20(*(undefined8 *)(lVar1 + 8));
        FUN_004095f0(lVar1);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00410f20(DAT_01ed0680);
    DAT_01ed0680 = 0;
  }
  return;
}

