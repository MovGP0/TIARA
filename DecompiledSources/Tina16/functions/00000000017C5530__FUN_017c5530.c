/* Ghidra address: 017c5530 */
/* Ghidra symbol: FUN_017c5530 */


void FUN_017c5530(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  
  FUN_017c52b0(param_1,param_3);
  cVar1 = '\b';
  do {
    FUN_017c52b0(param_2,param_3);
    param_2 = param_2 + 8;
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return;
}

