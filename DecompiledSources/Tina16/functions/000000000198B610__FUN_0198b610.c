/* Ghidra address: 0198b610 */
/* Ghidra symbol: FUN_0198b610 */


void FUN_0198b610(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_0198a580(param_2);
  if ((cVar1 == '\x04') && (*(char *)(param_1 + 0x490) == '\0')) {
    FUN_01d08450(param_2,param_1);
  }
  FUN_00b952f0(param_1,param_2);
  return;
}

