/* Ghidra address: 01d4f260 */
/* Ghidra symbol: FUN_01d4f260 */


void FUN_01d4f260(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  undefined1 uVar2;
  undefined2 uVar1;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  uVar2 = (undefined1)((ushort)param_3 >> 8);
  dVar3 = (double)FUN_016eb0a0(param_1,1);
  dVar4 = (double)FUN_016eb0a0(param_1,2);
  uVar5 = FUN_016eb0a0(param_1,3);
  FUN_016e9f40(param_1,FUN_01d4f200);
  FUN_016e9cd0(param_1,0);
  FUN_016e9e20(param_1,5);
  uVar1 = CONCAT11(uVar2,1);
  FUN_016ebe60(param_1,1,uVar1,0,1);
  uVar2 = (undefined1)((ushort)uVar1 >> 8);
  FUN_016ed320(param_1,1,0,1.0 / dVar3,0);
  uVar1 = CONCAT11(uVar2,2);
  FUN_016ebe60(param_1,2,uVar1,0,1);
  uVar2 = (undefined1)((ushort)uVar1 >> 8);
  uVar6 = 0;
  FUN_016ed320(param_1,2,0,1.0 / dVar4,0);
  uVar1 = CONCAT11(uVar2,3);
  FUN_016ebdd0(param_1,3,uVar1,0,uVar6 & 0xffffffffffffff00);
  uVar2 = (undefined1)((ushort)uVar1 >> 8);
  FUN_016ed320(param_1,2,0,0,0);
  FUN_016ec970(param_1,4,CONCAT11(uVar2,1),0,3);
  FUN_016ec970(param_1,5,2,0,3);
  local_60 = 0;
  local_58 = 0;
  local_50 = uVar5;
  FUN_016ea050(param_1,&local_60,0x18);
  return;
}

