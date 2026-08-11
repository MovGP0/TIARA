/* Ghidra address: 01d421b0 */
/* Ghidra symbol: FUN_01d421b0 */


undefined8 FUN_01d421b0(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_01d42140(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_01d42190(param_1), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

