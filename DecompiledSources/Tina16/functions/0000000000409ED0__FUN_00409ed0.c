/* Ghidra address: 00409ed0 */
/* Ghidra symbol: FUN_00409ed0 */


ulonglong FUN_00409ed0(ulonglong param_1)

{
  ulonglong uVar1;
  byte bVar2;
  
  uVar1 = param_1 & 0xffffffff;
  bVar2 = (char)param_1 + 0xa0;
  if (bVar2 < 0x20 && (1 << (bVar2 & 0x1f) & 0x7fffffeU) != 0) {
    uVar1 = CONCAT71((int7)(uVar1 >> 8),(char)uVar1 + -0x20);
  }
  return uVar1;
}

