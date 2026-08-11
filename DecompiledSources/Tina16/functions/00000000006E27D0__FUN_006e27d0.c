/* Ghidra address: 006e27d0 */
/* Ghidra symbol: FUN_006e27d0 */


void FUN_006e27d0(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_1e8 [32];
  char *local_1c8;
  undefined8 local_1b8;
  undefined1 *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined2 local_192;
  undefined8 local_190;
  undefined2 local_186;
  undefined4 local_184;
  undefined8 local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  undefined8 local_160;
  longlong local_158;
  undefined4 local_14c;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined1 local_d4 [92];
  undefined1 local_78 [8];
  undefined8 local_70;
  char local_3a;
  char local_39;
  undefined1 local_38 [16];
  undefined2 local_28 [2];
  undefined2 local_24;
  longlong local_20;
  
  local_1b0 = auStack_1e8;
  local_1b8 = 0;
  lVar7 = *(longlong *)(param_2 + 0x10);
  iVar4 = *(int *)(lVar7 + 0x10);
  if (-0x19a < iVar4) {
    if (iVar4 < -0x192) {
      if (iVar4 != -0x193) {
        if (iVar4 < -0x195) {
          if (iVar4 != -0x196) {
            if (iVar4 != -0x199) {
              puVar1 = auStack_1e8;
              if (iVar4 != -0x197) goto LAB_006e39c6;
              goto LAB_006e325e;
            }
LAB_006e365c:
            local_1b0 = auStack_1e8;
            local_138 = lVar7;
            local_20 = FUN_006e2700(param_1,lVar7 + 0x20);
            puVar1 = local_1b0;
            if (local_20 != 0) {
              *(undefined8 *)(local_20 + 0x20) = 0;
              FUN_00742eb0(param_1[0xdb],0);
              if ((char)param_1[0xa6] == '\0') {
                FUN_006ded10(param_1[0xaa],local_20);
                puVar1 = local_1b0;
              }
              else {
                FUN_006de140(local_20);
                puVar1 = local_1b0;
              }
            }
            goto LAB_006e39c6;
          }
LAB_006e34b1:
          puVar1 = auStack_1e8;
          if (*(char *)((longlong)param_1 + 0x511) == '\0') {
            local_1b0 = auStack_1e8;
            local_118 = lVar7;
            local_20 = FUN_006e2700(param_1,lVar7 + 0x58);
            if (*(int *)(local_118 + 0x18) == 2) {
              pcVar6 = (code *)FUN_00411550(param_1,0xffa3);
              (*pcVar6)(param_1,local_20);
              puVar1 = local_1b0;
            }
            else {
              puVar1 = local_1b0;
              if (*(int *)(local_118 + 0x18) == 1) {
                pcVar6 = (code *)FUN_00411550(param_1,0xffa7);
                (*pcVar6)(param_1,local_20);
                puVar1 = local_1b0;
              }
            }
          }
          goto LAB_006e39c6;
        }
        if (iVar4 != -0x195) {
          puVar1 = auStack_1e8;
          if (iVar4 != -0x194) goto LAB_006e39c6;
LAB_006e36f3:
          local_1b0 = auStack_1e8;
          local_140 = lVar7;
          local_20 = FUN_006e2700(param_1,lVar7 + 0x18);
          puVar1 = local_1b0;
          if ((local_20 != 0) && ((*(uint *)(local_140 + 0x18) & 1) != 0)) {
            FUN_004167d0(&local_1b8,*(undefined8 *)(local_140 + 0x30));
            FUN_006dc8a0(local_20,local_1b8);
            puVar1 = local_1b0;
          }
          goto LAB_006e39c6;
        }
LAB_006e33e6:
        puVar1 = auStack_1e8;
        if (*(char *)((longlong)param_1 + 0x511) == '\0') {
          local_1b0 = auStack_1e8;
          local_110 = lVar7;
          local_20 = FUN_006e2700(param_1,lVar7 + 0x58);
          if (*(int *)(local_110 + 0x18) == 2) {
            pcVar6 = (code *)FUN_00411550(param_1,0xffa9);
            cVar2 = (*pcVar6)(param_1,local_20);
            if (cVar2 == '\0') {
              *(undefined8 *)(param_2 + 0x18) = 1;
              puVar1 = local_1b0;
              goto LAB_006e39c6;
            }
          }
          puVar1 = local_1b0;
          if (*(int *)(local_110 + 0x18) == 1) {
            pcVar6 = (code *)FUN_00411550(param_1,0xffaa);
            cVar2 = (*pcVar6)(param_1,local_20);
            puVar1 = local_1b0;
            if (cVar2 == '\0') {
              *(undefined8 *)(param_2 + 0x18) = 1;
            }
          }
        }
        goto LAB_006e39c6;
      }
LAB_006e3765:
      local_1b0 = auStack_1e8;
      local_148 = lVar7;
      local_e0 = lVar7;
      local_20 = FUN_006e2700(param_1,lVar7 + 0x18);
      puVar1 = local_1b0;
      if (local_20 != 0) {
        if ((*(uint *)(local_148 + 0x18) & 1) != 0) {
          uVar5 = FUN_00416740(*(undefined8 *)(local_20 + 0x10));
          FUN_00442580(*(undefined8 *)(local_148 + 0x30),uVar5,*(int *)(local_148 + 0x38) + -1);
        }
        if ((*(uint *)(local_148 + 0x18) & 2) != 0) {
          (**(code **)(*param_1 + 0x280))(param_1,local_20);
          *(undefined4 *)(local_148 + 0x3c) = *(undefined4 *)(local_20 + 0x28);
        }
        puVar1 = local_1b0;
        if ((*(uint *)(local_148 + 0x18) & 0x20) != 0) {
          (**(code **)(*param_1 + 0x288))(param_1,local_20);
          *(undefined4 *)(local_148 + 0x40) = *(undefined4 *)(local_20 + 0x2c);
          puVar1 = local_1b0;
        }
      }
      goto LAB_006e39c6;
    }
    if (iVar4 == -0x192) {
LAB_006e35ab:
      local_128 = lVar7;
      if (*(int *)(param_1[0xdb] + 0x78) == 0) {
        local_1b0 = auStack_1e8;
        uVar5 = FUN_006e2700(param_1,lVar7 + 0x58);
        pcVar6 = (code *)FUN_00411550(param_1,0xffa8);
        (*pcVar6)(param_1,uVar5);
        puVar1 = local_1b0;
      }
      else {
        local_130 = param_1[0xdb];
        local_1b0 = auStack_1e8;
        FUN_00742eb0(local_130,0);
        uVar5 = FUN_006e2700(param_1,local_128 + 0x58);
        *(undefined8 *)(local_130 + 0x18) = uVar5;
        FUN_00742eb0(local_130,1);
        puVar1 = local_1b0;
      }
      goto LAB_006e39c6;
    }
    if (iVar4 == -0x191) {
LAB_006e3552:
      local_1b0 = auStack_1e8;
      local_120 = lVar7;
      uVar5 = FUN_006e2700(param_1,lVar7 + 0x58);
      pcVar6 = (code *)FUN_00411550(param_1,0xffab);
      cVar2 = (*pcVar6)(param_1,uVar5);
      puVar1 = local_1b0;
      if (cVar2 == '\0') {
        *(undefined8 *)(param_2 + 0x18) = 1;
      }
      goto LAB_006e39c6;
    }
    if (iVar4 != -0xc) {
      puVar1 = auStack_1e8;
      if (iVar4 == -5) {
        param_1[0xa1] = 0;
        local_1b0 = auStack_1e8;
        thunk_FUN_03cc0d62(local_28);
        if ((char)param_1[0xa2] == '\0') {
          local_1a8 = FUN_0065b870(param_1);
          local_1a0 = FUN_0065b870(param_1);
          local_192 = local_24;
          thunk_FUN_0413e052(local_1a8,0xbc7b,local_1a0,CONCAT22(local_24,local_28[0]));
        }
        else {
          uVar5 = FUN_0064d3a0(param_1,local_28);
          local_180._0_2_ = (short)uVar5;
          local_180._4_2_ = (short)((ulonglong)uVar5 >> 0x20);
          local_184 = CONCAT22(local_180._4_2_,(short)local_180);
          local_14c = local_184;
          lVar7 = (longlong)(short)local_180;
          lVar8 = (longlong)local_180._4_2_;
          local_180 = uVar5;
          lVar7 = FUN_006e21e0(param_1,lVar7,lVar8);
          param_1[0xa1] = lVar7;
          local_190 = FUN_0065b870(param_1);
          local_186 = local_24;
          FUN_0064fca0(param_1,0x7b,local_190,CONCAT22(local_24,local_28[0]));
          param_1[0xa1] = 0;
        }
        *(undefined8 *)(param_2 + 0x18) = 1;
        puVar1 = local_1b0;
      }
      goto LAB_006e39c6;
    }
    puVar1 = auStack_1e8;
    if (param_1[0x93] == 0) goto LAB_006e39c6;
    local_f0 = lVar7;
    FUN_005fdf10(param_1[0x93]);
    *(undefined8 *)(param_2 + 0x18) = 0;
    if ((*(uint *)(local_f0 + 0x18) & 0x10000) == 0) {
      (**(code **)(*param_1 + 0xe0))(param_1,local_38);
      iVar4 = *(int *)(local_f0 + 0x18);
      if (iVar4 == 1) {
        cVar2 = (**(code **)(*param_1 + 0x290))(param_1,0,0);
        if (cVar2 != '\0') {
          FUN_005ffb10(param_1[0x93],*(undefined8 *)(local_f0 + 0x20));
          FUN_005ff880(param_1[0x93],param_1[0x17]);
          FUN_005ff8c0(param_1[0x93],param_1[0x66]);
          local_39 = (**(code **)(*param_1 + 0x270))(param_1,local_38,0);
          FUN_005ffb10(param_1[0x93],0);
          if (local_39 == '\0') {
            *(undefined8 *)(param_2 + 0x18) = 4;
            goto LAB_006e324e;
          }
        }
        cVar2 = (**(code **)(*param_1 + 0x290))(param_1,1,0);
        if (cVar2 == '\0') {
          cVar2 = (**(code **)(*param_1 + 0x290))(param_1,1,2);
          if (cVar2 != '\0') goto LAB_006e2b29;
        }
        else {
LAB_006e2b29:
          *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x20;
        }
        cVar2 = (**(code **)(*param_1 + 0x290))(param_1,1,1);
        if (cVar2 != '\0') {
          *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x10;
        }
        cVar2 = (**(code **)(*param_1 + 0x290))(param_1,1,3);
        if (cVar2 != '\0') {
          *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x40;
        }
      }
      else if (iVar4 == 2) {
        cVar2 = (**(code **)(*param_1 + 0x290))(param_1,0,1);
        if (cVar2 != '\0') {
          (**(code **)(*param_1 + 0x270))(param_1,local_38,1);
        }
      }
      else if (iVar4 == 3) {
        cVar2 = (**(code **)(*param_1 + 0x290))(param_1,0,2);
        if (cVar2 != '\0') {
          (**(code **)(*param_1 + 0x270))(param_1,local_38,2);
        }
      }
      else if (iVar4 == 4) {
        cVar2 = (**(code **)(*param_1 + 0x290))(param_1,0,3);
        if (cVar2 != '\0') {
          (**(code **)(*param_1 + 0x270))(param_1,local_38,3);
        }
      }
    }
    else {
      FUN_0040d200(local_78,0x38,0);
      local_70 = *(undefined8 *)(local_f0 + 0x38);
      local_20 = FUN_006e2700(param_1,local_78);
      if (local_20 == 0) {
LAB_006e324e:
        FUN_006e3a70(0,local_1b0);
        puVar1 = local_1b0;
        goto LAB_006e39c6;
      }
      iVar4 = *(int *)(local_f0 + 0x18);
      if (iVar4 == 0x10001) {
        FUN_005ffb10(param_1[0x93],*(undefined8 *)(local_f0 + 0x20));
        FUN_005ff880(param_1[0x93],param_1[0x17]);
        FUN_005ff8c0(param_1[0x93],param_1[0x66]);
        if ((*(uint *)(local_f0 + 0x40) & 1) != 0) {
          FUN_005fc860(*(undefined8 *)(param_1[0x93] + 0x70),0xff00000e);
          FUN_005fdab0(*(undefined8 *)(param_1[0x93] + 0x80),0xff00000d);
        }
        lVar7 = *(longlong *)(param_1[0x93] + 0x70);
        *(longlong **)(lVar7 + 0x10) = param_1;
        *(code **)(lVar7 + 8) = FUN_006e4d70;
        lVar7 = *(longlong *)(param_1[0x93] + 0x80);
        *(longlong **)(lVar7 + 0x10) = param_1;
        *(code **)(lVar7 + 8) = FUN_006e4d70;
        *(undefined1 *)(param_1 + 0x94) = 0;
        local_1c8 = &local_3a;
        local_39 = (**(code **)(*param_1 + 0x278))
                             (param_1,local_20,*(undefined2 *)(local_f0 + 0x40),0);
        if (local_3a == '\0') {
          *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x10000;
        }
        if (local_39 == '\0') {
          *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 4;
        }
        else if ((char)param_1[0x94] != '\0') {
          *(undefined1 *)(param_1 + 0x94) = 0;
          lVar7 = param_1[0x93];
          lVar8 = *(longlong *)(lVar7 + 0x70);
          *(undefined8 *)(lVar8 + 8) = 0;
          *(undefined8 *)(lVar8 + 0x10) = 0;
          lVar8 = *(longlong *)(lVar7 + 0x80);
          *(undefined8 *)(lVar8 + 8) = 0;
          *(undefined8 *)(lVar8 + 0x10) = 0;
          local_f8 = *(longlong *)(param_2 + 0x10);
          local_e8 = local_f8;
          uVar3 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(lVar7 + 0x70) + 0x28));
          *(undefined4 *)(local_f8 + 0x50) = uVar3;
          local_158 = *(longlong *)(param_1[0x93] + 0x80);
          uVar3 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(local_158 + 0x18) + 0x28));
          *(undefined4 *)(local_f8 + 0x54) = uVar3;
          uVar5 = FUN_005fc8c0(*(undefined8 *)(param_1[0x93] + 0x70));
          iVar4 = thunk_FUN_03d2c01a(uVar5,0x5c,local_d4);
          if (iVar4 != 0) {
            FUN_005ffb10(param_1[0x93],0);
            uVar3 = thunk_FUN_041a15ee(local_d4);
            *(undefined4 *)((longlong)param_1 + 0x584) = uVar3;
            uVar3 = thunk_FUN_041a19a1(*(undefined8 *)(local_f0 + 0x20),
                                       (longlong)*(int *)((longlong)param_1 + 0x584));
            *(undefined4 *)(param_1 + 0xb1) = uVar3;
            *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 2;
          }
        }
        cVar2 = (**(code **)(*param_1 + 0x290))(param_1,1,1);
        if (cVar2 != '\0') {
          *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x10;
        }
        FUN_005ffb10(param_1[0x93],0);
      }
      else if (iVar4 == 0x10002) {
        FUN_005ffb10(param_1[0x93],*(undefined8 *)(local_f0 + 0x20));
        FUN_005ff880(param_1[0x93],param_1[0x17]);
        FUN_005ff8c0(param_1[0x93],param_1[0x66]);
        cVar2 = (**(code **)(*param_1 + 0x290))(param_1,1,1);
        if (cVar2 != '\0') {
          local_1c8 = &local_3a;
          (**(code **)(*param_1 + 0x278))(param_1,local_20,*(undefined2 *)(local_f0 + 0x40),1);
        }
        FUN_005ffb10(param_1[0x93],0);
        if ((*(int *)((longlong)param_1 + 0x584) != 0) && ((int)param_1[0xb1] != 0)) {
          thunk_FUN_041a19a1(*(undefined8 *)(local_f0 + 0x20),(longlong)(int)param_1[0xb1]);
          thunk_FUN_0416f828((longlong)*(int *)((longlong)param_1 + 0x584));
          *(undefined4 *)((longlong)param_1 + 0x584) = 0;
          *(undefined4 *)(param_1 + 0xb1) = 0;
        }
      }
      else if (iVar4 == 0x10003) {
        cVar2 = (**(code **)(*param_1 + 0x290))(param_1,1,2);
        if (cVar2 != '\0') {
          local_1c8 = &local_3a;
          (**(code **)(*param_1 + 0x278))(param_1,local_20,*(undefined2 *)(local_f0 + 0x40),2);
        }
      }
      else if ((iVar4 == 0x10004) &&
              (cVar2 = (**(code **)(*param_1 + 0x290))(param_1,1,3), cVar2 != '\0')) {
        local_1c8 = &local_3a;
        (**(code **)(*param_1 + 0x278))(param_1,local_20,*(undefined2 *)(local_f0 + 0x40),3);
      }
    }
    FUN_005fe090(param_1[0x93]);
    puVar1 = local_1b0;
    goto LAB_006e39c6;
  }
  if (iVar4 != -0x19a) {
    if (-0x1c6 < iVar4) {
      if (-0x1c3 < iVar4) {
        if (iVar4 == -0x1c2) goto LAB_006e3552;
        puVar1 = auStack_1e8;
        if (iVar4 != -0x19b) goto LAB_006e39c6;
LAB_006e33c1:
        local_1b0 = auStack_1e8;
        pcVar6 = (code *)FUN_00411550(param_1,0xffa4);
        (*pcVar6)(param_1,lVar7 + 0x18);
        puVar1 = local_1b0;
        goto LAB_006e39c6;
      }
      if (iVar4 == -0x1c3) goto LAB_006e35ab;
      if (iVar4 == -0x1c5) goto LAB_006e36f3;
      puVar1 = auStack_1e8;
      if (iVar4 != -0x1c4) goto LAB_006e39c6;
      goto LAB_006e3765;
    }
    if (iVar4 == -0x1c6) goto LAB_006e33e6;
    if (-0x1ca < iVar4) {
      if (iVar4 == -0x1c8) {
LAB_006e325e:
        *(undefined1 *)(param_1 + 0x97) = 1;
        local_100 = *(longlong *)(param_2 + 0x10);
        local_1b0 = auStack_1e8;
        lVar7 = FUN_006e2700(param_1,local_100 + 0x58);
        param_1[0x99] = lVar7;
        puVar1 = local_1b0;
        goto LAB_006e39c6;
      }
      puVar1 = auStack_1e8;
      if (iVar4 != -0x1c7) goto LAB_006e39c6;
      goto LAB_006e34b1;
    }
    if (iVar4 == -0x1ca) goto LAB_006e365c;
    if (iVar4 == -0x1cc) goto LAB_006e33c1;
    puVar1 = auStack_1e8;
    if (iVar4 != -0x1cb) goto LAB_006e39c6;
  }
  local_1b0 = auStack_1e8;
  local_108 = lVar7;
  cVar2 = FUN_0064eb50(param_1);
  if (cVar2 == '\0') {
    uVar5 = FUN_006e2700(param_1,local_108 + 0x18);
    pcVar6 = (code *)FUN_00411550(param_1,0xffac);
    cVar2 = (*pcVar6)(param_1,uVar5);
    if (cVar2 == '\0') goto LAB_006e32f9;
  }
  else {
LAB_006e32f9:
    *(undefined8 *)(param_2 + 0x18) = 1;
  }
  puVar1 = local_1b0;
  if (*(longlong *)(param_2 + 0x18) == 0) {
    local_160 = FUN_0065b870(param_1);
    lVar7 = thunk_FUN_041b2403(local_160,0x110f,0,0);
    param_1[0x9a] = lVar7;
    local_168 = param_1[0x9a];
    lVar7 = thunk_FUN_04118143(local_168,0xfffffffc);
    param_1[0x95] = lVar7;
    local_170 = param_1[0x9a];
    local_178 = param_1[0x96];
    thunk_FUN_03c9d277(local_170,0xfffffffc,local_178);
    puVar1 = local_1b0;
  }
LAB_006e39c6:
  local_1b0 = puVar1;
  FUN_00414480(&local_1b8);
  return;
}

