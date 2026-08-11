/* Ghidra address: 01d57eb0 */
/* Ghidra symbol: FUN_01d57eb0 */


undefined8 FUN_01d57eb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = '\0';
  if (*(char *)(param_1 + 0x70) == '\x01') {
    cVar1 = FUN_01164e10(param_1 + 0x78,param_2,param_3);
  }
  if (((cVar1 == '\0') && (cVar1 = FUN_01d574b0(param_1 + 0x20,param_2,param_3), cVar1 == '\0')) &&
     (cVar1 = FUN_01d574b0(param_1 + 0x48,param_2,param_3), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

