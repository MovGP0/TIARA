/* Ghidra address: 00696b90 */
/* Ghidra symbol: FUN_00696b90 */


undefined8 FUN_00696b90(longlong param_1)

{
  char cVar1;
  
  if ((((*PTR_DAT_02005020 != '\0') && (*(char *)(*(longlong *)(param_1 + 0x10) + 0xa9) != '\0')) &&
      ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x2c8) & 2) != 0)) &&
     (cVar1 = FUN_0044f0c0(6,0), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

