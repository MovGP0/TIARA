/* Ghidra address: 01d3f1d0 */
/* Ghidra symbol: FUN_01d3f1d0 */


undefined8 FUN_01d3f1d0(undefined8 param_1)

{
  char cVar1;
  short sVar2;
  
  cVar1 = FUN_01d3f210(param_1);
  if ((cVar1 == '\0') && (sVar2 = FUN_01d03160(param_1), sVar2 != 900)) {
    return 0;
  }
  return 1;
}

