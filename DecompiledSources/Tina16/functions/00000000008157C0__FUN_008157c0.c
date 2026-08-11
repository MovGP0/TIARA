/* Ghidra address: 008157c0 */
/* Ghidra symbol: FUN_008157c0 */


void FUN_008157c0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 *local_d0;
  undefined8 local_c0;
  undefined4 local_b4;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_9c;
  longlong local_98;
  ushort local_8a;
  longlong *local_88;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  int local_64;
  int local_60;
  undefined1 local_5c [12];
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_2c;
  
  local_d0 = auStack_108;
  local_50 = *param_2;
  local_48 = param_2[1];
  local_40 = param_2[2];
  uStack_38 = param_2[3];
  lVar5 = FUN_007e3880(local_48);
  if (lVar5 != 0) {
    local_80 = FUN_007e3880(local_48);
    if (*(int *)(param_1 + 8) == (int)local_50) {
      if (*(char *)(param_1 + 0xa8) == '\0') {
        if ((*(char *)(param_1 + 0xc2) == '\0') && (*(char *)(param_1 + 0x98) == '\0')) {
          local_50._0_5_ = CONCAT14(0xd,(int)local_50);
        }
        else {
          local_50._0_5_ = CONCAT14(0xc,(int)local_50);
        }
      }
      else {
        local_50._0_5_ = CONCAT14(0xe,(int)local_50);
      }
    }
    else if (*(char *)(local_48 + 0x81) == '\0') {
      local_50._0_5_ = CONCAT14(0xf,(int)local_50);
    }
    else {
      local_50._0_5_ = CONCAT14(0xc,(int)local_50);
    }
    if ((*(longlong *)(local_48 + 0x120) == 0) && (*(longlong *)(local_48 + 0x130) == 0)) {
      local_88 = (longlong *)FUN_00781840();
      (**(code **)(*local_88 + 0x158))(local_88,local_5c,local_50._4_1_);
      uVar6 = FUN_005ffa40(param_3);
      local_2c = thunk_FUN_03b57162(uVar6);
      uVar6 = FUN_005ffa40(param_3);
      local_e8 = 0;
      local_e0 = 0;
      FUN_00778dc0(local_88,uVar6,local_5c,&local_40);
      uVar6 = FUN_005ffa40(param_3);
      thunk_FUN_0402759f(uVar6,local_2c);
      local_74 = local_40;
      local_6c = uStack_38;
      if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0xb1) == '\x01') {
        local_6c._0_4_ = (int)uStack_38;
        local_6c._4_4_ = (undefined4)((ulonglong)uStack_38 >> 0x20);
        local_6c = CONCAT44(local_6c._4_4_,(int)local_6c + -5);
      }
      else {
        local_74._0_4_ = (int)local_40;
        local_74._4_4_ = (int)((ulonglong)local_40 >> 0x20);
        local_74 = CONCAT44(local_74._4_4_,(int)local_74 + 5);
      }
      if ((*(longlong *)(local_80 + 0xa0) != 0) && (-1 < *(int *)(local_48 + 0x88))) {
        lVar5 = FUN_00814f80(param_1);
        iVar2 = (**(code **)(**(longlong **)(lVar5 + 0xa0) + 0x90))(*(longlong **)(lVar5 + 0xa0));
        if (*(int *)(local_48 + 0x88) < iVar2) {
          if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0xb1) == '\x01') {
            local_60 = (int)local_6c - *(int *)(*(longlong *)(local_80 + 0xa0) + 0x94);
          }
          else {
            local_60 = (int)local_74;
          }
          iVar3 = FUN_004230c0(&local_74);
          iVar2 = *(int *)(*(longlong *)(local_80 + 0xa0) + 0x90);
          local_64 = (local_74._4_4_ + iVar3 / 2) - iVar2 / 2;
          lVar5 = FUN_00814f80(param_1,(longlong)iVar2 % 2 & 0xffffffff);
          uVar6 = FUN_007d56e0(*(undefined8 *)(lVar5 + 0xa0));
          uVar7 = FUN_005ffa40(param_3);
          local_e8 = CONCAT44(local_e8._4_4_,local_64);
          local_e0 = 1;
          thunk_FUN_04153868(uVar6,*(undefined4 *)(local_48 + 0x88),uVar7,local_60);
          if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0xb1) == '\x01') {
            local_6c = CONCAT44(local_6c._4_4_,
                                ((int)local_6c - *(int *)(*(longlong *)(local_80 + 0xa0) + 0x94)) +
                                -3);
          }
          else {
            local_74 = CONCAT44(local_74._4_4_,
                                (int)local_74 + *(int *)(*(longlong *)(local_80 + 0xa0) + 0x94) + 3)
            ;
          }
        }
      }
      cVar1 = FUN_007790b0(local_88,local_5c,2,&local_78);
      if (cVar1 != '\0') {
        FUN_005fc860(*(undefined8 *)(param_3 + 0x70),local_78);
      }
      if (((*(char *)(param_1 + 0xa8) == '\0') && (*(char *)(param_1 + 0x9a) == '\0')) ||
         (*(char *)(param_1 + 0x1c) == '\0')) {
        local_c0 = FUN_005ffa40(param_3);
        local_b0 = *(longlong *)(local_48 + 0x78);
        local_b4 = 0;
        if (local_b0 != 0) {
          local_b4 = *(undefined4 *)(local_b0 + -4);
        }
        uVar6 = FUN_00416740(*(undefined8 *)(local_48 + 0x78));
        uVar4 = FUN_006520b0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10),0x100024);
        local_e8 = CONCAT44(local_e8._4_4_,uVar4);
        thunk_FUN_041a24be(local_c0,uVar6,local_b4,&local_74);
      }
      else {
        local_a8 = FUN_005ffa40(param_3);
        local_98 = *(longlong *)(local_48 + 0x78);
        local_9c = 0;
        if (local_98 != 0) {
          local_9c = *(undefined4 *)(local_98 + -4);
        }
        uVar6 = FUN_00416740(*(undefined8 *)(local_48 + 0x78));
        uVar4 = FUN_006520b0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10),0x24);
        local_e8 = CONCAT44(local_e8._4_4_,uVar4);
        thunk_FUN_041a24be(local_a8,uVar6,local_9c,&local_74);
      }
    }
    else {
      uVar6 = FUN_005ffa40(param_3);
      local_2c = thunk_FUN_03b57162(uVar6);
      if (*(longlong *)(local_48 + 0x120) != 0) {
        if ((local_50._4_1_ == '\x0e') || (local_50._4_1_ == '\r')) {
          uVar8 = 1;
        }
        else {
          uVar8 = 0;
        }
        local_e8 = CONCAT71(local_e8._1_7_,uVar8);
        (**(code **)(local_48 + 0x120))
                  (*(undefined8 *)(local_48 + 0x128),local_48,param_3,&local_40);
      }
      if (*(longlong *)(local_48 + 0x130) != 0) {
        if (((*(char *)(param_1 + 0xa8) == '\0') && (*(char *)(param_1 + 0x9a) == '\0')) ||
           (*(char *)(param_1 + 0x1c) == '\0')) {
          local_8a = 0x100;
        }
        else {
          local_8a = 0;
        }
        if ((byte)(local_50._4_1_ - 0xdU) < 2) {
          local_8a = local_8a | 1;
        }
        else if (local_50._4_1_ == '\x0f') {
          local_8a = local_8a | 4;
        }
        local_e8 = CONCAT62(local_e8._2_6_,local_8a);
        (**(code **)(local_48 + 0x130))
                  (*(undefined8 *)(local_48 + 0x138),local_48,param_3,&local_40);
      }
      uVar6 = FUN_005ffa40(param_3);
      thunk_FUN_0402759f(uVar6,local_2c);
    }
  }
  return;
}

