/* Ghidra address: 01d4ed20 */
/* Ghidra symbol: FUN_01d4ed20 */


void FUN_01d4ed20(undefined8 param_1)

{
  char cVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  
  dVar2 = (double)FUN_016eb0a0(param_1,1);
  dVar3 = (double)FUN_016eb0a0(param_1,2);
  uVar4 = FUN_016eb0a0(param_1,3);
  FUN_016e9f40(param_1,FUN_01d4ecc0);
  cVar1 = FUN_016e9d10(param_1,1);
  FUN_016e9e80(param_1,9);
  FUN_016ebe60(param_1,1,1,0,1);
  FUN_016ed320(param_1,1,0,1.0 / dVar2,0);
  FUN_016ebe60(param_1,2,2,0,1);
  uVar5 = 0;
  FUN_016ed320(param_1,2,0,1.0 / dVar3,0);
  FUN_016ebdd0(param_1,3,cVar1 + '\x01',0,uVar5 & 0xffffffffffffff00);
  FUN_016ed320(param_1,2,0,0,0);
  FUN_016ebe60(param_1,7,cVar1 + '\x01',3,1);
  FUN_016ed320(param_1,7,0,0x3ff0000000000000,0);
  FUN_016ebfa0(param_1,4,1,0,1);
  FUN_016ed220(param_1,4,0x3d719799812dea11,0);
  FUN_016ebfa0(param_1,5,2,0,1);
  FUN_016ed220(param_1,5,0x3d719799812dea11,0);
  FUN_016ebe60(param_1,6,3,0,1);
  FUN_016ed320(param_1,6,0,1.0 / (dVar3 / 10.0),0);
  FUN_016ec970(param_1,8,1,0,3);
  FUN_016ec970(param_1,9,2,0,3);
  local_a0 = 0;
  local_98 = 0;
  local_90 = uVar4;
  FUN_016ea050(param_1,&local_a0,0x18);
  return;
}

