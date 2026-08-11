/* Ghidra address: 01d4f880 */
/* Ghidra symbol: FUN_01d4f880 */


void FUN_01d4f880(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  double dVar5;
  double dVar6;
  ulonglong in_stack_fffffffffffffc38;
  undefined1 local_398 [32];
  undefined1 local_378 [848];
  
  dVar5 = (double)FUN_016eb0a0(param_1,1);
  dVar6 = (double)FUN_016eb0a0(param_1,2);
  FUN_016ebb00(param_1,3,local_378,0x20);
  FUN_016ebb00(param_1,3,local_398,0x20);
  cVar1 = FUN_016e9d10(param_1,5);
  cVar2 = FUN_016e9e80(param_1,7);
  cVar3 = cVar1 + '\x01';
  FUN_016ebe60(param_1,cVar2 + '\x01',1,cVar3,in_stack_fffffffffffffc38 & 0xffffffffffffff00);
  FUN_016ed320(param_1,1,0,1.0 / dVar5,0);
  FUN_016ebe60(param_1,cVar2 + '\x02',cVar1 + '\x02',0,1);
  FUN_016ed320(param_1,2,0,1.0 / dVar5,0);
  cVar4 = cVar1 + '\x03';
  FUN_016ebe60(param_1,cVar2 + '\x03',cVar3,cVar4,1);
  FUN_016ed320(param_1,3,0,1.0 / dVar5,0);
  FUN_016ebfa0(param_1,cVar2 + '\x04',cVar3,cVar4,1);
  FUN_016ed220(param_1,4,dVar6 / dVar5,0);
  FUN_016ebe60(param_1,cVar2 + '\x05',cVar4,cVar1 + '\x04',1);
  FUN_016ed320(param_1,5,0,1.0 / dVar5,0);
  FUN_016ebe60(param_1,cVar2 + '\x06',cVar1 + '\x05',0,1);
  FUN_016ed320(param_1,6,0,1.0 / dVar5,0);
  FUN_016ebe60(param_1,cVar2 + '\a',cVar1 + '\x04',2,1);
  FUN_016ed320(param_1,7,0,1.0 / dVar5,0);
  FUN_00e7d1b0(param_1,cVar1 + '\x02',cVar3,cVar4,4,3,local_378);
  FUN_00e7d1b0(param_1,cVar1 + '\x05',cVar1 + '\x04',2,4,3,local_398);
  FUN_016e9f40(param_1,FUN_01d4f470);
  return;
}

