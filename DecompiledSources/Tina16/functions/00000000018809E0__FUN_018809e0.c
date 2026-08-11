/* Ghidra address: 018809e0 */
/* Ghidra symbol: FUN_018809e0 */


void FUN_018809e0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int local_1c;
  
  cVar1 = FUN_005fc3c0(param_2,&local_1c);
  if (cVar1 == '\0') {
    FUN_01880350(param_1,param_2);
  }
  else {
    FUN_0187fee0(param_1,(longlong)local_1c);
  }
  return;
}

