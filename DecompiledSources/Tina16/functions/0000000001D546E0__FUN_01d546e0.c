/* Ghidra address: 01d546e0 */
/* Ghidra symbol: FUN_01d546e0 */


void FUN_01d546e0(undefined8 param_1,longlong param_2,undefined2 param_3,undefined8 param_4,
                 double *param_5,undefined1 *param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 uVar5;
  longlong lVar6;
  double *pdVar7;
  undefined1 uVar9;
  undefined2 uVar8;
  double local_e0 [4];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  
  uVar9 = (undefined1)((ushort)param_3 >> 8);
  pdVar7 = local_e0;
  for (lVar6 = 0xd; lVar6 != 0; lVar6 = lVar6 + -1) {
    *pdVar7 = *param_5;
    param_5 = param_5 + 1;
    pdVar7 = pdVar7 + 1;
  }
  param_6[1] = 1;
  param_6[2] = 2;
  local_e0[0] = (double)FUN_016eb0a0(param_1,1);
  local_e0[1] = (double)FUN_016eb0a0(param_1,2);
  local_e0[2] = (double)FUN_016eb0a0(param_1,3);
  local_e0[3] = (double)FUN_016eb0a0(param_1,4);
  local_c0 = FUN_016eb0a0(param_1,5);
  local_b8 = FUN_016eb0a0(param_1,6);
  local_b0 = FUN_016eb0a0(param_1,7);
  local_a8 = FUN_016eb0a0(param_1,8);
  local_a0 = FUN_016eb0a0(param_1,9);
  local_98 = FUN_016eb0a0(param_1,10);
  local_90 = FUN_016eb0a0(param_1,0xb);
  local_88 = FUN_016eb0a0(param_1,0xc);
  local_80 = FUN_016eb0a0(param_1,0xd);
  *(double *)(param_6 + 0x10) = local_e0[1];
  *(double *)(param_6 + 8) = local_e0[0];
  *(double *)(param_6 + 0x18) = local_e0[2];
  *(double *)(param_6 + 0x20) = local_e0[3];
  *(undefined8 *)(param_6 + 0x28) = local_c0;
  *(undefined8 *)(param_6 + 0x30) = local_b8;
  *(undefined8 *)(param_6 + 0x38) = local_b0;
  *(undefined8 *)(param_6 + 0x40) = local_a8;
  *(undefined8 *)(param_6 + 0x48) = local_a0;
  *(undefined8 *)(param_6 + 0x50) = local_98;
  *(undefined8 *)(param_6 + 0x58) = local_90;
  *(undefined8 *)(param_6 + 0x60) = local_88;
  *(undefined8 *)(param_6 + 0x68) = local_80;
  uVar5 = FUN_016e9e80(param_1,5);
  FUN_016e9d10(param_1,1);
  dVar4 = local_e0[1];
  dVar3 = local_e0[0];
  *param_6 = uVar5;
  uVar1 = *(undefined8 *)(param_2 + 0x448);
  dVar2 = *(double *)(param_2 + 0x430);
  uVar8 = CONCAT11(uVar9,1);
  FUN_016ebe60(param_1,1,uVar8,0,1);
  uVar9 = (undefined1)((ushort)uVar8 >> 8);
  FUN_016ed320(param_1,1,0,1.0 / dVar3,0);
  uVar8 = CONCAT11(uVar9,1);
  FUN_016ec420(param_1,2,uVar8,0,3,0,0);
  uVar9 = (undefined1)((ushort)uVar8 >> 8);
  FUN_016ed320(param_1,2,0,0,0);
  uVar8 = CONCAT11(uVar9,2);
  FUN_016ebfa0(param_1,3,uVar8,0,1);
  uVar9 = (undefined1)((ushort)uVar8 >> 8);
  FUN_016ed220(param_1,3,uVar1,0);
  uVar8 = CONCAT11(uVar9,3);
  FUN_016ebe60(param_1,4,uVar8,2,1);
  uVar9 = (undefined1)((ushort)uVar8 >> 8);
  FUN_016ed320(param_1,4,0,1.0 / dVar4,0);
  FUN_016ebe60(param_1,5,CONCAT11(uVar9,3),0,1);
  FUN_016ed320(param_1,5,0,1.0 / (1.0 / dVar2),0);
  FUN_016e9f40(param_1,FUN_01d55ba0);
  FUN_016ea050(param_1,param_6,0x78);
  return;
}

