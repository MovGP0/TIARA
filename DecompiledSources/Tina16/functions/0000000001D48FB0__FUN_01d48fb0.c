/* Ghidra address: 01d48fb0 */
/* Ghidra symbol: FUN_01d48fb0 */


void FUN_01d48fb0(undefined8 param_1,longlong param_2,undefined2 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 *param_6)

{
  double dVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 uVar5;
  undefined2 uVar4;
  double dVar6;
  double dVar7;
  
  uVar5 = (undefined1)((ushort)param_3 >> 8);
  *(undefined4 *)(param_6 + 0x24) = 20000;
  uVar3 = FUN_00409570(160000);
  *(undefined8 *)(param_6 + 0x28) = uVar3;
  uVar3 = FUN_00409570((longlong)(*(int *)(param_6 + 0x24) * 8));
  *(undefined8 *)(param_6 + 0x30) = uVar3;
  param_6[1] = 1;
  param_6[2] = 2;
  dVar6 = (double)FUN_016eb0a0(param_1,1);
  dVar7 = (double)FUN_016eb0a0(param_1,2);
  uVar3 = FUN_016eb0a0(param_1,3);
  *(undefined8 *)(param_6 + 8) = uVar3;
  *(double *)(param_6 + 0x40) = dVar7;
  *(double *)(param_6 + 0x38) = dVar6;
  *(undefined8 *)(param_6 + 0x10) = 0;
  *(undefined4 *)(param_6 + 0x18) = 1;
  *(undefined4 *)(param_6 + 0x1c) = 1;
  *(undefined4 *)(param_6 + 0x20) = 0;
  *(undefined8 *)(*(longlong *)(param_6 + 0x30) + 8) = 0;
  *(undefined8 *)(*(longlong *)(param_6 + 0x28) + 8) = 0;
  uVar2 = FUN_016e9e80(param_1,5);
  FUN_016e9d10(param_1,1);
  *param_6 = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x448);
  dVar1 = *(double *)(param_2 + 0x430);
  uVar4 = CONCAT11(uVar5,1);
  FUN_016ebe60(param_1,1,uVar4,0,1);
  uVar2 = (undefined1)((ushort)uVar4 >> 8);
  FUN_016ed320(param_1,1,0,1.0 / dVar6,0);
  uVar4 = CONCAT11(uVar2,1);
  FUN_016ec790(param_1,2,uVar4,0,3,0,0);
  uVar2 = (undefined1)((ushort)uVar4 >> 8);
  FUN_016ed320(param_1,2,0,0,0);
  uVar4 = CONCAT11(uVar2,2);
  FUN_016ebfa0(param_1,3,uVar4,0,1);
  uVar2 = (undefined1)((ushort)uVar4 >> 8);
  FUN_016ed220(param_1,3,uVar3,0);
  uVar4 = CONCAT11(uVar2,3);
  FUN_016ebe60(param_1,4,uVar4,2,1);
  uVar2 = (undefined1)((ushort)uVar4 >> 8);
  FUN_016ed320(param_1,4,0,1.0 / dVar7,0);
  FUN_016ebe60(param_1,5,CONCAT11(uVar2,3),0,1);
  FUN_016ed320(param_1,5,0,1.0 / (1.0 / dVar1),0);
  FUN_016e9f40(param_1,FUN_01d49780);
  FUN_016ea050(param_1,param_6,0x50);
  FUN_016e9f50(param_1,FUN_01d48f30);
  return;
}

