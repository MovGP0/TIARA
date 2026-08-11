/* Ghidra address: 00451730 */
/* Ghidra symbol: FUN_00451730 */


ulonglong FUN_00451730(byte *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  
  uVar1 = 0;
  while( true ) {
    if (*param_1 == 0) {
      return uVar1;
    }
    if (0x7f < *param_1) break;
    bVar2 = *param_1;
    if ((byte)(bVar2 - 0x40) < 0x20 && (1 << (bVar2 - 0x40 & 0x1f) & 0x7fffffeU) != 0) {
      bVar2 = bVar2 | 0x20;
    }
    param_1 = param_1 + 1;
    uVar1 = (ulonglong)((uint)uVar1 >> 0x1b | ((uint)uVar1 ^ (uint)bVar2) << 5);
  }
  uVar1 = FUN_00451650(param_1);
  return uVar1;
}

