/* Ghidra address: 01b11110 */
/* Ghidra symbol: FUN_01b11110 */


ulonglong FUN_01b11110(void)

{
  ulonglong uVar1;
  
  if (PTR_DAT_02004508[0x92] == '\x01') {
    if ((*(int *)PTR_DAT_02002560 < 1) || (*PTR_DAT_02004298 == '\0')) {
      uVar1 = (ulonglong)(byte)PTR_DAT_02004508[0x90];
    }
    else {
      uVar1 = CONCAT71((int7)((ulonglong)PTR_DAT_02004298 >> 8),4);
    }
  }
  else {
    uVar1 = (ulonglong)(byte)PTR_DAT_02004508[0x90];
  }
  return uVar1;
}

