/* Ghidra address: 00a33090 */
/* Ghidra symbol: FUN_00a33090 */


void FUN_00a33090(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_020133c8 != 0) {
    iVar3 = *(int *)(DAT_020133c8 + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar1 = FUN_00a338f0(DAT_020133c8,iVar2);
        FUN_004095f0(uVar1);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00410f20(DAT_020133c8);
  }
  return;
}

