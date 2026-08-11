/* Ghidra address: 0046cab0 */
/* Ghidra symbol: FUN_0046cab0 */


undefined8 FUN_0046cab0(ushort param_1)

{
  undefined8 uVar1;
  bool bVar2;
  
  if (param_1 < 0x20) {
    bVar2 = (1 << ((byte)param_1 & 0x1f) & 0x3fffffU) != 0;
  }
  else {
    bVar2 = false;
  }
  if ((bVar2) && (PTR_DAT_02004360[(ulonglong)param_1 * 0xc] != '\0')) {
    uVar1 = CONCAT71((int7)((ulonglong)param_1 * 3 >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

