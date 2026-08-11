/* Ghidra address: 01d4a970 */
/* Ghidra symbol: FUN_01d4a970 */


void FUN_01d4a970(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  double dVar5;
  double dVar6;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined1 local_428 [160];
  undefined1 local_388 [376];
  undefined1 local_210 [488];
  
  dVar5 = (double)FUN_016eb0a0(param_1,1);
  dVar6 = (double)FUN_016eb0a0(param_1,2);
  FUN_016ebb00(param_1,3,local_428,0xa0);
  local_438 = *(undefined8 *)PTR_DAT_02004340;
  uStack_430 = *(undefined8 *)(PTR_DAT_02004340 + 8);
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
  FUN_016ebe60(param_1,cVar2 + '\x05',cVar4,cVar1 + '\x04',1);
  FUN_016ed320(param_1,cVar2 + '\x05',0,1.0 / dVar6,0);
  FUN_016ebe60(param_1,cVar2 + '\x06',cVar1 + '\x04',3,1);
  FUN_016ed320(param_1,cVar2 + '\x06',0,1.0 / dVar6,0);
  FUN_016ebe60(param_1,cVar2 + '\a',cVar1 + '\x05',0,1);
  FUN_016ed320(param_1,cVar2 + '\a',0,1.0 / dVar6,0);
  FUN_00e7c120(param_1,param_2,cVar1 + '\x05',cVar1 + '\x04',3,5,4,&local_438,local_428,local_210);
  FUN_00e7c120(param_1,param_2,cVar1 + '\x02',cVar3,cVar4,5,4,&local_438,local_428,local_388);
  FUN_016ea050(param_1,local_388,0x2f0);
  FUN_016e9f40(param_1,FUN_01d4a910);
  FUN_016e9f60(param_1,FUN_01d4a8d0);
  return;
}

