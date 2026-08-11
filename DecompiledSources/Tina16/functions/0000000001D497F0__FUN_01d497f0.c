/* Ghidra address: 01d497f0 */
/* Ghidra symbol: FUN_01d497f0 */


void FUN_01d497f0(undefined8 param_1,longlong param_2,undefined2 param_3,undefined8 param_4,
                 undefined8 param_5,longlong param_6)

{
  double dVar1;
  undefined8 uVar2;
  undefined1 uVar4;
  undefined2 uVar3;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  
  uVar4 = (undefined1)((ushort)param_3 >> 8);
  *(undefined4 *)(param_6 + 0x24) = 20000;
  uVar2 = FUN_00409570(160000);
  *(undefined8 *)(param_6 + 0x28) = uVar2;
  uVar2 = FUN_00409570((longlong)(*(int *)(param_6 + 0x24) * 8));
  *(undefined8 *)(param_6 + 0x30) = uVar2;
  *(undefined1 *)(param_6 + 1) = 1;
  *(undefined1 *)(param_6 + 2) = 2;
  dVar5 = (double)FUN_016eb0a0(param_1,1);
  dVar6 = (double)FUN_016eb0a0(param_1,2);
  *(double *)(param_6 + 8) = dVar6;
  *(double *)(param_6 + 0x38) = dVar5;
  *(undefined8 *)(param_6 + 0x10) = 0;
  *(undefined4 *)(param_6 + 0x18) = 1;
  *(undefined4 *)(param_6 + 0x1c) = 1;
  *(undefined4 *)(param_6 + 0x20) = 0;
  *(undefined8 *)(*(longlong *)(param_6 + 0x30) + 8) = 0;
  *(undefined8 *)(*(longlong *)(param_6 + 0x28) + 8) = 0;
  FUN_016e9e80(param_1,9);
  FUN_016e9d10(param_1,2);
  dVar1 = *(double *)(param_2 + 0x430);
  uVar3 = CONCAT11(uVar4,1);
  FUN_016ebe60(param_1,1,uVar3,0,1);
  uVar4 = (undefined1)((ushort)uVar3 >> 8);
  FUN_016ed320(param_1,1,0,1.0 / dVar5,0);
  uVar3 = CONCAT11(uVar4,1);
  FUN_016ec790(param_1,2,uVar3,0,2,0,0);
  uVar4 = (undefined1)((ushort)uVar3 >> 8);
  uVar7 = 0;
  FUN_016ed320(param_1,2,0,0,0);
  uVar3 = CONCAT11(uVar4,1);
  FUN_016ec2d0(param_1,6,uVar3,0,uVar7 & 0xffffffffffffff00,3,1);
  uVar4 = (undefined1)((ushort)uVar3 >> 8);
  FUN_016ed320(param_1,6,0,0x3f50624dd2f1a9fc,0);
  uVar3 = CONCAT11(uVar4,3);
  FUN_016ebfa0(param_1,3,uVar3,0,1);
  uVar4 = (undefined1)((ushort)uVar3 >> 8);
  FUN_016ed220(param_1,3,dVar6 / 2200.0,0);
  uVar3 = CONCAT11(uVar4,3);
  FUN_016ebe60(param_1,4,uVar3,0,1);
  uVar4 = (undefined1)((ushort)uVar3 >> 8);
  uVar7 = 0;
  FUN_016ed320(param_1,4,0,0x3f50624dd2f1a9fc,0);
  uVar3 = CONCAT11(uVar4,2);
  FUN_016ec2d0(param_1,7,uVar3,0,uVar7 & 0xffffffffffffff00,4,1);
  uVar4 = (undefined1)((ushort)uVar3 >> 8);
  FUN_016ed320(param_1,7,0,0x3f50624dd2f1a9fc,0);
  uVar3 = CONCAT11(uVar4,4);
  FUN_016ebfa0(param_1,9,uVar3,0,1);
  uVar4 = (undefined1)((ushort)uVar3 >> 8);
  FUN_016ed220(param_1,9,dVar6 / 2200.0,0);
  uVar3 = CONCAT11(uVar4,4);
  FUN_016ebe60(param_1,8,uVar3,0,1);
  uVar4 = (undefined1)((ushort)uVar3 >> 8);
  FUN_016ed320(param_1,8,0,0x3f50624dd2f1a9fc,0);
  FUN_016ebe60(param_1,5,CONCAT11(uVar4,3),0,1);
  FUN_016ed320(param_1,5,0,1.0 / (1.0 / dVar1),0);
  FUN_016e9f40(param_1,FUN_01d4a0e0);
  FUN_016ea050(param_1,param_6,0x48);
  FUN_016e9f50(param_1,FUN_01d48f70);
  return;
}

