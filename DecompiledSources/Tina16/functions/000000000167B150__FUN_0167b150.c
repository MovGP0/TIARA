/* Ghidra address: 0167b150 */
/* Ghidra symbol: FUN_0167b150 */


void FUN_0167b150(undefined8 *param_1,undefined8 *param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_168 [40];
  undefined8 local_140 [4];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
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
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  puVar3 = local_140;
  for (lVar2 = 0x23; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined8 *)PTR_DAT_020049e8;
  puVar4 = param_2;
  for (lVar2 = 0x32; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *param_4 = 0x32;
  lVar2 = FUN_004095c0((longlong)*param_4);
  *param_3 = lVar2;
  FUN_0040d200(*param_3,(longlong)*param_4,0);
  *param_2 = local_140[0];
  param_2[1] = local_140[1];
  param_2[2] = local_140[3];
  param_2[3] = local_140[2];
  param_2[4] = local_e0;
  param_2[5] = local_d8;
  param_2[6] = local_d0;
  param_2[7] = local_c8;
  param_2[8] = local_c0;
  param_2[9] = local_a0;
  param_2[10] = local_98;
  param_2[0xb] = local_b8;
  param_2[0xd] = local_a8;
  param_2[0xc] = local_b0;
  param_2[0xe] = local_80;
  param_2[0xf] = local_78;
  param_2[0x10] = local_70;
  param_2[0x13] = local_90;
  param_2[0x17] = local_120;
  param_2[0x19] = local_118;
  param_2[0x1e] = local_110;
  param_2[0x23] = local_f8;
  param_2[0x24] = local_108;
  param_2[0x25] = local_100;
  param_2[0x28] = local_68;
  param_2[0x29] = local_60;
  param_2[0x2a] = local_f0;
  param_2[0x2b] = local_e8;
  iVar1 = FUN_0167b110(auStack_168,param_2 + 0x11);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_0167b110(auStack_168,param_2 + 0x12);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_0167b110(auStack_168,param_2 + 0x14);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_0167b110(auStack_168,param_2 + 0x15);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_0167b110(auStack_168,param_2 + 0x16);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_0167b110(auStack_168,param_2 + 0x18);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_0167b110(auStack_168,param_2 + 0x1a);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_0167b110(auStack_168,param_2 + 0x1b);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_0167b110(auStack_168,param_2 + 0x1c);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_0167b110(auStack_168,param_2 + 0x1d);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_0167b110(auStack_168,param_2 + 0x1f);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_0167b110(auStack_168,param_2 + 0x20);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_0167b110(auStack_168,param_2 + 0x21);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_0167b110(auStack_168,param_2 + 0x22);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_0167b110(auStack_168,param_2 + 0x26);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_0167b110(auStack_168,param_2 + 0x27);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  param_2[0x2c] = local_58;
  param_2[0x2d] = local_50;
  param_2[0x2e] = local_48;
  param_2[0x2f] = local_40;
  param_2[0x30] = local_38;
  param_2[0x31] = local_30;
  return;
}

