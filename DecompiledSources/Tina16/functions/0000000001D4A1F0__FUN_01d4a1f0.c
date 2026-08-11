/* Ghidra address: 01d4a1f0 */
/* Ghidra symbol: FUN_01d4a1f0 */


void FUN_01d4a1f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  double dVar4;
  double dVar5;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined1 local_280 [160];
  undefined1 local_1e0 [440];
  
  dVar4 = (double)FUN_016eb0a0(param_1,1);
  dVar5 = (double)FUN_016eb0a0(param_1,2);
  FUN_016ebb00(param_1,3,local_280,0xa0);
  local_290 = *(undefined8 *)PTR_DAT_02004340;
  uStack_288 = *(undefined8 *)(PTR_DAT_02004340 + 8);
  cVar1 = FUN_016e9d10(param_1,2);
  cVar2 = FUN_016e9e80(param_1,4);
  FUN_016e9f40(param_1,FUN_01d4a190);
  cVar3 = cVar1 + '\x01';
  FUN_016ebe60(param_1,cVar2 + '\x01',1,cVar3,1);
  FUN_016ed320(param_1,cVar2 + '\x01',0,1.0 / dVar4,0);
  FUN_016ebe60(param_1,cVar2 + '\x02',cVar3,3,1);
  FUN_016ed320(param_1,cVar2 + '\x02',0,1.0 / dVar5,0);
  cVar1 = cVar1 + '\x02';
  FUN_016ebe60(param_1,cVar2 + '\x03',2,cVar1,1);
  FUN_016ed320(param_1,cVar2 + '\x03',0,1.0 / dVar4,0);
  FUN_016ebe60(param_1,cVar2 + '\x04',cVar1,0,1);
  FUN_016ed320(param_1,cVar2 + '\x04',0,1.0 / dVar5,0);
  FUN_00e7c120(param_1,param_2,cVar1,cVar3,3,5,4,&local_290,local_280,local_1e0);
  FUN_016ea050(param_1,local_1e0,0x178);
  return;
}

