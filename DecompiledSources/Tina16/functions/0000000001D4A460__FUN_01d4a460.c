/* Ghidra address: 01d4a460 */
/* Ghidra symbol: FUN_01d4a460 */


void FUN_01d4a460(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  double dVar4;
  double dVar5;
  ulonglong in_stack_ffffffffffffff48;
  undefined1 local_88 [96];
  
  dVar4 = (double)FUN_016eb0a0(param_1,1);
  dVar5 = (double)FUN_016eb0a0(param_1,2);
  FUN_016ebb00(param_1,3,local_88,0x20);
  cVar1 = FUN_016e9d10(param_1,2);
  cVar2 = FUN_016e9e80(param_1,4);
  cVar3 = cVar1 + '\x01';
  FUN_016ebe60(param_1,cVar2 + '\x01',1,cVar3,in_stack_ffffffffffffff48 & 0xffffffffffffff00);
  FUN_016ed320(param_1,cVar2 + '\x01',0,1.0 / dVar4,0);
  FUN_016ebe60(param_1,cVar2 + '\x02',cVar3,3,1);
  FUN_016ed320(param_1,cVar2 + '\x02',0,1.0 / dVar5,0);
  cVar1 = cVar1 + '\x02';
  FUN_016ebe60(param_1,cVar2 + '\x03',2,cVar1,1);
  FUN_016ed320(param_1,cVar2 + '\x03',0,1.0 / dVar4,0);
  FUN_016ebe60(param_1,cVar2 + '\x04',cVar1,0,1);
  FUN_016ed320(param_1,cVar2 + '\x04',0,1.0 / dVar5,0);
  FUN_00e7d1b0(param_1,cVar1,cVar3,3,5,4,local_88);
  FUN_016e9f40(param_1,FUN_01d4a170);
  return;
}

