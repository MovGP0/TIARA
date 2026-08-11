/* Ghidra address: 00dee620 */
/* Ghidra symbol: FUN_00dee620 */


void FUN_00dee620(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  if (*(char *)(param_2 + 0x339) == '\0') {
    cVar1 = '\0';
  }
  else {
    cVar1 = FUN_016eacf0(param_1,3,2);
  }
  if (cVar1 == '\0') {
    FUN_016e9e20(param_1,1);
    FUN_016ebdd0(param_1,1,1,2,1);
    FUN_016ed320(param_1,1,0,0,0);
    FUN_016ea040(param_1,FUN_00dee5a0);
  }
  else if (cVar1 == '\x01') {
    FUN_016e9e20(param_1,1);
    FUN_016ebe60(param_1,1,1,2,1);
    FUN_016ed320(param_1,1,0,0,0);
  }
  return;
}

