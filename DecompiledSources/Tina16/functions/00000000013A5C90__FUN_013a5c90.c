/* Ghidra address: 013a5c90 */
/* Ghidra symbol: FUN_013a5c90 */


byte FUN_013a5c90(uint param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = 0;
  bVar1 = 0;
  do {
    bVar2 = bVar2 | ((byte)((param_1 & 0xff) >> (bVar1 & 0x1f)) & 1) << (7 - bVar1 & 0x1f);
    bVar1 = bVar1 + 1;
  } while (bVar1 != 8);
  return bVar2;
}

