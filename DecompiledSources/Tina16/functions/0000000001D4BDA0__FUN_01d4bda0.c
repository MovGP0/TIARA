/* Ghidra address: 01d4bda0 */
/* Ghidra symbol: FUN_01d4bda0 */


void FUN_01d4bda0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  double dVar4;
  double dVar5;
  undefined1 local_280 [160];
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined1 local_1d0 [424];
  
  local_1e0 = *(undefined8 *)PTR_DAT_02004340;
  uStack_1d8 = *(undefined8 *)(PTR_DAT_02004340 + 8);
  dVar4 = (double)FUN_016eb0a0(param_1,1);
  dVar5 = (double)FUN_016eb0a0(param_1,2);
  FUN_016ebb00(param_1,3,local_280,0xa0);
  cVar1 = FUN_016e9d10(param_1,2);
  cVar2 = FUN_016e9e80(param_1,4);
  FUN_016e9f40(param_1,FUN_01d4bd40);
  cVar3 = cVar1 + '\x01';
  FUN_016ebe60(param_1,cVar2 + '\x01',1,cVar3,1);
  FUN_016ed320(param_1,cVar2 + '\x01',0,1.0 / dVar4,0);
  FUN_016ebe60(param_1,cVar2 + '\x02',cVar1 + '\x02',0,1);
  FUN_016ed320(param_1,cVar2 + '\x02',0,1.0 / dVar4,0);
  FUN_016ebfa0(param_1,cVar2 + '\x03',cVar3,2,1);
  FUN_016ed220(param_1,cVar2 + '\x03',dVar5 / dVar4,0);
  FUN_016ebe60(param_1,cVar2 + '\x04',2,cVar3,1);
  FUN_016ed320(param_1,cVar2 + '\x04',0,*(undefined8 *)(param_2 + 0x430),0);
  FUN_00e7c120(param_1,param_2,cVar1 + '\x02',cVar3,2,4,3,&local_1e0,local_280,local_1d0);
  FUN_016ea050(param_1,local_1d0,0x178);
  return;
}

