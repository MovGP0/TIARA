/* Ghidra address: 01d50b60 */
/* Ghidra symbol: FUN_01d50b60 */


void FUN_01d50b60(undefined8 param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 local_4c8 [160];
  undefined1 local_428 [160];
  undefined8 local_388;
  undefined8 uStack_380;
  undefined1 local_378 [376];
  undefined1 local_200 [472];
  
  local_388 = *(undefined8 *)PTR_DAT_02004340;
  uStack_380 = *(undefined8 *)(PTR_DAT_02004340 + 8);
  dVar4 = (double)FUN_016eb0a0(param_1,1);
  dVar5 = (double)FUN_016eb0a0(param_1,2);
  dVar6 = (double)FUN_016eb0a0(param_1,3);
  FUN_016ebb00(param_1,4,local_428,0xa0);
  FUN_016ebb00(param_1,4,local_4c8,0xa0);
  dVar7 = (dVar5 * 2.0 * dVar6) / dVar4;
  cVar1 = FUN_016e9d10(param_1,7);
  cVar2 = FUN_016e9e80(param_1,10);
  FUN_016e9f40(param_1,FUN_01d50b00);
  FUN_016ebe60(param_1,cVar2 + '\x01',cVar1 + '\a',1,1);
  FUN_016ed320(param_1,1,0,1.0 / dVar4,0);
  cVar3 = cVar1 + '\x06';
  FUN_016ebef0(param_1,cVar2 + '\x02',cVar3,cVar1 + '\a',1);
  FUN_016ed220(param_1,2,(dVar6 * dVar4) / (dVar5 * 2.0),0);
  FUN_016ebfa0(param_1,cVar2 + '\x03',cVar3,cVar1 + '\x01',1);
  FUN_016ed220(param_1,3,dVar7,0);
  FUN_016ebe60(param_1,cVar2 + '\x04',cVar1 + '\x01',cVar3,1);
  FUN_016ed320(param_1,4,0,*(undefined8 *)(param_2 + 0x430),0);
  FUN_016ebe60(param_1,cVar2 + '\x05',cVar1 + '\x02',0,1);
  FUN_016ed320(param_1,5,0,1.0 / dVar4,0);
  FUN_016ebfa0(param_1,cVar2 + '\x06',cVar1 + '\x01',cVar1 + '\x03',1);
  FUN_016ed220(param_1,6,dVar7,0);
  FUN_016ebe60(param_1,cVar2 + '\a',cVar1 + '\x03',cVar1 + '\x01',1);
  FUN_016ed320(param_1,7,0,*(undefined8 *)(param_2 + 0x430),0);
  FUN_016ebe60(param_1,cVar2 + '\b',cVar1 + '\x03',cVar1 + '\x04',1);
  FUN_016ed320(param_1,8,0,1.0 / dVar4,0);
  FUN_016ebe60(param_1,cVar2 + '\t',cVar1 + '\x05',0,1);
  FUN_016ed320(param_1,9,0,1.0 / dVar4,0);
  FUN_016ebe60(param_1,cVar2 + '\n',cVar1 + '\x04',2,1);
  FUN_016ed320(param_1,10,0,1.0 / dVar4,0);
  FUN_00e7c120(param_1,param_2,cVar1 + '\x02',cVar1 + '\x01',cVar1 + '\x03',4,3,&local_388,local_428
               ,local_378);
  FUN_00e7c120(param_1,param_2,cVar1 + '\x05',cVar1 + '\x04',2,4,3,&local_388,local_4c8,local_200);
  FUN_016ea050(param_1,local_378,0x2f0);
  return;
}

