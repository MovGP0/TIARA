/* Ghidra address: 00f5b110 */
/* Ghidra symbol: FUN_00f5b110 */


void FUN_00f5b110(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                 byte param_5,byte param_6,undefined8 *param_7,byte *param_8)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  double dVar8;
  undefined8 in_stack_ffffffffffffff38;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined8 local_68 [4];
  undefined8 local_48;
  undefined8 local_40;
  double local_38;
  double local_30;
  
  puVar7 = local_68;
  for (lVar5 = 8; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *param_7;
    param_7 = param_7 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined8 *)(param_8 + 0x28) = local_68[0];
  *(undefined8 *)(param_8 + 0x30) = local_68[1];
  *(undefined8 *)(param_8 + 0x18) = local_48;
  *(undefined8 *)(param_8 + 0x20) = local_40;
  bVar1 = FUN_016e9e80(param_1,6);
  param_8[1] = bVar1;
  cVar2 = FUN_016e9d10(param_1,2);
  cVar6 = cVar2 + '\x02';
  param_8[0x48] = param_5;
  param_8[0x49] = param_6;
  cVar3 = FUN_016ea1b0(param_1,1);
  param_8[0x38] = cVar3 + 1;
  uVar4 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff38 >> 8),1);
  FUN_016ebdd0(param_1,param_8[1] + 1,cVar2 + '\x01',param_6,uVar4);
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  FUN_016ebef0(param_1,param_8[1] + 2,param_5,cVar2 + '\x01',uVar4);
  uVar9 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  FUN_016ebe60(param_1,param_8[1] + 5,param_5,param_6,uVar9);
  FUN_016ebdd0(param_1,param_8[1] + 3,cVar6,0,uVar9 & 0xffffffffffffff00);
  bVar1 = param_8[1];
  FUN_016ecbf0(param_1,bVar1 + 6,bVar1 + 1,bVar1 + 3);
  if ((local_30 == 0.0) && (local_38 == 0.0)) {
    uVar4 = FUN_004095c0(0x10);
    *(undefined8 *)(param_8 + 8) = uVar4;
    puVar10 = &local_6a;
    FUN_00dd2c10(uVar4,&PTR_FUN_00dd01b8,cVar6,0,&local_69,puVar10);
    param_8[0x10] = 1;
  }
  else {
    lVar5 = FUN_004095c0(0x9c80);
    *(longlong *)(param_8 + 8) = lVar5;
    param_8[0x10] = 0;
    puVar10 = &local_6a;
    FUN_00dd2ca0(lVar5,&PTR_FUN_00dd01f0,cVar6,0,&local_69,puVar10);
    *(double *)(lVar5 + 0x18) = local_30;
    *(double *)(lVar5 + 0x10) = local_38;
    *(undefined8 *)(lVar5 + 0x28) = 0;
    *(undefined1 *)(lVar5 + 0x20) = 0;
    *(undefined1 *)(lVar5 + 0x21) = 0;
    *(undefined4 *)(lVar5 + 0x24) = 0;
  }
  *(undefined1 *)(*(longlong *)(param_8 + 8) + 6) = 3;
  local_6b = 0;
  bVar1 = *param_8;
  if (bVar1 < 5) {
    if (bVar1 == 4) {
      param_8[0x4a] = 2;
      uVar4 = FUN_004095c0(0x110);
      *(undefined8 *)(param_8 + 0x50) = uVar4;
      uVar9 = (ulonglong)puVar10 & 0xffffffffffffff00;
      FUN_00f56f20(param_1,param_2,*param_3,*param_4,cVar6,uVar9,0x4000000000000000,
                   0x4008000000000000,local_68[2],local_68[3],uVar4);
      FUN_00f56f20(param_1,param_2,param_3[1],*param_4,cVar6,uVar9 & 0xffffffffffffff00,
                   0x4008000000000000,0x4000000000000000,local_68[2],local_68[3],
                   *(longlong *)(param_8 + 0x50) + 0x88);
    }
    else if (bVar1 == 1) {
      param_8[0x4a] = 1;
      uVar4 = FUN_004095c0(0x88);
      *(undefined8 *)(param_8 + 0x50) = uVar4;
      FUN_00f56f20(param_1,param_2,*param_3,*param_4,cVar6,(ulonglong)puVar10 & 0xffffffffffffff00,
                   0x4000000000000000,0x4008000000000000,local_68[2],local_68[3],uVar4);
    }
    else if (bVar1 == 2) {
      param_8[0x4a] = 1;
      uVar4 = FUN_004095c0(0x88);
      *(undefined8 *)(param_8 + 0x50) = uVar4;
      FUN_00f56f20(param_1,param_2,*param_3,*param_4,cVar6,(ulonglong)puVar10 & 0xffffffffffffff00,
                   0x4000000000000000,0x4008000000000000,local_68[3],local_68[2],uVar4);
    }
    else if (bVar1 == 3) {
      param_8[0x4a] = 2;
      uVar4 = FUN_004095c0(0x110);
      *(undefined8 *)(param_8 + 0x50) = uVar4;
      uVar9 = (ulonglong)puVar10 & 0xffffffffffffff00;
      FUN_00f56f20(param_1,param_2,param_3[1],*param_4,cVar6,uVar9,0x4000000000000000,
                   0x4008000000000000,local_68[2],local_68[3],uVar4);
      FUN_00f56f20(param_1,param_2,*param_3,*param_4,cVar6,uVar9 & 0xffffffffffffff00,
                   0x4008000000000000,0x4000000000000000,local_68[2],local_68[3],
                   *(longlong *)(param_8 + 0x50) + 0x88);
    }
  }
  else if (bVar1 == 5) {
    param_8[0x4a] = 2;
    uVar4 = FUN_004095c0(0x110);
    *(undefined8 *)(param_8 + 0x50) = uVar4;
    uVar9 = (ulonglong)puVar10 & 0xffffffffffffff00;
    FUN_00f56f20(param_1,param_2,*param_3,*param_4,cVar6,uVar9,0x4000000000000000,0x4008000000000000
                 ,local_68[2],local_68[3],uVar4);
    FUN_00f56f20(param_1,param_2,param_3[1],param_4[1],cVar6,uVar9 & 0xffffffffffffff00,
                 0x4000000000000000,0x4008000000000000,local_68[2],local_68[3],
                 *(longlong *)(param_8 + 0x50) + 0x88);
  }
  else if (bVar1 == 6) {
    param_8[0x4a] = 4;
    uVar4 = FUN_004095c0(0x220);
    *(undefined8 *)(param_8 + 0x50) = uVar4;
    uVar9 = (ulonglong)puVar10 & 0xffffffffffffff00;
    FUN_00f56f20(param_1,param_2,param_3[1],*param_4,cVar6,uVar9,0x4000000000000000,
                 0x4008000000000000,local_68[2],local_68[3],uVar4);
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_00f56f20(param_1,param_2,*param_3,*param_4,cVar6,uVar9,0x4008000000000000,0x4000000000000000
                 ,local_68[2],local_68[3],*(longlong *)(param_8 + 0x50) + 0x88);
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_00f56f20(param_1,param_2,param_3[3],param_4[1],cVar6,uVar9,0x4000000000000000,
                 0x4008000000000000,local_68[2],local_68[3],*(longlong *)(param_8 + 0x50) + 0x110);
    FUN_00f56f20(param_1,param_2,param_3[2],param_4[1],cVar6,uVar9 & 0xffffffffffffff00,
                 0x4008000000000000,0x4000000000000000,local_68[2],local_68[3],
                 *(longlong *)(param_8 + 0x50) + 0x198);
  }
  FUN_016ed1a0(param_1,param_8[1] + 4,param_5,param_6);
  local_6b = 0;
  uVar4 = FUN_016ebdc0(param_1);
  FUN_01d04b50(uVar4,&local_6b);
  FUN_016ed320(param_1,param_8[1] + 1,0,local_48,0);
  FUN_016ed220(param_1,param_8[1] + 2,local_40,0);
  dVar8 = (double)FUN_00b90620(0x4059000000000000,local_48);
  FUN_016ed320(param_1,param_8[1] + 5,0,0.001 / dVar8,0);
  return;
}

