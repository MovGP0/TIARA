/* Ghidra address: 01c6ec30 */
/* Ghidra symbol: FUN_01c6ec30 */


void FUN_01c6ec30(longlong *param_1,int param_2,char param_3,undefined1 param_4,char param_5)

{
  ulonglong uVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  int local_res10;
  char local_res18;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined1 local_188;
  undefined4 local_180;
  longlong *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  ulonglong local_120;
  wchar_t *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 *local_100;
  bool local_e9;
  wchar_t *local_e8;
  undefined8 local_d8;
  longlong *local_d0;
  short *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined **local_b0;
  char local_a5;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  undefined1 local_81;
  longlong local_80;
  longlong local_78;
  int local_70;
  int local_6c;
  undefined1 local_60 [16];
  int local_50;
  uint local_4c [3];
  longlong *local_40;
  longlong *local_38;
  longlong *local_28;
  
  local_100 = auStack_1c8;
  local_170 = 0;
  local_168 = 0;
  local_158 = 0;
  local_160 = 0;
  local_138 = 0;
  local_140 = 0;
  local_128 = 0;
  local_130 = 0;
  local_118 = (wchar_t *)0x0;
  local_120 = 0;
  local_108 = 0;
  local_110 = 0;
  cVar2 = FUN_01c8cee0(param_1);
  if ((cVar2 != '\0') || ((param_1[0x4f1] != 0 && (*(char *)(param_1[0x4f1] + 0x218) != '\0'))))
  goto LAB_01c6fe3b;
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_2 == -1) {
    local_res10 = (int)param_1[0x324];
    local_res18 = (char)param_1[0x4eb];
  }
  *(char *)(param_1 + 0x4eb) = local_res18;
  if ((0 < local_res10) || (local_res10 == -2)) {
    FUN_01c6cf20(param_1);
    FUN_01c6d670(param_1,param_1[0x179]);
    FUN_01994230(param_1[0x4f5]);
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    if (local_res10 == -2) {
      local_28 = (longlong *)param_1[0x30d];
    }
    else if (local_res10 == 0xa1) {
      local_28 = (longlong *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,0xa1);
      FUN_01d38290(local_28,1);
      FUN_01d04aa0(local_28,0);
      (**(code **)(*local_28 + 0x128))(local_28,&local_110);
      FUN_019a44e0(param_1[0x4f5],&local_108,local_110,local_28);
      FUN_00414ad0(local_28 + 0x13,local_108);
      local_1a8 = (int *)((ulonglong)local_1a8._4_4_ << 0x20);
      local_b8 = (longlong *)
                 FUN_014000e0(&PTR_FUN_013faf98,1,*(undefined8 *)PTR_DAT_02004030,local_28);
      local_88 = (**(code **)(*local_b8 + 0x2d0))(local_b8);
      FUN_00410f20(local_b8);
      if (local_88 == 1) {
        uVar8 = FUN_0198d430(param_1[0x4f5]);
        (**(code **)(*local_28 + 0x68))(local_28,uVar8,&local_9c);
        plVar6 = (longlong *)FUN_0198d430(param_1[0x4f5]);
        local_1a8 = (int *)CONCAT44(local_1a8._4_4_,local_90);
        (**(code **)(*plVar6 + 0x30))(plVar6,local_9c,local_98,local_94);
      }
      if (local_88 == 2) {
        FUN_01c6cf20(param_1);
        goto LAB_01c6fe3b;
      }
    }
    else if (local_res10 == 900) {
      local_c0 = (longlong *)
                 FUN_01ba5d60(&PTR_FUN_01ba4d88,1,*(undefined8 *)PTR_DAT_02004030,param_1[0x4f5]);
      local_88 = (**(code **)(*local_c0 + 0x2d0))(local_c0);
      local_28 = (longlong *)FUN_01ba66d0(local_c0);
      FUN_00410f20(local_c0);
      if (local_88 == 1) {
        uVar8 = FUN_0198d430(param_1[0x4f5]);
        (**(code **)(*local_28 + 0x68))(local_28,uVar8,&local_9c);
        plVar6 = (longlong *)FUN_0198d430(param_1[0x4f5]);
        local_1a8 = (int *)CONCAT44(local_1a8._4_4_,local_90);
        (**(code **)(*plVar6 + 0x30))(plVar6,local_9c,local_98,local_94);
      }
      if (local_88 == 2) {
        FUN_01c6cf20(param_1);
        goto LAB_01c6fe3b;
      }
    }
    else {
      if ((int)param_1[0x324] != local_res10) {
        *(undefined1 *)(param_1 + 0x4f6) = 0;
        *(undefined1 *)((longlong)param_1 + 0x27b1) = 0;
        FUN_00414480(param_1 + 0x4f7);
        *(undefined1 *)(param_1 + 0x4f8) = 0;
        if ((local_res10 < 0x100) &&
           ((byte)((char)local_res10 - 8U) < 0x40 &&
            (1L << ((char)local_res10 - 8U & 0x3f) & 0x800000001e0U) != 0)) {
          *(undefined1 *)(param_1 + 0x4f6) = 3;
          *(undefined1 *)((longlong)param_1 + 0x27b1) = 0;
          *(undefined1 *)(param_1 + 0x4f8) = 3;
        }
      }
      *(int *)(param_1 + 0x324) = local_res10;
      local_a5 = '\0';
      if ((local_res18 != '\0') && (cVar2 = FUN_00440a20(param_1[0x4ec],1), cVar2 != '\0')) {
        local_b0 = (undefined **)FUN_017708f0(param_1[0x4ec]);
        FUN_004414c0(&local_120,param_1[0x4ec],0);
        FUN_00441a10(&local_118,local_120);
        local_e8 = local_118;
        if (local_118 == L".EXP") {
          local_e9 = true;
        }
        else if (local_118 == (wchar_t *)0x0) {
          local_e9 = false;
        }
        else {
          iVar5 = FUN_0043e420(local_118,L".EXP");
          local_e9 = iVar5 == 0;
        }
        if ((local_e9 == false) || (local_b0 != &PTR_FUN_017611c0)) {
          local_a5 = '\0';
        }
        else {
          local_a5 = '\x01';
        }
      }
      if (local_a5 == '\0') {
        local_28 = (longlong *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,(undefined2)local_res10);
        *(char *)((longlong)local_28 + 0xd1) = (char)param_1[0x4f6];
        *(undefined1 *)((longlong)local_28 + 0xd3) = *(undefined1 *)((longlong)param_1 + 0x27b1);
        (**(code **)(*local_28 + 0x128))(local_28,&local_130);
        FUN_019a44e0(param_1[0x4f5],&local_128,local_130,local_28);
        FUN_00414ad0(local_28 + 0x13,local_128);
        *(char *)(local_28 + 0x15) = (char)param_1[0x4f8];
        FUN_01d38290(local_28,param_4);
        FUN_01d04aa0(local_28,0);
        local_78 = FUN_01d06e20(local_28);
        if (local_78 != 0) {
          local_81 = *(undefined1 *)((longlong)local_28 + 0xd1);
          local_80 = FUN_01d06f50(local_28,*PTR_DAT_02002480 == '\0',*PTR_DAT_02001560,&local_81);
          if (local_80 == 0) {
            local_80 = FUN_01d06f90(local_28);
          }
          if (((local_80 != 0) &&
              ((local_c8 = (short *)(local_80 + 0x2c), *local_c8 != 0 ||
               (*(short *)(local_80 + 0x2e) != 0)))) &&
             ((*local_c8 != 0x28 || (*(short *)(local_80 + 0x2e) != 0x14)))) {
            *(int *)(local_28 + 0x14) = (int)*local_c8;
            *(int *)((longlong)local_28 + 0xa4) = (int)*(short *)(local_80 + 0x2e);
          }
        }
        if (local_res10 == 0x39) {
          if (local_res18 == '\0') {
            local_d0 = param_1 + 0x308;
            if ((char)param_1[0x30c] == '\0') {
              local_1a8 = (int *)CONCAT71(local_1a8._1_7_,1);
              local_1a0 = 0;
              cVar2 = FUN_016ff310(param_1[0x309],param_1[0x30a],param_1[0x30b],local_28);
              if (cVar2 == '\0') {
                uVar8 = (**(code **)*local_28)(local_28);
                FUN_00418590(uVar8,&DAT_01cf1390);
                goto LAB_01c6fe3b;
              }
            }
            else {
              local_1a8 = (int *)CONCAT71(local_1a8._1_7_,1);
              local_1a0 = 0;
              local_198 = 0;
              cVar2 = FUN_01700890(param_1[0x309],param_1[0x30a],param_1[0x30b],local_28);
              if (cVar2 == '\0') {
                uVar8 = (**(code **)*local_28)(local_28);
                FUN_00418590(uVar8,&DAT_01cf1390);
                goto LAB_01c6fe3b;
              }
            }
          }
          else {
            lVar7 = FUN_017708f0(param_1[0x4ec]);
            plVar6 = (longlong *)(**(code **)(lVar7 + 0x20))(lVar7,1,local_28);
            local_28[0x35] = (longlong)plVar6;
            (**(code **)(*plVar6 + 0x28))(plVar6,param_1[0x4ec],1,param_1[0x4f5]);
            if (param_5 == '\0') {
              FUN_00414ad0(local_28 + 0x76,param_1[0x4ec]);
            }
            if (*PTR_DAT_02002ce0 != '\0') {
              uVar8 = FUN_00b89270();
              FUN_00b8e520(uVar8,&local_140,0x593);
              local_150 = param_1[0x4ec];
              local_148 = 0x11;
              FUN_00442f70(&local_138,local_140,&local_150,0);
              FUN_016fd940(local_138);
              uVar8 = (**(code **)*local_28)(local_28);
              FUN_00418590(uVar8,&DAT_01cf1390);
              *PTR_DAT_02002ce0 = 0;
              goto LAB_01c6fe3b;
            }
          }
          *(undefined1 *)(local_28 + 0x34) = *(undefined1 *)(local_28[0x35] + 0x70);
          (**(code **)(*local_28 + 0x128))(local_28,&local_160);
          FUN_019a44e0(param_1[0x4f5],&local_158,local_160,local_28);
          FUN_00414ad0(local_28 + 0x13,local_158);
          uVar8 = FUN_0176a290(local_28[0x35]);
          local_d8._0_4_ = (undefined4)uVar8;
          *(undefined4 *)(local_28 + 0x14) = (undefined4)local_d8;
          local_d8._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
          *(undefined4 *)((longlong)local_28 + 0xa4) = local_d8._4_4_;
          local_d8 = uVar8;
        }
        cVar2 = FUN_01d42040(local_res10);
        if (cVar2 != '\0') {
          local_1a8 = (int *)0x0;
          FUN_01700720(param_1[0x309],param_1[0x30b],local_28,1);
        }
        FUN_01d07850(local_28);
      }
      else {
        local_28 = (longlong *)0x0;
        local_38 = (longlong *)FUN_0176a5d0(&PTR_FUN_017611c0,1,0);
        uVar8 = FUN_0065b870(param_1[0x142]);
        *(undefined8 *)PTR_DAT_02001eb8 = uVar8;
        (**(code **)(*local_38 + 0x28))(local_38,param_1[0x4ec],0,param_1[0x4f5]);
        local_8c = *(int *)(local_38[1] + 0x10);
        while (local_8c = local_8c + -1, -1 < local_8c) {
          local_40 = (longlong *)FUN_00b94e60(local_38[1],local_8c);
          cVar2 = FUN_0198a580(local_40);
          if ((cVar2 == '\x04') &&
             (sVar3 = (**(code **)(*local_40 + 0xf8))(local_40), sVar3 == 0x3a)) {
            FUN_00b94ea0(local_38[1],local_8c);
          }
        }
        local_1a8._1_7_ = (undefined7)((ulonglong)local_1a8 >> 8);
        local_1a8 = (int *)CONCAT71(local_1a8._1_7_,PTR_DAT_02004010[0x814]);
        local_1a0._1_7_ = (undefined7)((ulonglong)local_1a0 >> 8);
        local_1a0 = CONCAT71(local_1a0._1_7_,*PTR_DAT_020037e8);
        uVar1 = (ulonglong)local_198 >> 8;
        local_198 = CONCAT71((int7)uVar1,PTR_DAT_02004010[0x815]);
        local_190 = *PTR_DAT_02001560;
        local_188 = *PTR_DAT_02005310;
        local_180 = 0x1c7;
        FUN_0198d580(local_38[1],&local_70,*PTR_DAT_02002480,PTR_DAT_02004010[0x816]);
        uVar8 = FUN_0198d430(param_1[0x4f5]);
        FUN_01a9a4e0(uVar8,local_4c,&local_50);
        lVar7 = FUN_0198d430(param_1[0x4f5]);
        uVar4 = FUN_00b905e0(local_4c[0],*(undefined4 *)(lVar7 + 0x3c));
        lVar7 = FUN_0198d430(param_1[0x4f5]);
        iVar5 = FUN_00b905f0(uVar4,*(undefined4 *)(lVar7 + 0x44));
        local_4c[0] = iVar5 - local_70;
        lVar7 = FUN_0198d430(param_1[0x4f5]);
        uVar4 = FUN_00b905e0(local_50,*(undefined4 *)(lVar7 + 0x40));
        lVar7 = FUN_0198d430(param_1[0x4f5]);
        local_50 = FUN_00b905f0(uVar4,*(undefined4 *)(lVar7 + 0x48));
        local_50 = local_50 - local_6c;
        FUN_01b1cd00(local_4c,&local_50);
        iVar5 = *(int *)(local_38[1] + 0x10);
        local_8c = 0;
        if (-1 < iVar5 + -1) {
          do {
            local_40 = (longlong *)FUN_00b94e60(local_38[1],local_8c);
            (**(code **)(*local_40 + 0xe8))
                      (local_40,0,*(int *)((longlong)local_40 + 0xc) + local_4c[0],
                       (int)local_40[2] + local_50);
            local_8c = local_8c + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        FUN_0041ddd0(&local_168,PTR_PTR_02001c80);
        uVar8 = FUN_017bb060(local_38[1]);
        FUN_017baeb0(&PTR_FUN_017ba4c0,local_168,param_1[0x4f5],uVar8);
        FUN_0198cd90(param_1[0x4f5],local_38[1],0x6641,1);
        FUN_00410f20(local_38);
      }
    }
    if (local_28 != (longlong *)0x0) {
      if (((*PTR_DAT_020023b0 == '\0') && (*PTR_DAT_02003b28 != '\0')) &&
         (cVar2 = FUN_01d3bb80(local_28), cVar2 == '\0')) {
        uVar8 = (**(code **)*local_28)(local_28);
        FUN_00418590(uVar8,&DAT_01cf1390);
        goto LAB_01c6fe3b;
      }
      FUN_0041ddd0(&local_170,PTR_PTR_02001c80);
      local_178 = local_28;
      uVar8 = FUN_017baf50(&local_178,0);
      FUN_017baeb0(&PTR_FUN_017ba4c0,local_170,param_1[0x4f5],uVar8);
      (**(code **)(*(longlong *)param_1[0x4f5] + 0x20))((longlong *)param_1[0x4f5],local_28);
    }
    *(short *)PTR_DAT_02005818 = *(short *)PTR_DAT_02005818 + 1;
    uVar8 = FUN_0198d430(param_1[0x4f5]);
    FUN_01a9a4e0(uVar8,local_4c,&local_50);
    uVar8 = FUN_0198d430(param_1[0x4f5]);
    FUN_01a98210(uVar8,local_60);
    local_178 = (longlong *)FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
    local_a4 = FUN_0064d3a0(param_1[0x142],&local_178);
    uVar8 = FUN_0198d430(param_1[0x4f5]);
    local_1a8 = &local_50;
    FUN_01a982d0(uVar8,local_a4 & 0xffffffff,local_a4._4_4_,local_4c);
    FUN_01b1cd00(local_4c,&local_50);
    if (local_28 != (longlong *)0x0) {
      uVar8 = FUN_0198d430(param_1[0x4f5]);
      (**(code **)(*local_28 + 0xe8))(local_28,uVar8,local_4c[0],local_50);
      FUN_01993f30(param_1[0x4f5],local_28,1,0);
      uVar8 = FUN_0198d430(param_1[0x4f5]);
      (**(code **)(*local_28 + 200))(local_28,uVar8,0xffffffff);
      uVar8 = FUN_0198d430(param_1[0x4f5]);
      (**(code **)(*local_28 + 0xa0))(local_28,uVar8);
    }
    local_1a8 = (int *)((ulonglong)local_1a8 & 0xffffffffffffff00);
    local_1a0 = CONCAT71(local_1a0._1_7_,local_a5 == '\0');
    (**(code **)(*param_1 + 0x2f8))(param_1,local_4c[0],local_50,0);
    FUN_01c6d670(param_1,param_1[0x179]);
    param_1[0x313] = (longlong)local_28;
  }
  FUN_00801e40(param_1,param_1[0x142]);
LAB_01c6fe3b:
  FUN_00414560(&local_170,4);
  FUN_00414560(&local_140,8);
  return;
}

