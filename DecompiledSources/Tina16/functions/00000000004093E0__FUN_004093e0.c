/* Ghidra address: 004093e0 */
/* Ghidra symbol: FUN_004093e0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004093e0(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  
  puVar3 = DAT_02006b90;
  while (puVar3 != &DAT_02006b88) {
    puVar1 = *(undefined **)(puVar3 + 8);
    thunk_FUN_04184b1a(puVar3,0,0x8000);
    puVar3 = puVar1;
  }
  iVar4 = 0x2e;
  puVar2 = &DAT_01db90f8;
  do {
    *(undefined1 **)(puVar2 + 0x10) = puVar2;
    *(undefined1 **)(puVar2 + 8) = puVar2;
    *(undefined8 *)(puVar2 + 0x18) = 1;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    puVar2 = puVar2 + 0x40;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  _DAT_02006b88 = &DAT_02006b88;
  DAT_02006b90 = &DAT_02006b88;
  iVar4 = 0x400;
  ppuVar5 = &PTR_LOOP_02006c40;
  do {
    *ppuVar5 = (undefined *)ppuVar5;
    ppuVar5[1] = (undefined *)ppuVar5;
    ppuVar5 = ppuVar5 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  _DAT_02006bbc = 0;
  FUN_0040d200(&DAT_02006bc0,0x80,0);
  DAT_02006bb8 = 0;
  puVar3 = DAT_0200ac50;
  while (puVar3 != &DAT_0200ac48) {
    puVar1 = *(undefined **)(puVar3 + 8);
    thunk_FUN_04184b1a(puVar3,0,0x8000);
    puVar3 = puVar1;
  }
  _DAT_0200ac48 = &DAT_0200ac48;
  DAT_0200ac50 = &DAT_0200ac48;
  return;
}

