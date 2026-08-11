/* Ghidra address: 00785620 */
/* Ghidra symbol: FUN_00785620 */


uint FUN_00785620(uint param_1)

{
  uint uVar1;
  byte bVar2;
  uint *puVar3;
  
  uVar1 = 0;
  bVar2 = 0;
  puVar3 = &DAT_01e08d7c;
  do {
    if (bVar2 < 0x20 && (1 << (bVar2 & 0x1f) & param_1) != 0) {
      uVar1 = uVar1 | *puVar3;
    }
    bVar2 = bVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (bVar2 != 0x13);
  return uVar1;
}

