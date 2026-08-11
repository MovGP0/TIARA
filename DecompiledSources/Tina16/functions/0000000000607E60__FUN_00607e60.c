/* Ghidra address: 00607e60 */
/* Ghidra symbol: FUN_00607e60 */


longlong FUN_00607e60(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                     longlong param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auStack_178 [32];
  longlong local_158;
  undefined8 *local_150;
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined1 local_120 [16];
  undefined1 *local_110;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  longlong local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [4];
  int local_cc;
  int local_c8;
  longlong local_b8;
  int local_b0;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  
  local_110 = auStack_178;
  local_58 = 0;
  if (((*(int *)(param_4 + 0x20) == 0) ||
      ((*(int *)(param_4 + 0x24) != 0 && (*(int *)(param_4 + 0x28) != 0)))) &&
     ((*(int *)(param_4 + 0x20) != 0 ||
      ((*(int *)(param_4 + 4) != 0 && (*(int *)(param_4 + 8) != 0)))))) {
    FUN_00607750(param_1);
    local_b0 = 0;
    if ((param_1 != 0) && (iVar3 = thunk_FUN_03d2c01a(param_1,0x68,local_d0), iVar3 < 0x20)) {
      FUN_005ffe50();
    }
    uVar5 = thunk_FUN_040ef593(0);
    local_60 = FUN_005fffe0(uVar5);
    uVar5 = thunk_FUN_04137b5f(local_60);
    local_40 = FUN_005fffe0(uVar5);
    if (*(uint *)(param_4 + 0x20) < 0x28) {
      if ((*(ushort *)(param_4 + 0x10) | *(ushort *)(param_4 + 0x12)) == 1) {
        local_158 = 0;
        uVar5 = thunk_FUN_03c9ff5e(*(undefined4 *)(param_4 + 4),*(undefined4 *)(param_4 + 8),1,1);
        local_58 = FUN_005fffe0(uVar5);
      }
      else {
        uVar5 = thunk_FUN_04181813(local_60,*(undefined4 *)(param_4 + 4),
                                   *(undefined4 *)(param_4 + 8));
        local_58 = FUN_005fffe0(uVar5);
      }
    }
    else {
      local_30 = (undefined8 *)FUN_004095c0(0x42c);
      *(undefined4 *)(param_4 + 0x20) = 0x28;
      *(undefined2 *)(param_4 + 0x2c) = 1;
      if (*(short *)(param_4 + 0x2e) == 0) {
        sVar1 = thunk_FUN_03e5bd07(local_60,0xc);
        sVar2 = thunk_FUN_03e5bd07(local_60,0xe);
        *(short *)(param_4 + 0x2e) = sVar1 * sVar2;
      }
      *local_30 = *(undefined8 *)(param_4 + 0x20);
      local_30[1] = *(undefined8 *)(param_4 + 0x28);
      local_30[2] = *(undefined8 *)(param_4 + 0x30);
      local_30[3] = *(undefined8 *)(param_4 + 0x38);
      local_30[4] = *(undefined8 *)(param_4 + 0x40);
      *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_4 + 0x24);
      *(undefined4 *)(param_4 + 8) = *(undefined4 *)(param_4 + 0x28);
      if (*(ushort *)(param_4 + 0x2e) < 9) {
        if ((*(short *)(param_4 + 0x2e) == 1) && ((param_1 == 0 || (local_b8 == 0)))) {
          *(undefined4 *)(local_30 + 5) = 0;
          *(undefined4 *)((longlong)local_30 + 0x2c) = 0xffffff;
        }
        else if (param_3 == 0) {
          if (param_1 != 0) {
            local_50 = thunk_FUN_041a19a1(local_40,param_1);
            if ((local_b0 == 0) || (local_b8 == 0)) {
              uVar6 = (int)*(uint *)(param_4 + 0x28) >> 0x1f;
              local_158 = 0;
              local_150 = local_30;
              local_148 = 0;
              thunk_FUN_0416e0b3(local_40,param_1,0,(*(uint *)(param_4 + 0x28) ^ uVar6) - uVar6);
            }
            else {
              uVar4 = thunk_FUN_041fe7d8(local_40,0,0x100,local_30 + 5);
              *(undefined4 *)(param_4 + 0x40) = uVar4;
            }
            thunk_FUN_041a19a1(local_40,local_50);
          }
        }
        else {
          FUN_00600c50(param_3,local_30 + 5,0xff);
        }
      }
      else if (((*(short *)(param_4 + 0x2e) == 0x10) || (*(short *)(param_4 + 0x2e) == 0x20)) &&
              ((*(uint *)(param_4 + 0x30) & 3) != 0)) {
        FUN_00607e10(param_4);
        FUN_00409a70(param_4 + 0x48,local_30 + 5,0xc);
      }
      local_158 = 0;
      local_150 = (undefined8 *)((ulonglong)local_150 & 0xffffffff00000000);
      uVar5 = thunk_FUN_041c0f30(local_60,local_30,0,&local_e0);
      local_58 = FUN_005fffe0(uVar5);
      if (local_e0 == 0) {
        FUN_005fff20();
      }
      if ((((param_1 != 0) && (local_cc == *(int *)(param_4 + 0x24))) &&
          (local_c8 == *(int *)(param_4 + 0x28))) && (8 < *(ushort *)(param_4 + 0x2e))) {
        uVar6 = (int)*(uint *)(param_4 + 0x28) >> 0x1f;
        local_158 = local_e0;
        local_150 = local_30;
        local_148 = 0;
        thunk_FUN_0416e0b3(local_40,param_1,0,(*(uint *)(param_4 + 0x28) ^ uVar6) - uVar6);
        FUN_00608780(0,local_110);
        FUN_00608830(0,local_110);
        return local_58;
      }
      FUN_004095f0(local_30);
    }
    FUN_005fffe0(local_58);
    uVar5 = thunk_FUN_041a19a1(local_40,local_58);
    local_50 = FUN_005fffe0(uVar5);
    local_48 = 0;
    local_d8 = 0;
    if (param_3 != 0) {
      local_48 = thunk_FUN_0418f5de(local_40,param_3,0);
      thunk_FUN_03a5de49(local_40);
    }
    if (param_5 == 0) {
      local_158 = CONCAT44(local_158._4_4_,*(undefined4 *)(param_4 + 8));
      local_150 = (undefined8 *)CONCAT44(local_150._4_4_,0xff0062);
      thunk_FUN_04161b78(local_40,0,0,*(undefined4 *)(param_4 + 4));
    }
    else {
      local_158 = CONCAT44(local_158._4_4_,*(undefined4 *)(param_4 + 8));
      FUN_004238d0(local_120,0,0,*(undefined4 *)(param_4 + 4));
      uVar5 = FUN_005fdb10(*(undefined8 *)(param_5 + 0x80));
      thunk_FUN_03984819(local_40,local_120,uVar5);
      uVar4 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(param_5 + 0x70) + 0x28));
      thunk_FUN_0412a071(local_40,uVar4);
      local_f0 = *(longlong *)(param_5 + 0x80);
      uVar4 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(local_f0 + 0x18) + 0x28));
      thunk_FUN_03e3a7dc(local_40,uVar4);
      if ((*(short *)(param_4 + 0x2e) == 1) && (*(longlong *)(param_4 + 0x18) != 0)) {
        local_e8 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(param_5 + 0x70) + 0x28));
        local_f8 = *(longlong *)(param_5 + 0x80);
        local_e4 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(local_f8 + 0x18) + 0x28));
        thunk_FUN_039d79c0(local_40,0,2,&local_e8);
      }
    }
    if (param_1 != 0) {
      uVar5 = thunk_FUN_04137b5f(local_60);
      local_38 = (undefined8 *)FUN_005fffe0(uVar5);
      uVar5 = thunk_FUN_041a19a1(local_38,param_1);
      local_68 = FUN_005fffe0(uVar5);
      if (param_2 != 0) {
        local_d8 = thunk_FUN_0418f5de(local_38,param_2,0);
        thunk_FUN_03a5de49(local_38);
      }
      if (param_5 != 0) {
        uVar4 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(param_5 + 0x70) + 0x28));
        thunk_FUN_0412a071(local_38,uVar4);
        local_100 = *(longlong *)(param_5 + 0x80);
        uVar4 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(local_100 + 0x18) + 0x28));
        thunk_FUN_03e3a7dc(local_38,uVar4);
      }
      local_158 = CONCAT44(local_158._4_4_,*(undefined4 *)(param_4 + 8));
      local_150 = local_38;
      local_148 = 0;
      local_140 = 0;
      local_138 = 0xcc0020;
      thunk_FUN_0415fcd2(local_40,0,0,*(undefined4 *)(param_4 + 4));
      if (param_2 != 0) {
        thunk_FUN_0418f5de(local_38,local_d8,0xffffffff);
      }
      uVar5 = thunk_FUN_041a19a1(local_38,local_68);
      FUN_005fffe0(uVar5);
      thunk_FUN_041a2fd8(local_38);
    }
    if (param_3 != 0) {
      thunk_FUN_0418f5de(local_40,local_48,0xffffffff);
    }
    thunk_FUN_041a19a1(local_40,local_50);
    thunk_FUN_041a2fd8(local_40);
    thunk_FUN_041a9b5c(0,local_60);
    if (local_58 != 0) {
      thunk_FUN_03d2c01a(local_58,0x68,param_4);
    }
  }
  return local_58;
}

