/* Ghidra address: 019ac250 */
/* Ghidra symbol: FUN_019ac250 */


undefined8 FUN_019ac250(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*PTR_DAT_020023b0 == '\0') && (*(char *)(param_1 + 0x36c) == '\0')) &&
     (*(char *)(param_1 + 0x293) != '\0')) {
    uVar1 = CONCAT71((int7)((ulonglong)PTR_DAT_020023b0 >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

