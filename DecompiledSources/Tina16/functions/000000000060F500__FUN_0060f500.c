/* Ghidra address: 0060f500 */
/* Ghidra symbol: FUN_0060f500 */


uint FUN_0060f500(uint param_1)

{
  uint uVar1;
  byte bVar2;
  uint *puVar3;
  
  uVar1 = 0;
  bVar2 = 0;
  puVar3 = &DAT_01def840;
  do {
    if (bVar2 < 0x20 && (1 << (bVar2 & 0x1f) & param_1) != 0) {
      uVar1 = uVar1 | *puVar3;
    }
    bVar2 = bVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (bVar2 != 0x18);
  return uVar1;
}

