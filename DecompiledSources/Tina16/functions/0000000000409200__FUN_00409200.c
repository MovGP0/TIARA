/* Ghidra address: 00409200 */
/* Ghidra symbol: FUN_00409200 */


void FUN_00409200(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  
  uVar3 = 0;
  iVar2 = 0;
  puVar5 = &DAT_01db90fa;
  do {
    if ((DAT_01db9c78 == '\0') || ((*puVar5 & 0xf) == 0)) {
      uVar1 = *puVar5;
      for (uVar4 = uVar3; uVar3 = uVar1 / 8, uVar4 < uVar1 / 8; uVar4 = uVar4 + 1) {
        (&DAT_02006a3c)[uVar4] = (char)iVar2 * '\x04';
      }
    }
    iVar2 = iVar2 + 1;
    puVar5 = puVar5 + 0x20;
  } while (iVar2 != 0x2e);
  return;
}

