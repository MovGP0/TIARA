/* Ghidra address: 00b3f580 */
/* Ghidra symbol: FUN_00b3f580 */


undefined1
FUN_00b3f580(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 param_5)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 local_res8 [4];
  undefined1 local_2f4 [90];
  undefined1 local_29a [258];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [88];
  undefined1 local_120 [88];
  undefined1 local_c8 [16];
  undefined1 local_b8;
  undefined1 local_b7 [39];
  undefined1 local_90;
  undefined1 local_8f;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78 [2];
  undefined1 local_68;
  undefined1 local_67 [39];
  undefined1 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_2;
  uStack_30 = param_2[1];
  puVar7 = local_78;
  for (lVar3 = 8; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar7 = *param_3;
    param_3 = param_3 + 1;
    puVar7 = puVar7 + 1;
  }
  local_88 = *param_4;
  uStack_80 = param_4[1];
  local_res8[0] = param_1;
  FUN_00414650(local_res8);
  FUN_00b3f3f0(local_res8[0],local_c8);
  FUN_00b3ee80(local_120);
  FUN_00b3eec0(local_120,local_c8,0x40);
  FUN_00b3f2c0(local_120,local_188);
  iVar4 = 0;
  iVar5 = 0;
  iVar2 = 5;
  FUN_00b3ee80(local_2f4);
  do {
    iVar6 = iVar2;
    if (0x40 - iVar4 < 5) {
      iVar6 = 0x40 - iVar4;
    }
    FUN_00409a70(local_188 + iVar5,local_c8 + iVar4,(longlong)iVar6);
    iVar4 = iVar4 + iVar6;
    if (iVar4 == 0x40) {
      FUN_00b3eec0(local_2f4,local_c8,0x40);
      iVar2 = 5 - iVar6;
      iVar4 = 0;
      iVar5 = iVar6;
    }
    else {
      iVar5 = 0;
      iVar2 = 5;
      FUN_00409a70(&local_38,local_c8 + iVar4,0x10);
      iVar4 = iVar4 + 0x10;
    }
  } while (iVar4 != 0x10);
  local_b8 = 0x80;
  FUN_0040d200(local_b7,0x2f,0);
  local_90 = 0x80;
  local_8f = 10;
  FUN_00b3eec0(local_2f4,local_c8,0x40);
  FUN_00b3f2c0(local_2f4,param_5);
  FUN_00b3f340(0,local_29a,param_5);
  FUN_00b3f1b0(local_78,0x10,local_29a);
  FUN_00b3f1b0(&local_88,0x10,local_29a);
  local_68 = 0x80;
  FUN_0040d200(local_67,0x2f,0);
  local_40 = 0x80;
  FUN_00b3ee80(local_178);
  FUN_00b3eec0(local_178,local_78,0x40);
  FUN_00b3f2c0(local_178,local_198);
  uVar1 = FUN_0043e2c0(local_198,&local_88,0x10);
  FUN_00414520(local_res8);
  return uVar1;
}

