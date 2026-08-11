/* Ghidra address: 006d8500 */
/* Ghidra symbol: FUN_006d8500 */


undefined8 FUN_006d8500(longlong param_1)

{
  undefined8 uVar1;
  
  if ((PTR_DAT_02005bd0[0xd] == '\0') || (*(char *)(param_1 + 0x26) != '\x01')) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)PTR_DAT_02005bd0 >> 8),1);
  }
  return uVar1;
}

