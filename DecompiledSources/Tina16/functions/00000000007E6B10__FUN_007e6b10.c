/* Ghidra address: 007e6b10 */
/* Ghidra symbol: FUN_007e6b10 */


undefined8 FUN_007e6b10(longlong param_1)

{
  undefined8 uVar1;
  
  if ((PTR_DAT_02005bd0[0xd] == '\0') || (*(char *)(param_1 + 0x78) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)PTR_DAT_02005bd0 >> 8),1);
  }
  return uVar1;
}

