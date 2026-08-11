/* Ghidra address: 01d42040 */
/* Ghidra symbol: FUN_01d42040 */


undefined8 FUN_01d42040(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_01d41fb0(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_01d41fe0(param_1), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

