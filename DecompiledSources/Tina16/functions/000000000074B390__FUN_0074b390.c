/* Ghidra address: 0074b390 */
/* Ghidra symbol: FUN_0074b390 */


void FUN_0074b390(longlong param_1)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 0x4b0) = 1;
  FUN_00652e80(param_1);
  *(undefined1 *)(param_1 + 0x4b0) = 0;
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    FUN_0074b570(param_1);
  }
  return;
}

