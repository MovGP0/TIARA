/* Ghidra address: 01d58e60 */
/* Ghidra symbol: FUN_01d58e60 */


undefined8 FUN_01d58e60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char in_AL;
  char cVar1;
  
  if (*(char *)(param_1 + 0x98) == '\x01') {
    in_AL = FUN_01164e10(param_1 + 0xa0,param_2,param_3);
  }
  if ((((in_AL == '\0') && (cVar1 = FUN_01d574b0(param_1 + 0x20,param_2,param_3), cVar1 == '\0')) &&
      (cVar1 = FUN_01d574b0(param_1 + 0x48,param_2,param_3), cVar1 == '\0')) &&
     (cVar1 = FUN_01d574b0(param_1 + 0x70,param_2,param_3), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

