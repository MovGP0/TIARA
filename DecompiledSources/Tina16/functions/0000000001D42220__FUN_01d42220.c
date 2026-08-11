/* Ghidra address: 01d42220 */
/* Ghidra symbol: FUN_01d42220 */


undefined8 FUN_01d42220(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_01d421e0(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_01d42210(param_1), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

