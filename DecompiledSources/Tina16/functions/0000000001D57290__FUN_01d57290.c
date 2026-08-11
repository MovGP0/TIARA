/* Ghidra address: 01d57290 */
/* Ghidra symbol: FUN_01d57290 */


void FUN_01d57290(undefined8 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  char cVar2;
  undefined2 uVar3;
  char cVar4;
  char cVar5;
  ulonglong in_stack_ffffffffffffffa8;
  
  uVar1 = *param_6;
  *param_7 = uVar1;
  cVar2 = FUN_016e9e80(param_1,4);
  *(char *)(param_7 + 3) = cVar2;
  *(undefined1 *)((longlong)param_7 + 0x1c) = param_2;
  *(char *)((longlong)param_7 + 0x1d) = (char)param_3;
  uVar3 = FUN_016ea1b0(param_1,2);
  *(undefined2 *)((longlong)param_7 + 0x1a) = uVar3;
  *(undefined1 *)(param_7 + 4) = 0;
  param_7[1] = 0;
  cVar5 = cVar2 + '\x01';
  FUN_016ebdd0(param_1,cVar5,param_2,param_3,in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
  cVar4 = cVar2 + '\x02';
  FUN_016ebdd0(param_1,cVar4,param_4,param_5,1);
  FUN_016ecbf0(param_1,cVar2 + '\x03',cVar5,cVar4);
  FUN_016ecbf0(param_1,cVar2 + '\x04',cVar4,cVar5);
  FUN_016ed320(param_1,cVar5,0,0,0);
  FUN_016ed320(param_1,cVar4,0,0,0);
  FUN_016ed320(param_1,cVar2 + '\x03',uVar1,0,0);
  FUN_016ed320(param_1,cVar2 + '\x04',uVar1,0,0);
  return;
}

