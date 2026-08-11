/* Ghidra address: 01d4d6f0 */
/* Ghidra symbol: FUN_01d4d6f0 */


void FUN_01d4d6f0(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 local_210 [488];
  
  dVar4 = (double)FUN_016eb0a0(param_1,1);
  dVar5 = (double)FUN_016eb0a0(param_1,2);
  dVar6 = (double)FUN_016eb0a0(param_1,3);
  dVar7 = (double)FUN_016eb0a0(param_1,4);
  FUN_016ebb00(param_1,5,local_210,0x20);
  cVar1 = FUN_016e9d10(param_1,2);
  cVar2 = FUN_016e9e80(param_1,5);
  cVar3 = cVar1 + '\x01';
  FUN_016ebe60(param_1,cVar2 + '\x01',1,cVar3,1);
  FUN_016ed320(param_1,1,0,1.0 / dVar4,0);
  FUN_016ebe60(param_1,cVar2 + '\x02',cVar1 + '\x02',0,1);
  FUN_016ed320(param_1,2,0,1.0 / dVar4,0);
  FUN_016ebe60(param_1,cVar2 + '\x03',cVar3,2,1);
  FUN_016ed320(param_1,3,0,1.0 / (dVar5 * dVar4),0);
  FUN_016ebfa0(param_1,cVar2 + '\x04',1,cVar3,1);
  FUN_016ed220(param_1,4,(dVar6 + dVar7) / dVar4,0);
  FUN_016ebfa0(param_1,cVar2 + '\x05',cVar3,2,1);
  FUN_016ed220(param_1,5,dVar7 / (dVar5 * dVar4),0);
  FUN_00e7d1b0(param_1,cVar1 + '\x02',cVar3,2,4,3,local_210);
  return;
}

