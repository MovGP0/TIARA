/* Ghidra address: 01690a80 */
/* Ghidra symbol: FUN_01690a80 */


void FUN_01690a80(undefined8 *param_1,undefined8 *param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_108 [32];
  undefined8 local_e8 [4];
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
  
  puVar3 = local_e8;
  for (lVar2 = 0x18; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar3 = &DAT_01f802a8;
  puVar4 = param_2;
  for (lVar2 = 0x31; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *param_4 = 0x31;
  lVar2 = FUN_004095c0((longlong)*param_4);
  *param_3 = lVar2;
  FUN_0040d200(*param_3,(longlong)*param_4,0);
  *param_2 = local_e8[2];
  param_2[1] = local_e8[0];
  param_2[7] = local_e8[1];
  param_2[3] = local_78;
  param_2[0xf] = local_e8[3];
  param_2[0x13] = local_c8;
  param_2[0x14] = local_a0;
  param_2[0x15] = local_98;
  param_2[0x16] = local_90;
  param_2[0x17] = local_88;
  param_2[0x1c] = local_c0;
  param_2[0x1d] = local_b8;
  param_2[0x1e] = local_b0;
  param_2[0x20] = local_a8;
  param_2[0x25] = local_80;
  param_2[0x29] = local_68;
  param_2[0x2a] = local_60;
  param_2[0x24] = local_70;
  iVar1 = FUN_01690a40(auStack_108,param_2 + 2);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_01690a40(auStack_108,param_2 + 4);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_01690a40(auStack_108,param_2 + 5);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_01690a40(auStack_108,param_2 + 6);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_01690a40(auStack_108,param_2 + 8);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_01690a40(auStack_108,param_2 + 9);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_01690a40(auStack_108,param_2 + 10);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_01690a40(auStack_108,param_2 + 0xb);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_01690a40(auStack_108,param_2 + 0xc);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_01690a40(auStack_108,param_2 + 0xd);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_01690a40(auStack_108,param_2 + 0xe);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_01690a40(auStack_108,param_2 + 0x12);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_01690a40(auStack_108,param_2 + 0x21);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_01690a40(auStack_108,param_2 + 0x22);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_01690a40(auStack_108,param_2 + 0x23);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_01690a40(auStack_108,param_2 + 0x10);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_01690a40(auStack_108,param_2 + 0x11);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_01690a40(auStack_108,param_2 + 0x18);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_01690a40(auStack_108,param_2 + 0x19);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_01690a40(auStack_108,param_2 + 0x1a);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_01690a40(auStack_108,param_2 + 0x1b);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_01690a40(auStack_108,param_2 + 0x1f);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_01690a40(auStack_108,param_2 + 0x26);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_01690a40(auStack_108,param_2 + 0x27);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  iVar1 = FUN_01690a40(auStack_108,param_2 + 0x28);
  *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
  param_2[0x2b] = local_58;
  param_2[0x2c] = local_50;
  param_2[0x2d] = local_48;
  param_2[0x2e] = local_40;
  param_2[0x2f] = local_38;
  param_2[0x30] = local_30;
  return;
}

