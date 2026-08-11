/* Ghidra address: 00a32e50 */
/* Ghidra symbol: FUN_00a32e50 */


void FUN_00a32e50(void)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  uVar2 = 0;
  puVar3 = &DAT_020133d0;
  do {
    iVar4 = 8;
    uVar1 = uVar2;
    do {
      if ((uVar1 & 1) == 0) {
        uVar1 = uVar1 >> 1;
      }
      else {
        uVar1 = uVar1 >> 1 ^ 0xedb88320;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *puVar3 = uVar1;
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (uVar2 != 0x100);
  DAT_020137d0 = 1;
  return;
}

