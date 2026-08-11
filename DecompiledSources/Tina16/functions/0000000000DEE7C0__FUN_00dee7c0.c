/* Ghidra address: 00dee7c0 */
/* Ghidra symbol: FUN_00dee7c0 */


void FUN_00dee7c0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 0x339) == '\0') {
    cVar1 = '\0';
  }
  else {
    cVar1 = FUN_016eacf0(param_1,4,2);
  }
  uVar2 = FUN_016ed930(param_2);
  if (cVar1 == '\0') {
    FUN_016e9e20(param_1,1);
    FUN_016ec240(param_1,1,1,2);
    FUN_016ed5d0(param_1,1,0x3ff0000000000000,0x3ff0000000000000,uVar2,0x3ff0000000000000,0);
  }
  else if (cVar1 == '\x01') {
    FUN_016e9e20(param_1,1);
    FUN_016ebe60(param_1,1,1,2,1);
    FUN_016ed320(param_1,1,0,0,0);
  }
  return;
}

