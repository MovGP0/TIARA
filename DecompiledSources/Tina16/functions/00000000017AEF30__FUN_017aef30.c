/* Ghidra address: 017aef30 */
/* Ghidra symbol: FUN_017aef30 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017aef30(longlong param_1,int param_2,int param_3,char param_4,char param_5,char param_6,
                 undefined8 param_7,double param_8,undefined4 param_9,int param_10,
                 undefined4 param_11,undefined1 param_12,char param_13,undefined8 param_14,
                 longlong param_15)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int local_320;
  int local_31c;
  int local_318;
  int local_314;
  int local_310;
  int local_30c;
  int local_308;
  int local_304;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined1 local_2b4 [8];
  int local_2ac;
  int local_2a4;
  undefined8 local_278;
  byte abStack_26c [51];
  byte local_239;
  undefined1 local_238 [512];
  undefined8 local_38;
  undefined8 local_30;
  
  local_2f0 = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2c0 = 0;
  local_278 = 0;
  FUN_00414610(param_14);
  FUN_00414610(param_15);
  if (param_15 != 0) {
    FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x78),param_9);
    uVar7 = FUN_005ffa40(*(undefined8 *)(param_1 + 8));
    uVar1 = FUN_005fbf20(param_9);
    thunk_FUN_0412a071(uVar7,uVar1);
    local_308 = DAT_01fa23a8 * param_2;
    local_304 = DAT_01fa23ac * param_3;
    uVar7 = thunk_FUN_040ef593(0);
    uVar1 = FUN_0040c770((double)(param_10 * DAT_01fa23a8));
    iVar2 = thunk_FUN_03f3ed25(uVar1,0x60,0x48);
    thunk_FUN_041a9b5c(0,uVar7);
    uVar1 = FUN_0040c770((double)-iVar2 * param_8);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    *(undefined4 *)(param_1 + 0x30) = param_11;
    *(undefined1 *)(param_1 + 0x34) = param_12;
    FUN_00442620(param_1 + 0x3c,param_14);
    if ((param_6 == '\x03') || (param_6 == '\x01')) {
      *(undefined4 *)(param_1 + 0x28) = 900;
    }
    else {
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    uVar7 = thunk_FUN_041a15ee(param_1 + 0x20);
    uVar8 = FUN_005ffa40(*(undefined8 *)(param_1 + 8));
    uVar7 = thunk_FUN_041a19a1(uVar8,uVar7);
    FUN_00414b50(&local_278,param_15);
    FUN_017aedf0(param_15,abStack_26c + 1,&local_239);
    FUN_017aeed0(&param_15);
    FUN_00442620(local_238,param_15);
    uVar8 = FUN_005ffa40(*(undefined8 *)(param_1 + 8));
    uVar1 = 0;
    if (param_15 != 0) {
      uVar1 = *(undefined4 *)(param_15 + -4);
    }
    FUN_00416830(&local_2c0,local_238,0x100);
    FUN_00428aa0(uVar8,local_2c0,uVar1,&local_30);
    local_38 = local_30;
    _DAT_021100bc = local_30;
    uVar8 = FUN_005ffa40(*(undefined8 *)(param_1 + 8));
    thunk_FUN_04172119(uVar8,local_2b4);
    if (param_6 == '\0') {
      if (param_4 == '\x01') {
        local_308 = local_308 - (int)local_38 / 2;
      }
      else if (param_4 == '\x02') {
        local_308 = local_308 - (int)local_38;
      }
      if (param_5 == '\x01') {
        local_304 = local_304 - local_38._4_4_ / 2;
      }
      else if (param_5 == '\x02') {
        local_304 = local_304 - ((local_38._4_4_ - local_2ac) - local_2a4);
      }
      local_318 = local_308;
      local_310 = local_308 + (int)local_38;
      local_314 = local_304;
      local_30c = local_304 + local_38._4_4_;
    }
    else if (param_6 == '\x01') {
      if (param_4 == '\0') {
        local_304 = local_304 + (int)local_38;
      }
      else if (param_4 == '\x01') {
        local_304 = local_304 + (int)local_38 / 2;
      }
      if (param_5 == '\0') {
        local_308 = local_308 - local_38._4_4_;
      }
      else if (param_5 == '\x01') {
        local_308 = local_308 - local_38._4_4_ / 2;
      }
      local_318 = local_308;
      local_310 = local_308 + local_38._4_4_;
      local_314 = local_304 - (int)local_38;
      local_30c = local_304;
    }
    else if (param_6 == '\x02') {
      if (param_4 == '\0') {
        local_308 = local_308 - (int)local_38;
      }
      else if (param_4 == '\x01') {
        local_308 = local_308 - (int)local_38 / 2;
      }
      if (param_5 == '\0') {
        local_304 = local_304 - local_38._4_4_;
      }
      else if (param_5 == '\x01') {
        local_304 = local_304 - local_38._4_4_ / 2;
      }
      local_318 = local_308;
      local_310 = local_308 + (int)local_38;
      local_314 = local_304;
      local_30c = local_304 + local_38._4_4_;
    }
    else if (param_6 == '\x03') {
      if (param_4 == '\x01') {
        local_304 = local_304 + (int)local_38 / 2;
      }
      else if (param_4 == '\x02') {
        local_304 = local_304 + (int)local_38;
      }
      if (param_5 == '\x01') {
        local_308 = local_308 - local_38._4_4_ / 2;
      }
      else if (param_5 == '\x02') {
        local_308 = local_308 - ((local_38._4_4_ - local_2ac) - local_2a4);
      }
      local_318 = local_308;
      local_310 = local_308 + local_38._4_4_;
      local_314 = local_304 - (int)local_38;
      local_30c = local_304;
    }
    uVar8 = FUN_005ffa40(*(undefined8 *)(param_1 + 8));
    uVar1 = thunk_FUN_03b994b9(uVar8,1);
    uVar3 = FUN_0040c770((double)local_318 / (double)DAT_01fa23a8);
    uVar4 = FUN_0040c770((double)local_314 / (double)DAT_01fa23a8);
    uVar5 = FUN_0040c770((double)local_310 / (double)DAT_01fa23a8);
    uVar6 = FUN_0040c770((double)local_30c / (double)DAT_01fa23a8);
    FUN_00498350(&local_2d0,uVar3,uVar4,uVar5,uVar6);
    DAT_021100c4 = local_2d0;
    DAT_021100cc = uStack_2c8;
    if (param_13 == '\0') {
      FUN_005fd640(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x78),4);
      uVar8 = FUN_005ffa40(*(undefined8 *)(param_1 + 8));
      uVar3 = 0;
      if (param_15 != 0) {
        uVar3 = *(undefined4 *)(param_15 + -4);
      }
      thunk_FUN_04193d0c(uVar8,local_308,local_304,local_238,uVar3);
      if ((local_239 != 0) && ((uint)local_239 % 2 == 0)) {
        local_2ac = 0;
        for (iVar2 = 1; iVar2 <= (int)(uint)local_239; iVar2 = iVar2 + 2) {
          FUN_00416dc0(&local_2d8,param_15,1,abStack_26c[iVar2] - 1);
          FUN_00442620(local_238,local_2d8);
          uVar8 = FUN_005ffa40(*(undefined8 *)(param_1 + 8));
          FUN_00416830(&local_2e0,local_238,0x100);
          FUN_00428aa0(uVar8,local_2e0,abStack_26c[iVar2] - 1,&local_30);
          local_38 = local_30;
          uVar8 = local_38;
          if ((int)(abStack_26c[iVar2] - 1) < 1) {
            if (param_6 == '\0') {
LAB_017af775:
              local_320 = local_308;
              local_31c = local_304 - local_2ac;
            }
            else {
              if (param_6 != '\x01') {
                if (param_6 == '\x02') goto LAB_017af775;
                if (param_6 != '\x03') goto LAB_017af79b;
              }
              local_320 = local_308 - local_2ac;
              local_31c = local_304;
            }
          }
          else {
            local_38._0_4_ = (int)local_30;
            if (param_6 == '\0') {
LAB_017af71d:
              local_320 = local_308 + (int)local_38;
              local_31c = local_304 - local_2ac;
            }
            else if (param_6 == '\x01') {
LAB_017af737:
              local_320 = local_308 - local_2ac;
              local_31c = local_304 - (int)local_38;
            }
            else {
              if (param_6 == '\x02') goto LAB_017af71d;
              if (param_6 == '\x03') goto LAB_017af737;
            }
          }
LAB_017af79b:
          local_38 = uVar8;
          uVar8 = FUN_005ffa40(*(undefined8 *)(param_1 + 8));
          thunk_FUN_041a2b10(uVar8,local_320,local_31c,0);
          FUN_00416dc0(&local_2e8,param_15,1,abStack_26c[iVar2 + 1]);
          FUN_00442620(local_238,local_2e8);
          uVar8 = FUN_005ffa40(*(undefined8 *)(param_1 + 8));
          FUN_00416830(&local_2f0,local_238,0x100);
          FUN_00428aa0(uVar8,local_2f0,abStack_26c[iVar2 + 1],&local_30);
          local_38 = local_30;
          uVar8 = local_38;
          local_38._0_4_ = (int)local_30;
          if (param_6 == '\0') {
LAB_017af865:
            local_320 = local_308 + (int)local_38;
          }
          else if (param_6 == '\x01') {
LAB_017af873:
            local_31c = local_304 - (int)local_38;
          }
          else {
            if (param_6 == '\x02') goto LAB_017af865;
            if (param_6 == '\x03') goto LAB_017af873;
          }
          local_38 = uVar8;
          uVar8 = FUN_005ffa40(*(undefined8 *)(param_1 + 8));
          thunk_FUN_04151b0d(uVar8,local_320,local_31c);
        }
      }
    }
    else {
      FUN_005fd640(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x78),0xf);
      FUN_005fd670(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x78),0);
      FUN_005fd6d0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x78),0);
      FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x78),0x8000);
      FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x80),1);
      uVar8 = FUN_005ffa40(*(undefined8 *)(param_1 + 8));
      thunk_FUN_041cd445(uVar8,local_318,local_314,local_310,local_30c);
    }
    uVar8 = FUN_005ffa40(*(undefined8 *)(param_1 + 8));
    thunk_FUN_03b994b9(uVar8,uVar1);
    uVar8 = FUN_005ffa40(*(undefined8 *)(param_1 + 8));
    FUN_017aedd0(param_1,uVar8,uVar7);
  }
  FUN_00414560(&local_2f0,4);
  FUN_00414480(&local_2c0);
  FUN_00414480(&local_278);
  FUN_00414560(&param_14,2);
  return;
}

