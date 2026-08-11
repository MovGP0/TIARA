/* Ghidra address: 01d4ad90 */
/* Ghidra symbol: FUN_01d4ad90 */


void FUN_01d4ad90(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  double dVar5;
  double dVar6;
  undefined1 local_b8 [144];
  
  dVar5 = (double)FUN_016eb0a0(param_1,1);
  dVar6 = (double)FUN_016eb0a0(param_1,2);
  FUN_016ebb00(param_1,3,local_b8,0x20);
  cVar1 = FUN_016e9d10(param_1,5);
  cVar2 = FUN_016e9e80(param_1,7);
  cVar3 = cVar1 + '\x01';
  FUN_016ebe60(param_1,cVar2 + '\x01',1,cVar3,1);
  FUN_016ed320(param_1,cVar2 + '\x01',0,1.0 / dVar5,0);
  cVar4 = cVar1 + '\x03';
  FUN_016ebe60(param_1,cVar2 + '\x02',cVar3,cVar4,1);
  FUN_016ed320(param_1,cVar2 + '\x02',0,1.0 / dVar6,0);
  FUN_016ebe60(param_1,cVar2 + '\x03',2,cVar3,1);
  FUN_016ed320(param_1,cVar2 + '\x03',0,1.0 / dVar5,0);
  FUN_016ebe60(param_1,cVar2 + '\x04',cVar1 + '\x02',0,1);
  FUN_016ed320(param_1,cVar2 + '\x04',0,1.0 / dVar6,0);
  FUN_00e7d1b0(param_1,cVar1 + '\x02',cVar3,cVar4,5,4,local_b8);
  FUN_016ebe60(param_1,cVar2 + '\x05',cVar4,cVar1 + '\x04',1);
  FUN_016ed320(param_1,cVar2 + '\x05',0,1.0 / dVar6,0);
  FUN_016ebe60(param_1,cVar2 + '\x06',cVar1 + '\x04',3,1);
  FUN_016ed320(param_1,cVar2 + '\x06',0,1.0 / dVar6,0);
  FUN_016ebe60(param_1,cVar2 + '\a',cVar1 + '\x05',0,1);
  FUN_016ed320(param_1,cVar2 + '\a',0,1.0 / dVar6,0);
  FUN_00e7d1b0(param_1,cVar1 + '\x05',cVar1 + '\x04',3,5,4,local_b8);
  return;
}

