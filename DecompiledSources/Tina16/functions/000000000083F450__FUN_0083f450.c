/* Ghidra address: 0083f450 */
/* Ghidra symbol: FUN_0083f450 */


undefined8 FUN_0083f450(longlong param_1)

{
  char cVar1;
  
  if (((((*(uint *)(param_1 + 0x4d4) & 0x1400) == 0x400) && (*(char *)(param_1 + 0x525) != '\0')) &&
      ((*(ushort *)(param_1 + 0x34) & 0x10) == 0)) &&
     ((cVar1 = FUN_0065be20(param_1), cVar1 != '\0' &&
      (((*(uint *)(param_1 + 0x4d4) & 0x2000) != 0 || (cVar1 = FUN_0083f660(param_1), cVar1 != '\0')
       ))))) {
    return 1;
  }
  return 0;
}

