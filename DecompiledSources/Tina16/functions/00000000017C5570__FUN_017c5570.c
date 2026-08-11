/* Ghidra address: 017c5570 */
/* Ghidra symbol: FUN_017c5570 */


void FUN_017c5570(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  FUN_017c52d0();
  cVar1 = '\b';
  do {
    FUN_017c52d0(param_2);
    param_2 = param_2 + 8;
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return;
}

