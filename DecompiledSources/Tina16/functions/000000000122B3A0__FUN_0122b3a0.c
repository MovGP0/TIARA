/* Ghidra address: 0122b3a0 */
/* Ghidra symbol: FUN_0122b3a0 */


void FUN_0122b3a0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_138 [256];
  undefined8 local_38;
  undefined *local_30 [4];
  
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_38 = 0;
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b0),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b8),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x940),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x700),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x750),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x838),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x758),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7a8),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6c0),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6c8),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6d0),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6d8),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e0),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x820),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x828),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f0),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x818),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f8),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x830),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x708),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x710),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x718),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x720),0);
  FUN_005fdab0(*(undefined8 *)(param_2 + 0x80),DAT_02107718);
  FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),0);
  local_30[0] = PTR_DAT_02004b40 + 0x15e0;
  *(undefined4 *)PTR_DAT_02003d58 = 0x3c;
  *(undefined4 *)PTR_DAT_020037d0 = 0x1e;
  *(undefined4 *)PTR_DAT_02002598 = 0x14;
  *(undefined4 *)PTR_DAT_02001f40 = 0x32;
  *(int *)PTR_DAT_02001888 = *(int *)PTR_DAT_02003d58 + *(int *)PTR_DAT_02002598;
  *(int *)PTR_DAT_02001228 = *(int *)PTR_DAT_020037d0 + *(int *)PTR_DAT_02001f40;
  *(undefined4 *)PTR_DAT_02002380 = *(undefined4 *)(*(longlong *)(param_1 + 0x738) + 0x98);
  *(undefined4 *)PTR_DAT_02002270 = *(undefined4 *)(*(longlong *)(param_1 + 0x738) + 0x9c);
  uVar1 = FUN_01175e90(PTR_DAT_020038a0);
  *(undefined4 *)PTR_DAT_02001520 = uVar1;
  if (*(int *)PTR_DAT_02001520 == 0) {
    FUN_01176fa0(*(undefined8 *)PTR_DAT_020038a0,PTR_DAT_020042c8,*(undefined8 *)(param_1 + 0x738));
    if (*(int *)PTR_DAT_02001520 == 0) {
      FUN_01176af0(PTR_DAT_020038a0,PTR_DAT_020042c8,0);
    }
    if (*(int *)PTR_DAT_02001520 == 0) {
      FUN_011774c0(PTR_DAT_020038a0,PTR_DAT_020042c8,0,L"Specifications");
    }
    FUN_00414ad0(PTR_DAT_02004b40 + 0x40,&DAT_0122d208);
    FUN_011777c0(local_30,param_2,1);
    FUN_01177d80(PTR_DAT_020042c8,param_2);
    FUN_005fce30(*(undefined8 *)(DAT_021076c0 + 0x70),10);
    FUN_00414ad0(PTR_DAT_020051c8,L"Gain");
    if (*(int *)(PTR_DAT_02001d30 + 0xd4) == 0) {
      FUN_00416ad0(PTR_DAT_020051c8,L" (dB)");
    }
    uVar3 = FUN_00416740(*(undefined8 *)PTR_DAT_020051c8);
    FUN_012286f0(5,200,uVar3);
    FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),0);
    FUN_005fce30(*(undefined8 *)(param_2 + 0x70),8);
    FUN_005fdab0(*(undefined8 *)(param_2 + 0x80),0xffffff);
    FUN_005fc860(*(undefined8 *)(param_2 + 0x70),0xff);
    FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),0xff);
    if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x4c) {
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b8),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x700),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x750),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x758),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x940),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b0),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x838),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7a8),1);
      uVar3 = *(undefined8 *)(PTR_DAT_020040b8 + 0x18);
      FUN_0040fb60(local_138,uVar3,8,2);
      FUN_004169a0(&local_38,local_138);
      FUN_0122a290(&local_38,*(undefined8 *)PTR_DAT_020052e0,*(undefined8 *)PTR_DAT_02001b48);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x940),uVar3);
      FUN_0043ea00(&local_140,local_38);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x940),local_140);
      FUN_0040fb60(local_138,*(undefined8 *)(PTR_DAT_020040b8 + 0x10),8,2);
      FUN_004169a0(&local_38,local_138);
      FUN_0122a290(&local_38,*(undefined8 *)PTR_DAT_020052e0,*(undefined8 *)PTR_DAT_02001b48);
      FUN_0043ea00(&local_148,local_38);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),local_148);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x838),*(undefined8 *)PTR_DAT_020040b8);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x7a8),*(undefined8 *)(PTR_DAT_020040b8 + 8));
      *(int *)PTR_DAT_02003d50 = *(int *)PTR_DAT_02003d58 + 1;
      iVar2 = FUN_01229f20(*(undefined8 *)PTR_DAT_020040b8);
      *(int *)PTR_DAT_02004040 = *(int *)PTR_DAT_02003d58 + iVar2;
      iVar2 = FUN_01229f20(*(undefined8 *)(PTR_DAT_020040b8 + 8));
      *(int *)PTR_DAT_02003528 = *(int *)PTR_DAT_02003d58 + iVar2;
      *(int *)PTR_DAT_02002e50 =
           (*(int *)PTR_DAT_02003d58 + *(int *)(*(longlong *)(param_1 + 0x738) + 0x98)) -
           *(int *)PTR_DAT_02001888;
      *(int *)PTR_DAT_020037c8 = *(int *)PTR_DAT_020037d0 + 1;
      iVar2 = FUN_01229eb0(*(undefined8 *)(PTR_DAT_020040b8 + 0x10));
      *(int *)PTR_DAT_02003a80 = *(int *)PTR_DAT_020037d0 + iVar2;
      iVar2 = FUN_01229eb0(*(undefined8 *)(PTR_DAT_020040b8 + 0x18));
      *(int *)PTR_DAT_02005a18 = *(int *)PTR_DAT_020037d0 + iVar2;
      *(int *)PTR_DAT_02002ef8 =
           (*(int *)PTR_DAT_020037d0 + *(int *)(*(longlong *)(param_1 + 0x738) + 0x9c)) -
           *(int *)PTR_DAT_02001228;
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x6b0),DAT_021076c8 + -0x32);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x6b0),DAT_021076cc + 0x14);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x6b8),DAT_021076c8 + -0x32);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x6b8),DAT_021076cc + 5);
      if (*(int *)PTR_DAT_02002ef8 < *(int *)PTR_DAT_02005a18) {
        iVar2 = *(int *)PTR_DAT_02002ef8;
      }
      else {
        iVar2 = *(int *)PTR_DAT_02005a18;
      }
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x940),DAT_021076d0 + 10);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x940),DAT_021076cc + iVar2 + -8);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x700),DAT_021076d0 + 10);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x700),DAT_021076cc + iVar2 + -8 + -0xf);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x750),DAT_021076dc);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x838),DAT_021076dc + 0x23);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x750),DAT_021076d4 + 0x1a);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x838),DAT_021076d4 + 0x18);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x758),DAT_021076e0);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x7a8),DAT_021076e0 + 0x23);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x758),DAT_021076d4 + 0x1a);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x7a8),DAT_021076d4 + 0x18);
    }
    if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x48) {
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b8),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x700),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x750),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x758),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b0),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x940),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x838),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7a8),1);
      FUN_0040fb60(local_138,*(undefined8 *)(PTR_DAT_020040b8 + 0x38),8,2);
      FUN_004169a0(&local_38,local_138);
      FUN_0122a290(&local_38,*(undefined8 *)PTR_DAT_020052e0,*(undefined8 *)PTR_DAT_02001b48);
      FUN_0043ea00(&local_150,local_38);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),local_150);
      uVar3 = *(undefined8 *)(PTR_DAT_020040b8 + 0x30);
      FUN_0040fb60(local_138,uVar3,8,2);
      FUN_004169a0(&local_38,local_138);
      FUN_0122a290(&local_38,*(undefined8 *)PTR_DAT_020052e0,*(undefined8 *)PTR_DAT_02001b48);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x940),uVar3);
      FUN_0043ea00(&local_158,local_38);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x940),local_158);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x838),*(undefined8 *)(PTR_DAT_020040b8 + 0x28));
      FUN_00b90440(*(undefined8 *)(param_1 + 0x7a8),*(undefined8 *)(PTR_DAT_020040b8 + 0x20));
      *(int *)PTR_DAT_02003d50 = *(int *)PTR_DAT_02003d58 + 1;
      iVar2 = FUN_01229f20(*(undefined8 *)(PTR_DAT_020040b8 + 0x20));
      *(int *)PTR_DAT_02004040 = *(int *)PTR_DAT_02003d58 + iVar2;
      iVar2 = FUN_01229f20(*(undefined8 *)(PTR_DAT_020040b8 + 0x28));
      *(int *)PTR_DAT_02003528 = *(int *)PTR_DAT_02003d58 + iVar2;
      *(int *)PTR_DAT_02002e50 =
           (*(int *)PTR_DAT_02003d58 + *(int *)(*(longlong *)(param_1 + 0x738) + 0x98)) -
           *(int *)PTR_DAT_02001888;
      *(int *)PTR_DAT_020037c8 = *(int *)PTR_DAT_020037d0 + 1;
      iVar2 = FUN_01229eb0(*(undefined8 *)(PTR_DAT_020040b8 + 0x30));
      *(int *)PTR_DAT_02003a80 = *(int *)PTR_DAT_020037d0 + iVar2;
      iVar2 = FUN_01229eb0(*(undefined8 *)(PTR_DAT_020040b8 + 0x38));
      *(int *)PTR_DAT_02005a18 = *(int *)PTR_DAT_020037d0 + iVar2;
      *(int *)PTR_DAT_02002ef8 =
           (*(int *)PTR_DAT_020037d0 + *(int *)(*(longlong *)(param_1 + 0x738) + 0x9c)) -
           *(int *)PTR_DAT_02001228;
      if (*(int *)PTR_DAT_02002ef8 < *(int *)PTR_DAT_02003a80) {
        iVar2 = *(int *)PTR_DAT_02002ef8;
      }
      else {
        iVar2 = *(int *)PTR_DAT_02003a80;
      }
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x940),DAT_021076c8 + -0x32);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x940),DAT_021076cc + iVar2 + -8);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x700),DAT_021076c8 + -0x32);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x700),DAT_021076cc + iVar2 + -8 + -0xf);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x6b0),DAT_021076d0 + 10);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x6b0),DAT_021076cc + 0x14);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x6b8),DAT_021076d0 + 10);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x6b8),DAT_021076cc + 5);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x750),DAT_021076e0);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x838),DAT_021076e0 + 0x23);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x750),DAT_021076d4 + 0x1a);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x838),DAT_021076d4 + 0x18);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x758),DAT_021076dc);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x7a8),DAT_021076dc + 0x23);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x758),DAT_021076d4 + 0x1a);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x7a8),DAT_021076d4 + 0x18);
    }
    if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x50) {
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b8),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6c0),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6d0),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e0),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f0),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f8),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b0),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6c8),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6d8),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x820),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x828),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x818),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x830),1);
      FUN_0040fb60(local_138,*(undefined8 *)(PTR_DAT_020040b8 + 0x68),8,2);
      FUN_004169a0(&local_38,local_138);
      FUN_0122a290(&local_38,*(undefined8 *)PTR_DAT_020052e0,*(undefined8 *)PTR_DAT_02001b48);
      FUN_0043ea00(&local_160,local_38);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),local_160);
      FUN_0040fb60(local_138,*(undefined8 *)(PTR_DAT_020040b8 + 0x60),8,2);
      FUN_004169a0(&local_38,local_138);
      FUN_0122a290(&local_38,*(undefined8 *)PTR_DAT_020052e0,*(undefined8 *)PTR_DAT_02001b48);
      FUN_0043ea00(&local_168,local_38);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),local_168);
      FUN_0040fb60(local_138,*(undefined8 *)(PTR_DAT_020040b8 + 0x70),8,2);
      FUN_004169a0(&local_38,local_138);
      FUN_0122a290(&local_38,*(undefined8 *)PTR_DAT_020052e0,*(undefined8 *)PTR_DAT_02001b48);
      FUN_0043ea00(&local_170,local_38);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),local_170);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x820),*(undefined8 *)(PTR_DAT_020040b8 + 0x48));
      FUN_00b90440(*(undefined8 *)(param_1 + 0x828),*(undefined8 *)(PTR_DAT_020040b8 + 0x50));
      FUN_00b90440(*(undefined8 *)(param_1 + 0x818),*(undefined8 *)(PTR_DAT_020040b8 + 0x40));
      FUN_00b90440(*(undefined8 *)(param_1 + 0x830),*(undefined8 *)(PTR_DAT_020040b8 + 0x58));
      *(int *)PTR_DAT_02003d50 = *(int *)PTR_DAT_02003d58 + 1;
      iVar2 = FUN_01229f20(*(undefined8 *)(PTR_DAT_020040b8 + 0x40));
      *(int *)PTR_DAT_02004040 = *(int *)PTR_DAT_02003d58 + iVar2;
      iVar2 = FUN_01229f20(*(undefined8 *)(PTR_DAT_020040b8 + 0x48));
      *(int *)PTR_DAT_02002748 = *(int *)PTR_DAT_02003d58 + iVar2;
      iVar2 = FUN_01229f20(*(undefined8 *)(PTR_DAT_020040b8 + 0x50));
      *(int *)PTR_DAT_02001398 = *(int *)PTR_DAT_02003d58 + iVar2;
      iVar2 = FUN_01229f20(*(undefined8 *)(PTR_DAT_020040b8 + 0x58));
      *(int *)PTR_DAT_02003528 = *(int *)PTR_DAT_02003d58 + iVar2;
      *(int *)PTR_DAT_02002e50 =
           (*(int *)PTR_DAT_02003d58 + *(int *)(*(longlong *)(param_1 + 0x738) + 0x98)) -
           *(int *)PTR_DAT_02001888;
      *(int *)PTR_DAT_020037c8 = *(int *)PTR_DAT_020037d0 + 1;
      iVar2 = FUN_01229eb0(*(undefined8 *)(PTR_DAT_020040b8 + 0x60));
      *(int *)PTR_DAT_02003a80 = *(int *)PTR_DAT_020037d0 + iVar2;
      iVar2 = FUN_01229eb0(*(undefined8 *)(PTR_DAT_020040b8 + 0x68));
      *(int *)PTR_DAT_020020a8 = *(int *)PTR_DAT_020037d0 + iVar2;
      iVar2 = FUN_01229eb0(*(undefined8 *)(PTR_DAT_020040b8 + 0x70));
      *(int *)PTR_DAT_02005a18 = *(int *)PTR_DAT_020037d0 + iVar2;
      *(int *)PTR_DAT_02002ef8 =
           (*(int *)PTR_DAT_020037d0 + *(int *)(*(longlong *)(param_1 + 0x738) + 0x9c)) -
           *(int *)PTR_DAT_02001228;
      if (*(int *)PTR_DAT_02002ef8 < *(int *)PTR_DAT_02003a80) {
        iVar2 = *(int *)PTR_DAT_02002ef8;
      }
      else {
        iVar2 = *(int *)PTR_DAT_02003a80;
      }
      iVar2 = iVar2 + -8;
      if (*(int *)PTR_DAT_02003a80 + -0x1c < *(int *)PTR_DAT_02002a00) {
        iVar2 = *(int *)PTR_DAT_02002a00 + 0x12;
      }
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x6c8),DAT_021076c8 + -0x32);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x6c8),DAT_021076cc + iVar2);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x6c0),DAT_021076c8 + -0x32);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x6c0),DAT_021076cc + iVar2 + -0xf);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x6b0),DAT_021076c8 + -0x32);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x6b0),DAT_021076cc + 0x14);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x6b8),DAT_021076c8 + -0x32);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x6b8),DAT_021076cc + 5);
      if (*(int *)PTR_DAT_02002ef8 < *(int *)PTR_DAT_02005a18) {
        iVar2 = *(int *)PTR_DAT_02002ef8;
      }
      else {
        iVar2 = *(int *)PTR_DAT_02005a18;
      }
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x6d8),DAT_021076d0 + 10);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x6d8),DAT_021076cc + iVar2 + -8);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x6d0),DAT_021076d0 + 10);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x6d0),DAT_021076cc + iVar2 + -8 + -0xf);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x6f0),DAT_021076d8);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x818),DAT_021076d8 + 0x25);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x6f0),DAT_021076d4 + 0x1a);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x818),DAT_021076d4 + 0x18);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x6e0),DAT_021076dc);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x820),DAT_021076dc + 0x27);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x6e0),DAT_021076d4 + 0x1a);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x820),DAT_021076d4 + 0x18);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x6e8),DAT_021076e0);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x828),DAT_021076e0 + 0x27);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x6e8),DAT_021076d4 + 0x1a);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x828),DAT_021076d4 + 0x18);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x6f8),DAT_021076e4);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x830),DAT_021076e4 + 0x25);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x6f8),DAT_021076d4 + 0x1a);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x830),DAT_021076d4 + 0x18);
    }
    if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53) {
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x700),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e0),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f0),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f8),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x708),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x718),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x940),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x820),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x828),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x818),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x830),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x710),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x720),1);
      uVar3 = *(undefined8 *)(PTR_DAT_020040b8 + 0xa0);
      FUN_0040fb60(local_138,uVar3,8,2);
      FUN_004169a0(&local_38,local_138);
      FUN_0122a290(&local_38,*(undefined8 *)PTR_DAT_020052e0,*(undefined8 *)PTR_DAT_02001b48);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x940),uVar3);
      FUN_0043ea00(&local_178,local_38);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x940),local_178);
      FUN_0040fb60(local_138,*(undefined8 *)(PTR_DAT_020040b8 + 0x98),8,2);
      FUN_004169a0(&local_38,local_138);
      FUN_0122a290(&local_38,*(undefined8 *)PTR_DAT_020052e0,*(undefined8 *)PTR_DAT_02001b48);
      FUN_0043ea00(&local_180,local_38);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x710),local_180);
      FUN_0040fb60(local_138,*(undefined8 *)(PTR_DAT_020040b8 + 0xa8),8,2);
      FUN_004169a0(&local_38,local_138);
      FUN_0122a290(&local_38,*(undefined8 *)PTR_DAT_020052e0,*(undefined8 *)PTR_DAT_02001b48);
      FUN_0043ea00(&local_188,local_38);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x720),local_188);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x820),*(undefined8 *)(PTR_DAT_020040b8 + 0x78));
      FUN_00b90440(*(undefined8 *)(param_1 + 0x828),*(undefined8 *)(PTR_DAT_020040b8 + 0x90));
      FUN_00b90440(*(undefined8 *)(param_1 + 0x818),*(undefined8 *)(PTR_DAT_020040b8 + 0x80));
      FUN_00b90440(*(undefined8 *)(param_1 + 0x830),*(undefined8 *)(PTR_DAT_020040b8 + 0x88));
      *(int *)PTR_DAT_02003d50 = *(int *)PTR_DAT_02003d58 + 1;
      iVar2 = FUN_01229f20(*(undefined8 *)(PTR_DAT_020040b8 + 0x78));
      *(int *)PTR_DAT_02004040 = *(int *)PTR_DAT_02003d58 + iVar2;
      iVar2 = FUN_01229f20(*(undefined8 *)(PTR_DAT_020040b8 + 0x80));
      *(int *)PTR_DAT_02002748 = *(int *)PTR_DAT_02003d58 + iVar2;
      iVar2 = FUN_01229f20(*(undefined8 *)(PTR_DAT_020040b8 + 0x88));
      *(int *)PTR_DAT_02001398 = *(int *)PTR_DAT_02003d58 + iVar2;
      iVar2 = FUN_01229f20(*(undefined8 *)(PTR_DAT_020040b8 + 0x90));
      *(int *)PTR_DAT_02003528 = *(int *)PTR_DAT_02003d58 + iVar2;
      *(int *)PTR_DAT_02002e50 =
           (*(int *)PTR_DAT_02003d58 + *(int *)(*(longlong *)(param_1 + 0x738) + 0x98)) -
           *(int *)PTR_DAT_02001888;
      *(int *)PTR_DAT_020037c8 = *(int *)PTR_DAT_020037d0 + 1;
      iVar2 = FUN_01229eb0(*(undefined8 *)(PTR_DAT_020040b8 + 0x98));
      *(int *)PTR_DAT_02003a80 = *(int *)PTR_DAT_020037d0 + iVar2;
      iVar2 = FUN_01229eb0(*(undefined8 *)(PTR_DAT_020040b8 + 0xa0));
      *(int *)PTR_DAT_020020a8 = *(int *)PTR_DAT_020037d0 + iVar2;
      iVar2 = FUN_01229eb0(*(undefined8 *)(PTR_DAT_020040b8 + 0xa8));
      *(int *)PTR_DAT_02005a18 = *(int *)PTR_DAT_020037d0 + iVar2;
      *(int *)PTR_DAT_02002ef8 =
           (*(int *)PTR_DAT_020037d0 + *(int *)(*(longlong *)(param_1 + 0x738) + 0x9c)) -
           *(int *)PTR_DAT_02001228;
      if (*(int *)PTR_DAT_02002ef8 < *(int *)PTR_DAT_020020a8) {
        iVar2 = *(int *)PTR_DAT_02002ef8;
      }
      else {
        iVar2 = *(int *)PTR_DAT_020020a8;
      }
      iVar2 = iVar2 + -8;
      if (*(int *)PTR_DAT_020020a8 + -0x1c < *(int *)PTR_DAT_02002a00) {
        iVar2 = *(int *)PTR_DAT_02002a00 + 0x12;
      }
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x940),DAT_021076c8 + -0x32);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x940),DAT_021076cc + iVar2);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x700),DAT_021076c8 + -0x32);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x700),DAT_021076cc + iVar2 + -0xf);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x710),DAT_021076c8 + -0x32);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x710),DAT_021076cc + 0x14);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x708),DAT_021076c8 + -0x32);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x708),DAT_021076cc + 5);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x720),DAT_021076d0 + 10);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x720),DAT_021076cc + 0x14);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x718),DAT_021076d0 + 10);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x718),DAT_021076cc + 5);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x6e0),DAT_021076d8);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x820),DAT_021076d8 + 0x27);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x6e0),DAT_021076d4 + 0x1a);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x820),DAT_021076d4 + 0x18);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x6f0),DAT_021076dc);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x818),DAT_021076dc + 0x25);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x6f0),DAT_021076d4 + 0x1a);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x818),DAT_021076d4 + 0x18);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x6f8),DAT_021076e0);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x830),DAT_021076e0 + 0x25);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x6f8),DAT_021076d4 + 0x1a);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x830),DAT_021076d4 + 0x18);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x6e8),DAT_021076e4);
      FUN_0064cb30(*(undefined8 *)(param_1 + 0x828),DAT_021076e4 + 0x27);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x6e8),DAT_021076d4 + 0x1a);
      FUN_0064cb90(*(undefined8 *)(param_1 + 0x828),DAT_021076d4 + 0x18);
    }
    FUN_0122a880(param_1,DAT_021076a8,0);
    FUN_01232af0(param_1,DAT_021076a8,0);
  }
  FUN_00414560(&local_188,10);
  FUN_00414480(&local_38);
  return;
}

