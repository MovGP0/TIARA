/* Ghidra address: 01d55c20 */
/* Ghidra symbol: FUN_01d55c20 */


void FUN_01d55c20(undefined8 param_1,longlong param_2,undefined2 param_3,undefined8 param_4,
                 double *param_5,longlong param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double *pdVar6;
  undefined1 uVar8;
  undefined2 uVar7;
  double local_118 [4];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  
  uVar8 = (undefined1)((ushort)param_3 >> 8);
  pdVar6 = local_118;
  for (lVar5 = 0x14; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar6 = *param_5;
    param_5 = param_5 + 1;
    pdVar6 = pdVar6 + 1;
  }
  *(undefined1 *)(param_6 + 1) = 1;
  *(undefined1 *)(param_6 + 2) = 2;
  local_118[0] = (double)FUN_016eb0a0(param_1,1);
  local_118[1] = (double)FUN_016eb0a0(param_1,2);
  local_118[2] = (double)FUN_016eb0a0(param_1,3);
  local_118[3] = (double)FUN_016eb0a0(param_1,4);
  local_f8 = FUN_016eb0a0(param_1,5);
  local_f0 = FUN_016eb0a0(param_1,6);
  local_e8 = FUN_016eb0a0(param_1,7);
  local_e0 = FUN_016eb0a0(param_1,8);
  local_d8 = FUN_016eb0a0(param_1,9);
  local_d0 = FUN_016eb0a0(param_1,10);
  local_c8 = FUN_016eb0a0(param_1,0xb);
  local_c0 = FUN_016eb0a0(param_1,0xc);
  local_b8 = FUN_016eb0a0(param_1,0xd);
  local_b0 = FUN_016eb0a0(param_1,0xe);
  local_a8 = FUN_016eb0a0(param_1,0xf);
  local_a0 = FUN_016eb0a0(param_1,0x10);
  local_98 = FUN_016eb0a0(param_1,0x11);
  local_90 = FUN_016eb0a0(param_1,0x12);
  local_88 = FUN_016eb0a0(param_1,0x13);
  local_80 = FUN_016eb0a0(param_1,0x14);
  *(double *)(param_6 + 0x10) = local_118[1];
  *(double *)(param_6 + 8) = local_118[0];
  *(double *)(param_6 + 0x18) = local_118[2];
  *(double *)(param_6 + 0x20) = local_118[3];
  *(undefined8 *)(param_6 + 0x28) = local_f8;
  *(undefined8 *)(param_6 + 0x30) = local_f0;
  *(undefined8 *)(param_6 + 0x38) = local_e8;
  *(undefined8 *)(param_6 + 0x68) = local_e0;
  *(undefined8 *)(param_6 + 0x70) = local_d8;
  *(undefined8 *)(param_6 + 0x78) = local_d0;
  *(undefined8 *)(param_6 + 0x80) = local_c8;
  *(undefined8 *)(param_6 + 0x40) = local_c0;
  *(undefined8 *)(param_6 + 0x48) = local_b8;
  *(undefined8 *)(param_6 + 0x50) = local_b0;
  *(undefined8 *)(param_6 + 0x58) = local_a8;
  *(undefined8 *)(param_6 + 0x60) = local_a0;
  *(undefined8 *)(param_6 + 0x88) = local_98;
  *(undefined8 *)(param_6 + 0x90) = local_90;
  *(undefined8 *)(param_6 + 0x98) = local_88;
  *(undefined8 *)(param_6 + 0xa0) = local_80;
  FUN_016e9e80(param_1,5);
  FUN_016e9d10(param_1,1);
  dVar4 = local_118[0];
  uVar1 = *(undefined8 *)(param_2 + 0x448);
  dVar2 = *(double *)(param_2 + 0x430);
  dVar3 = *(double *)(param_2 + 0x430);
  uVar7 = CONCAT11(uVar8,1);
  FUN_016ebe60(param_1,1,uVar7,0,1);
  uVar8 = (undefined1)((ushort)uVar7 >> 8);
  FUN_016ed320(param_1,1,0,1.0 / dVar4,0);
  uVar7 = CONCAT11(uVar8,1);
  FUN_016ec420(param_1,2,uVar7,0,3,0,0);
  uVar8 = (undefined1)((ushort)uVar7 >> 8);
  FUN_016ed320(param_1,2,0,0,0);
  uVar7 = CONCAT11(uVar8,2);
  FUN_016ebfa0(param_1,3,uVar7,0,1);
  uVar8 = (undefined1)((ushort)uVar7 >> 8);
  FUN_016ed220(param_1,3,uVar1,0);
  uVar7 = CONCAT11(uVar8,3);
  FUN_016ebe60(param_1,4,uVar7,2,1);
  uVar8 = (undefined1)((ushort)uVar7 >> 8);
  FUN_016ed320(param_1,4,0,1.0 / dVar2,0);
  FUN_016ebe60(param_1,5,CONCAT11(uVar8,3),0,1);
  FUN_016ed320(param_1,5,0,1.0 / (1.0 / dVar3),0);
  FUN_016e9f40(param_1,FUN_01d56d70);
  FUN_016ea050(param_1,param_6,0xb0);
  return;
}

