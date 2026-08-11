/* Ghidra address: 00dee9a0 */
/* Ghidra symbol: FUN_00dee9a0 */


void FUN_00dee9a0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  if (*(char *)(param_2 + 0x339) == '\0') {
    cVar1 = '\0';
  }
  else {
    cVar1 = FUN_016eacf0(param_1,4,2);
  }
  if (cVar1 == '\0') {
    FUN_016e9e20(param_1,2);
    cVar1 = FUN_016e9d10(param_1,1);
    FUN_016ebdd0(param_1,1,cVar1 + '\x01',2,1);
    FUN_016ec1c0(param_1,2,cVar1 + '\x01',1);
    FUN_016ed320(param_1,1,0,0,0);
    FUN_016e9f40(param_1,FUN_00dee8d0);
  }
  else if (cVar1 == '\x01') {
    FUN_016e9e20(param_1,1);
    FUN_016ebe60(param_1,1,1,2,1);
    FUN_016ed320(param_1,1,0,0,0);
  }
  return;
}

