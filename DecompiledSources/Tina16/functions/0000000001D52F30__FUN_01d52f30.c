/* Ghidra address: 01d52f30 */
/* Ghidra symbol: FUN_01d52f30 */


void FUN_01d52f30(undefined8 param_1,longlong param_2,undefined2 param_3,undefined8 param_4,
                 undefined8 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  undefined1 uVar4;
  undefined2 uVar3;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = (undefined1)((ushort)param_3 >> 8);
  *(undefined1 *)(param_6 + 1) = 1;
  *(undefined1 *)(param_6 + 2) = 2;
  dVar5 = (double)FUN_016eb0a0(param_1,1);
  uVar6 = FUN_016eb0a0(param_1,2);
  uVar7 = FUN_016eb0a0(param_1,3);
  *(double *)(param_6 + 8) = dVar5;
  *(undefined8 *)(param_6 + 0x10) = uVar6;
  *(undefined8 *)(param_6 + 0x18) = uVar7;
  FUN_016e9e80(param_1,5);
  FUN_016e9d10(param_1,1);
  uVar6 = *(undefined8 *)(param_2 + 0x448);
  dVar1 = *(double *)(param_2 + 0x430);
  dVar2 = *(double *)(param_2 + 0x430);
  uVar3 = CONCAT11(uVar4,1);
  FUN_016ebe60(param_1,1,uVar3,0,1);
  uVar4 = (undefined1)((ushort)uVar3 >> 8);
  FUN_016ed320(param_1,1,0,1.0 / dVar5,0);
  uVar3 = CONCAT11(uVar4,1);
  FUN_016ec420(param_1,2,uVar3,0,3,0,0);
  uVar4 = (undefined1)((ushort)uVar3 >> 8);
  FUN_016ed320(param_1,2,0,0,0);
  uVar3 = CONCAT11(uVar4,2);
  FUN_016ebfa0(param_1,3,uVar3,0,1);
  uVar4 = (undefined1)((ushort)uVar3 >> 8);
  FUN_016ed220(param_1,3,uVar6,0);
  uVar3 = CONCAT11(uVar4,3);
  FUN_016ebe60(param_1,4,uVar3,2,1);
  uVar4 = (undefined1)((ushort)uVar3 >> 8);
  FUN_016ed320(param_1,4,0,1.0 / dVar1,0);
  FUN_016ebe60(param_1,5,CONCAT11(uVar4,3),0,1);
  FUN_016ed320(param_1,5,0,1.0 / (1.0 / dVar2),0);
  FUN_016e9f40(param_1,FUN_01d53410);
  FUN_016ea050(param_1,param_6,0x28);
  return;
}

