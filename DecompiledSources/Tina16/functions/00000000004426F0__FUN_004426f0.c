/* Ghidra address: 004426f0 */
/* Ghidra symbol: FUN_004426f0 */


int FUN_004426f0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  
  while( true ) {
    bVar2 = *param_1;
    if ((byte)(bVar2 + 0xa0) < 0x20 && (1 << (bVar2 + 0xa0 & 0x1f) & 0x7fffffeU) != 0) {
      bVar2 = bVar2 ^ 0x20;
    }
    bVar1 = *param_2;
    if ((byte)(bVar1 + 0xa0) < 0x20 && (1 << (bVar1 + 0xa0 & 0x1f) & 0x7fffffeU) != 0) {
      bVar1 = bVar1 ^ 0x20;
    }
    if ((bVar2 != bVar1) || (bVar2 == 0)) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return (uint)bVar2 - (uint)bVar1;
}

