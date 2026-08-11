/* Ghidra address: 01d59940 */
/* Ghidra symbol: FUN_01d59940 */


undefined8 FUN_01d59940(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char in_AL;
  char cVar1;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    in_AL = FUN_01164e10(param_1 + 0x38,param_2,param_3);
  }
  if ((in_AL == '\0') && (cVar1 = FUN_01d574b0(param_1 + 8,param_2,param_3), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

