/* Ghidra address: 00d382c0 */
/* Ghidra symbol: FUN_00d382c0 */


void FUN_00d382c0(undefined8 param_1,longlong *param_2,undefined4 param_3,ulonglong *param_4,
                 undefined8 param_5,byte param_6,char param_7)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int hDest;
  int wSrc;
  int hSrc;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  HDC hdcSrc;
  longlong lVar9;
  undefined1 auStackY_198 [32];
  undefined1 local_130 [16];
  undefined1 *local_120;
  longlong local_118;
  undefined8 local_110;
  ulonglong uStack_108;
  int local_100;
  int local_fc;
  BLENDFUNCTION local_ee;
  ushort local_ea;
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  short local_cc;
  byte local_c9;
  undefined8 local_c8;
  int local_bc;
  undefined4 local_b8;
  undefined8 local_b4;
  ulonglong uStack_ac;
  uint local_a4;
  undefined4 local_a0;
  int local_9c;
  int local_94;
  longlong local_90;
  longlong local_88;
  int local_80;
  uint local_75;
  char local_71;
  longlong *local_70;
  undefined1 local_64 [12];
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  HDC local_30;
  
  local_120 = auStackY_198;
  local_e0 = 0;
  local_58 = *param_4;
  local_50 = param_4[1];
  FUN_00414610(param_5);
  local_c9 = 1;
  local_40 = local_58;
  local_38 = local_50;
  local_d8 = FUN_00d394b0(param_1,param_3);
  local_30 = (HDC)FUN_005ffa40(param_2);
  local_b4 = local_58;
  uStack_ac = local_50;
  local_71 = '\x1c';
  if ((param_6 & 1) != 0) {
    local_71 = '\x1d';
  }
  if ((param_6 & 2) != 0) {
    local_71 = '\x1e';
  }
  if (param_7 == '\x01') {
    local_71 = ' ';
    local_b4._0_4_ = (int)local_58;
    local_b4 = CONCAT44((int)(local_58 >> 0x20),(int)local_b4 + 0x19);
  }
  plVar6 = (longlong *)FUN_00781840();
  (**(code **)(*plVar6 + 0x158))(plVar6,local_64,local_71);
  if ((((param_6 & 2) == 0) || ((param_6 & 1) == 0)) || (local_71 != '\x1e')) {
    if ((local_71 != '\x1c') && (local_71 != '\x1e')) {
      uVar7 = FUN_00781840();
      FUN_00778dc0(uVar7,local_30,local_64,&local_b4);
    }
  }
  else {
    plVar6 = (longlong *)FUN_00781840();
    (**(code **)(*plVar6 + 0x158))(plVar6,local_64,0x1d);
    uVar3 = FUN_004230a0(&local_b4);
    FUN_004230c0(&local_b4);
    FUN_004238d0(&local_100,0,0,uVar3);
    local_70 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    FUN_0060bbf0(local_70,7);
    uVar3 = FUN_004230a0(&local_100);
    uVar4 = FUN_004230c0(&local_100);
    (**(code **)(*local_70 + 0xe0))(local_70,uVar3,uVar4);
    FUN_00d38250(auStackY_198,local_70);
    FUN_0060a2b0(local_70,2);
    uVar7 = FUN_00781840();
    uVar8 = FUN_00609e10(local_70);
    uVar8 = FUN_005ffa40(uVar8);
    FUN_00778dc0(uVar7,uVar8,local_64,&local_100);
    local_110 = local_b4;
    uStack_108 = uStack_ac;
    local_ee.BlendOp = '\0';
    local_ee.BlendFlags = '\0';
    local_ee.SourceConstantAlpha = '2';
    local_ee.AlphaFormat = '\x01';
    iVar5 = FUN_004230a0(&local_110);
    hDest = FUN_004230c0(&local_110);
    uVar7 = FUN_00609e10(local_70);
    hdcSrc = (HDC)FUN_005ffa40(uVar7);
    wSrc = FUN_004230a0(&local_100);
    hSrc = FUN_004230c0(&local_100);
    AlphaBlend(local_30,(int)local_110,local_110._4_4_,iVar5,hDest,hdcSrc,local_100,local_fc,wSrc,
               hSrc,local_ee);
    FUN_00410f20(local_70);
    plVar6 = (longlong *)FUN_00781840();
    (**(code **)(*plVar6 + 0x158))(plVar6,local_64,0x1e);
  }
  if (param_7 == '\x02') {
    FUN_00d37bb0(auStackY_198,&local_58);
  }
  local_88 = *(longlong *)(local_d8 + 0x10);
  local_90 = 0;
  if ((local_88 != 0) && (*(longlong *)(local_88 + 0x120) != 0)) {
    (**(code **)(local_88 + 0x120))(*(undefined8 *)(local_88 + 0x128),local_88,param_2,&local_58);
    goto LAB_00d39298;
  }
  if ((local_88 != 0) && (*(longlong *)(local_88 + 0x130) != 0)) {
    local_ea = 0;
    if ((param_6 & 2) != 0) {
      local_ea = 4;
    }
    if ((param_6 & 1) != 0) {
      local_ea = local_ea | 1;
    }
    (**(code **)(local_88 + 0x130))(*(undefined8 *)(local_88 + 0x138),local_88,param_2,&local_58);
    goto LAB_00d39298;
  }
  if (local_88 == 0) {
    lVar9 = FUN_00d3a560(local_d8);
    if (lVar9 != 0) {
      local_48 = FUN_00d3a560(local_d8);
      if (local_48 < 0xc) {
        local_c9 = 0;
        if ((int)local_48 < 10) {
          if ((int)local_48 == 9) {
            local_cc = 0x32;
          }
          else {
            if ((int)local_48 != 6) {
              if ((int)local_48 == 7) goto LAB_00d38b4e;
              if ((int)local_48 != 8) goto LAB_00d38b6f;
            }
            local_cc = 0x72;
          }
        }
        else if ((int)local_48 == 10) {
          local_cc = 0x31;
        }
        else if ((int)local_48 == 0xb) {
LAB_00d38b4e:
          local_cc = 0x30;
        }
        else {
LAB_00d38b6f:
          local_cc = 0;
        }
        if (local_cc != 0) {
          FUN_004238d0(&local_a4,0,0,10);
          plVar6 = (longlong *)FUN_007810f0();
          cVar1 = (**(code **)(*plVar6 + 0x98))(plVar6);
          if (cVar1 == '\0') {
            FUN_004238d0(&local_b4,local_58 & 0xffffffff,local_58._4_4_,(int)local_58 + 0x14);
          }
          else {
            FUN_004238d0(&local_b4,local_58 & 0xffffffff,local_58._4_4_,(int)local_58 + 0x1e);
          }
          FUN_004238f0(local_130,&local_a4,&local_58);
          plVar6 = (longlong *)FUN_007810f0();
          cVar1 = (**(code **)(*plVar6 + 0x98))(plVar6);
          if (cVar1 == '\0') {
            cVar1 = FUN_00d39440(param_1);
            if (cVar1 == '\0') {
              local_a4 = (int)local_58 + 5;
            }
            else {
              local_a4 = (int)local_50 - 9;
              local_9c = (int)local_50;
            }
          }
          else {
            cVar1 = FUN_00d39440(param_1);
            if (cVar1 == '\0') {
              local_a4 = (int)local_58 + 10;
            }
            else {
              local_a4 = (int)local_50 - 0xe;
              local_9c = (int)local_50;
            }
          }
          FUN_00d38050(auStackY_198,local_30,local_cc,&local_a4);
        }
      }
      else {
        local_c9 = 0;
        local_bc = FUN_00d37100(local_48);
        local_b8 = FUN_00d370e0(local_48);
        FUN_004238d0(&local_a4,0,0,local_bc);
        FUN_00d37120(local_130,&local_a4,&local_58);
        cVar1 = FUN_00d39440(param_1);
        if (cVar1 == '\0') {
          FUN_00429ca0(&local_a4,4,0);
        }
        else {
          local_a4 = ((int)local_50 - local_bc) - 4;
          local_9c = (int)local_50;
        }
        local_c8 = FUN_00d37010(local_48);
        thunk_FUN_041a8a5c(local_30,local_a4,local_a0,local_c8);
        thunk_FUN_041dba40(local_c8);
      }
    }
  }
  else {
    local_94 = *(int *)(local_88 + 0x88);
    local_90 = FUN_007e1f10(local_88);
    local_118 = FUN_007e3880(local_88);
    if ((local_94 < 0) && (lVar9 = FUN_007e3610(local_88), lVar9 != 0)) {
      local_e8 = (longlong *)FUN_007e3610(local_88);
      uVar3 = (**(code **)(*local_e8 + 0x60))(local_e8);
      (**(code **)(*local_e8 + 0x48))(local_e8);
      FUN_004238d0(&local_a4,0,0,uVar3);
      FUN_00d37120(local_130,&local_a4,&local_58);
      plVar6 = (longlong *)FUN_007810f0();
      cVar1 = (**(code **)(*plVar6 + 0x98))(plVar6);
      if (cVar1 == '\0') {
        cVar1 = FUN_00d39440(param_1);
        if (cVar1 == '\0') {
          FUN_00429ca0(&local_a4,2,0);
        }
        else {
          iVar5 = (**(code **)(*local_e8 + 0x60))(local_e8);
          local_a4 = ((int)local_50 - iVar5) - 2;
          local_9c = (int)local_50;
        }
      }
      else {
        cVar1 = FUN_00d39440(param_1);
        if (cVar1 == '\0') {
          FUN_00429ca0(&local_a4,4,0);
        }
        else {
          iVar5 = (**(code **)(*local_e8 + 0x60))(local_e8);
          local_a4 = ((int)local_50 - iVar5) - 4;
          local_9c = (int)local_50;
        }
      }
      (**(code **)(*param_2 + 0x88))(param_2,local_a4,local_a0,local_e8);
    }
    else if ((local_90 != 0) && (-1 < local_94)) {
      local_c9 = 0;
      FUN_004238d0(&local_a4,0,0,*(undefined4 *)(local_90 + 0x94));
      FUN_00d37120(local_130,&local_a4,&local_58);
      plVar6 = (longlong *)FUN_007810f0();
      cVar1 = (**(code **)(*plVar6 + 0x98))(plVar6);
      if (cVar1 == '\0') {
        cVar1 = FUN_00d39440(param_1);
        if (cVar1 == '\0') {
          FUN_00429ca0(&local_a4,2,0);
        }
        else {
          local_a4 = ((int)local_50 - *(int *)(*(longlong *)(local_118 + 0xa0) + 0x94)) - 2;
          local_9c = (int)local_50;
        }
      }
      else {
        cVar1 = FUN_00d39440(param_1);
        if (cVar1 == '\0') {
          FUN_00429ca0(&local_a4,4,0);
        }
        else {
          local_a4 = ((int)local_50 - *(int *)(*(longlong *)(local_118 + 0xa0) + 0x94)) - 4;
          local_9c = (int)local_50;
        }
      }
      FUN_007d6c70(local_90,param_2,local_a4,local_a0);
    }
  }
  bVar2 = FUN_00d3acd0(local_d8);
  if ((local_c9 & bVar2) != 0) {
    local_71 = FUN_00d3ac00(local_d8);
    local_71 = local_71 + '\x14';
    cVar1 = FUN_00d3ac70(local_d8);
    if (cVar1 != '\0') {
      local_71 = FUN_00d3ac00(local_d8);
      local_71 = local_71 + '\x16';
    }
    plVar6 = (longlong *)FUN_00781840();
    (**(code **)(*plVar6 + 0x158))(plVar6,local_64,local_71);
    uVar7 = FUN_00781840();
    FUN_00779290(uVar7,local_30,local_64,1);
    FUN_004238d0(&local_a4,0,0,local_80);
    FUN_00d37120(local_130,&local_a4,&local_58);
    cVar1 = FUN_00d39440(param_1);
    if (cVar1 == '\0') {
      FUN_00429ca0(&local_a4,4,0);
    }
    else {
      local_a4 = ((int)local_50 - local_80) - 4;
      local_9c = (int)local_50;
    }
    uVar7 = FUN_00781840();
    FUN_00778dc0(uVar7,local_30,local_64,&local_a4);
  }
  local_75 = 0x14140;
  cVar1 = FUN_00d39440(param_1);
  if (cVar1 == '\0') {
    if ((local_90 == 0) || (*(int *)(local_90 + 0x94) < 0x11)) {
      plVar6 = (longlong *)FUN_007810f0();
      cVar1 = (**(code **)(*plVar6 + 0x98))(plVar6);
      if (cVar1 == '\0') {
        local_40 = CONCAT44(local_40._4_4_,(int)local_40 + 0x14);
      }
      else {
        local_40 = CONCAT44(local_40._4_4_,(int)local_40 + 0x1e);
      }
    }
    else {
      plVar6 = (longlong *)FUN_007810f0();
      cVar1 = (**(code **)(*plVar6 + 0x98))(plVar6);
      if (cVar1 == '\0') {
        local_40 = CONCAT44(local_40._4_4_,(int)local_40 + *(int *)(local_90 + 0x94) + 7);
      }
      else {
        local_40 = CONCAT44(local_40._4_4_,(int)local_40 + *(int *)(local_90 + 0x94) + 10);
      }
    }
  }
  else {
    local_40 = CONCAT44(local_40._4_4_,(int)local_58);
    if ((local_90 == 0) || (*(int *)(local_90 + 0x94) < 0x11)) {
      plVar6 = (longlong *)FUN_007810f0();
      cVar1 = (**(code **)(*plVar6 + 0x98))(plVar6);
      if (cVar1 == '\0') {
        local_38 = CONCAT44(local_38._4_4_,(int)local_38 + -0x14);
      }
      else {
        local_38 = CONCAT44(local_38._4_4_,(int)local_38 + -0x1e);
      }
    }
    else {
      plVar6 = (longlong *)FUN_007810f0();
      cVar1 = (**(code **)(*plVar6 + 0x98))(plVar6);
      if (cVar1 == '\0') {
        local_38 = CONCAT44(local_38._4_4_,((int)local_38 - *(int *)(local_90 + 0x94)) + -7);
      }
      else {
        local_38 = CONCAT44(local_38._4_4_,((int)local_38 - *(int *)(local_90 + 0x94)) + -10);
      }
    }
    local_75 = local_75 & 0xfffffeff | 0x3000;
  }
  plVar6 = (longlong *)FUN_00781840();
  (**(code **)(*plVar6 + 0x158))(plVar6,local_64,0x1c);
  if ((param_6 & 1) != 0) {
    plVar6 = (longlong *)FUN_00781840();
    (**(code **)(*plVar6 + 0x158))(plVar6,local_64,0x1d);
  }
  if ((param_6 & 2) != 0) {
    plVar6 = (longlong *)FUN_00781840();
    (**(code **)(*plVar6 + 0x158))(plVar6,local_64,0x1e);
  }
  cVar1 = FUN_00d3ad50(local_d8);
  if (cVar1 != '\0') {
    FUN_005fce70(param_2[0xe],1);
  }
  uVar7 = FUN_005ffa40(param_2);
  FUN_00788830(param_1,uVar7,local_64,param_5);
  if ((local_88 != 0) && (*(short *)(local_88 + 0xc0) != 0)) {
    FUN_007dc700(&local_e0,*(short *)(local_88 + 0xc0));
    local_40 = local_58;
    local_38 = local_50;
    cVar1 = FUN_00d39440(param_1);
    if (cVar1 == '\0') {
      iVar5 = FUN_005fdff0(param_2,local_e0);
      local_40 = CONCAT44(local_40._4_4_,((int)local_50 - iVar5) + -0xe);
      local_38 = CONCAT44(local_38._4_4_,(int)local_50);
    }
    else {
      local_40 = CONCAT44(local_40._4_4_,(int)local_58 + 0xe);
      iVar5 = FUN_005fdff0(param_2,local_e0);
      local_38 = CONCAT44(local_38._4_4_,(int)local_40 + iVar5);
    }
    uVar7 = FUN_005ffa40(param_2);
    FUN_00788830(param_1,uVar7,local_64,local_e0);
  }
LAB_00d39298:
  FUN_00414480(&local_e0);
  FUN_00414480(&param_5);
  return;
}

