/* Ghidra address: 007f99e0 */
/* Ghidra symbol: FUN_007f99e0 */


byte FUN_007f99e0(longlong param_1)

{
  byte bVar1;
  
  bVar1 = (*(byte *)(param_1 + 0x10) & 0x80) != 0;
  if ((*(byte *)(param_1 + 0x11) & 0x80) != 0) {
    bVar1 = bVar1 | 4;
  }
  if ((*(byte *)(param_1 + 0x12) & 0x80) != 0) {
    bVar1 = bVar1 | 2;
  }
  if ((*(byte *)(param_1 + 1) & 0x80) != 0) {
    bVar1 = bVar1 | 8;
  }
  if ((*(byte *)(param_1 + 2) & 0x80) != 0) {
    bVar1 = bVar1 | 0x10;
  }
  if ((*(byte *)(param_1 + 4) & 0x80) != 0) {
    bVar1 = bVar1 | 0x20;
  }
  return bVar1;
}

