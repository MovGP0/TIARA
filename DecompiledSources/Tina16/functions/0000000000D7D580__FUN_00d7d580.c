/* Ghidra address: 00d7d580 */
/* Ghidra symbol: FUN_00d7d580 */


void FUN_00d7d580(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_01ed0748 != 0) {
    iVar3 = *(int *)(DAT_01ed0748 + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar1 = FUN_004aeac0(DAT_01ed0748,iVar2);
        FUN_00418590(uVar1,&DAT_00d7d4f0);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00410f20(DAT_01ed0748);
    DAT_01ed0748 = 0;
  }
  return;
}

