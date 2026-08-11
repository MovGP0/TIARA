/* Ghidra address: 01d4b4b0 */
/* Ghidra symbol: FUN_01d4b4b0 */


void FUN_01d4b4b0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 local_2a0 [160];
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined1 local_1f0 [456];
  
  local_200 = *(undefined8 *)PTR_DAT_02004340;
  uStack_1f8 = *(undefined8 *)(PTR_DAT_02004340 + 8);
  dVar5 = (double)FUN_016eb0a0(param_1,1);
  dVar6 = (double)FUN_016eb0a0(param_1,2);
  dVar7 = (double)FUN_016eb0a0(param_1,3);
  FUN_016ebb00(param_1,4,local_2a0,0xa0);
  cVar1 = FUN_016e9d10(param_1,3);
  cVar2 = FUN_016e9e80(param_1,5);
  FUN_016e9f40(param_1,FUN_01d4b450);
  cVar4 = cVar1 + '\x01';
  FUN_016ebe60(param_1,cVar2 + '\x01',1,cVar4,1);
  FUN_016ed320(param_1,cVar2 + '\x01',0,1.0 / dVar5,0);
  FUN_016ebe60(param_1,cVar2 + '\x02',cVar1 + '\x02',0,1);
  FUN_016ed320(param_1,cVar2 + '\x02',0,1.0 / dVar5,0);
  cVar3 = cVar1 + '\x03';
  FUN_016ebe60(param_1,cVar2 + '\x03',cVar4,cVar3,1);
  FUN_016ed320(param_1,cVar2 + '\x03',0,1.0 / (dVar6 * dVar5),0);
  FUN_016ebfa0(param_1,cVar2 + '\x04',cVar3,2,1);
  FUN_016ed220(param_1,cVar2 + '\x04',dVar7 / (dVar6 * dVar5),0);
  FUN_016ebe60(param_1,cVar2 + '\x05',2,cVar3,1);
  FUN_016ed320(param_1,cVar2 + '\x05',0,*(undefined8 *)(param_2 + 0x430),0);
  FUN_00e7c120(param_1,param_2,cVar1 + '\x02',cVar4,2,4,3,&local_200,local_2a0,local_1f0);
  FUN_016ea050(param_1,local_1f0,0x178);
  return;
}

