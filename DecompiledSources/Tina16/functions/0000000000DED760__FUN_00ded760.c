/* Ghidra address: 00ded760 */
/* Ghidra symbol: FUN_00ded760 */


void FUN_00ded760(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_2 + 0x339) == '\0') {
    cVar1 = '\0';
  }
  else {
    cVar1 = FUN_016eacf0(param_1,4,4);
  }
  if (cVar1 == '\0') {
    uVar2 = FUN_016eb0a0(param_1,1);
    uVar3 = FUN_016eb0a0(param_1,2);
    uVar4 = FUN_016eb0a0(param_1,3);
    FUN_00ded6d0(param_1,uVar2,uVar3,uVar4);
  }
  else if (cVar1 == '\x01') {
    FUN_016e9e20(param_1,2);
    FUN_016ebe60(param_1,1,1,2,1);
    FUN_016ed320(param_1,1,0,0,0);
    FUN_016ebe60(param_1,2,3,4,1);
    FUN_016ed320(param_1,2,0,0,0);
  }
  else if (cVar1 == '\x02') {
    FUN_016e9e20(param_1,2);
    FUN_016ebdd0(param_1,1,1,2,1);
    FUN_016ed320(param_1,1,0,0,0);
    FUN_016ebdd0(param_1,2,3,4,1);
    FUN_016ed320(param_1,2,0,0,0);
  }
  return;
}

