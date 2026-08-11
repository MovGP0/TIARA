/* Ghidra address: 00ea6c40 */
/* Ghidra symbol: FUN_00ea6c40 */


byte FUN_00ea6c40(byte param_1)

{
  byte bVar1;
  
  bVar1 = (param_1 & 2) != 0;
  if ((param_1 & 4) != 0) {
    bVar1 = bVar1 | 2;
  }
  if ((param_1 & 8) != 0) {
    bVar1 = bVar1 | 0x40;
  }
  if ((param_1 & 0x20) != 0) {
    bVar1 = bVar1 | 4;
  }
  if ((param_1 & 0x40) != 0) {
    bVar1 = bVar1 | 8;
  }
  return bVar1;
}

