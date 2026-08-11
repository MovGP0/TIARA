/* Ghidra address: 0123dc00 */
/* Ghidra symbol: FUN_0123dc00 */


void FUN_0123dc00(longlong param_1,int param_2,undefined8 param_3,char param_4,char param_5)

{
  undefined8 *puVar1;
  short sVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  undefined8 local_res18;
  char local_res20;
  undefined1 auStack_138 [32];
  uint local_118;
  undefined1 local_110;
  ulonglong local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined4 local_f0;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  char local_91;
  undefined8 local_90;
  longlong *local_88;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  int local_38;
  undefined8 local_30;
  
  local_c0 = auStack_138;
  local_c8 = 0;
  local_e0 = 0;
  local_88 = (longlong *)0x0;
  local_90 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  *(undefined8 *)(param_1 + 0xcc) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(param_1 + 0x68) = 0;
  local_30 = thunk_FUN_040ef593(0);
  local_48 = FUN_0198b2d0(0,&PTR_FUN_01984d18,1,local_30);
  cVar3 = FUN_00440a20(local_res18,1);
  if (cVar3 == '\0') {
    FUN_00441920(&local_e0,local_res18);
    local_d8 = local_e0;
    local_d0 = 0x11;
    FUN_00442f70(&local_c8,L"File not found: %s",&local_d8,0);
    uVar7 = FUN_0044d490(&PTR_FUN_004334c0,1,local_c8);
    FUN_004134c0(uVar7);
  }
  local_118 = local_118 & 0xffffff00;
  lVar8 = FUN_014a74d0(local_res18,local_48,0,0);
  if (lVar8 != 0) {
    local_5c = *(undefined4 *)(param_1 + 0x90);
    local_60 = *(undefined4 *)(param_1 + 0x94);
    local_118 = local_118 & 0xffffff00;
    local_110 = 0;
    local_108 = local_108 & 0xffffffffffffff00;
    local_100 = 0;
    local_f8 = *PTR_DAT_02005310;
    local_f0 = 0x1c7;
    FUN_0198d580(local_48,&local_7c,0,0);
    FUN_0123d820(param_1,local_48,local_5c,local_60);
    FUN_0123d9a0(param_1,param_2,local_48);
    iVar9 = *(int *)(local_48 + 0x10);
    local_38 = 0;
    if (-1 < iVar9 + -1) {
      do {
        local_58 = (longlong *)FUN_00b94e60(local_48,local_38);
        local_91 = '\0';
        cVar3 = FUN_0198a580(local_58);
        if (((cVar3 == '\x03') || (cVar3 = FUN_0198a580(local_58), cVar3 == '\x04')) ||
           (cVar3 = FUN_0198a580(local_58), cVar3 == '\x05')) {
          FUN_017ff310(local_58);
        }
        cVar3 = FUN_0198a580(local_58);
        if (cVar3 == '\x03') {
          if (local_res20 != '\0') {
            local_40 = local_58;
            iVar5 = FUN_00416db0(local_58[0x13],L"s_in");
            if (iVar5 == 0) {
              (**(code **)(*local_58 + 0x1f0))(local_58,0,param_1 + 0xa8,param_1 + 0xac);
              *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
            }
            else {
              iVar5 = FUN_00416db0(local_40[0x13],L"s_out");
              if (iVar5 == 0) {
                (**(code **)(*local_58 + 0x1f0))(local_58,0,param_1 + 0xb4,param_1 + 0xb8);
                *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
              }
              else {
                iVar5 = FUN_00416db0(local_40[0x13],L"s_bp_in1");
                if (iVar5 == 0) {
                  (**(code **)(*local_58 + 0x1f0))(local_58,0,param_1 + 0xe4,param_1 + 0xe8);
                  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
                }
                else {
                  iVar5 = FUN_00416db0(local_40[0x13],L"s_bp_in2");
                  if (iVar5 == 0) {
                    (**(code **)(*local_58 + 0x1f0))(local_58,0,param_1 + 0xf0,param_1 + 0xf4);
                    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
                  }
                }
              }
            }
            FUN_0198b6d0(local_48,local_58);
          }
        }
        else {
          cVar3 = FUN_0198a580(local_58);
          if (cVar3 == '\x04') {
            local_50 = local_58;
            uVar4 = (**(code **)(*local_58 + 0xf8))(local_58);
            local_64 = (uint)uVar4;
            FUN_00414b50(&local_88,local_50[0x13]);
            local_68 = *(int *)((longlong)local_50 + 0xc);
            local_6c = (int)local_50[2];
            sVar2 = *(short *)(*(longlong *)(param_1 + 0x600) + 0x1fa4);
            if ((((((sVar2 == 0x48) || (sVar2 == 0x50)) || (sVar2 == 0x53)) &&
                 (cVar3 = FUN_0198a580(local_58), cVar3 == '\x04')) &&
                (((local_64 == 9 || (local_64 == 10)) || (local_64 == 0xb)))) &&
               ((local_64 != 9 ||
                ((iVar5 = FUN_004170c0(&DAT_0123ed64,local_88,1), iVar5 != 1 &&
                 (iVar5 = FUN_004170c0(&PTR_DAT_0123ed78,local_88,1), iVar5 != 1)))))) {
              FUN_0198b6d0(local_48,local_58);
              local_91 = '\x01';
            }
            if (((*(char *)(*(longlong *)(param_1 + 0x600) + 0x1fc8) != '\0') && (local_64 == 0x56))
               && (*(int *)(*(longlong *)(param_1 + 0x600) + 0x1fcc) != 0)) {
              FUN_0198b6d0(local_48,local_58);
              local_64 = 0x55;
              local_58 = (longlong *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,0x55);
              local_50 = local_58;
              FUN_00414ad0(local_58 + 0x13,local_88);
              FUN_01d38290(local_50,1);
              *(int *)((longlong)local_50 + 0xc) = local_68;
              *(int *)(local_50 + 2) = local_6c;
              iVar5 = local_68 + -8;
              local_118 = local_6c + 0x18;
              local_110 = 3;
              local_108 = 0;
              FUN_0123f7f0(param_1,3,&DAT_0123ed8c,iVar5);
              local_118 = local_6c - 0x18;
              local_110 = 1;
              local_108 = 0;
              FUN_0123f7f0(param_1,3,&DAT_0123eda0,iVar5);
            }
            if ((local_64 == 0x55) || (local_64 == 0x56)) {
              FUN_0123b410(param_2,local_50);
            }
          }
          if (local_91 == '\0') {
            (**(code **)(**(longlong **)(param_1 + 0x50) + 0x20))
                      (*(longlong **)(param_1 + 0x50),local_58);
          }
        }
        if ((local_res20 == '\0') && (cVar3 = FUN_0198a580(local_58), cVar3 == '\x03')) {
          (**(code **)(**(longlong **)(param_1 + 0x50) + 0x20))
                    (*(longlong **)(param_1 + 0x50),local_58);
        }
        local_38 = local_38 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    if ((local_res20 != '\0') && (param_5 == '\0')) {
      if ((*(short *)(*(longlong *)(param_1 + 0x600) + 0x1fa4) == 0x53) ||
         (*(int *)(param_1 + 0x68) == 4)) {
        if ((*(short *)(*(longlong *)(param_1 + 0x600) + 0x1fa4) == 0x53) &&
           (*(int *)(param_1 + 0x68) != 2)) {
          uVar7 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Filter error: jumper error");
          FUN_004134c0(uVar7);
        }
      }
      else {
        uVar7 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Filter error: jumper error");
        FUN_004134c0(uVar7);
      }
    }
    if ((local_res20 != '\0') &&
       (sVar2 = *(short *)(*(longlong *)(param_1 + 0x600) + 0x1fa4), sVar2 != 0x4c)) {
      if (sVar2 == 0x48) {
        if (param_5 == '\0') {
          FUN_0123f720(param_1,param_2,&DAT_0123ee68,&DAT_0123ee7c);
          FUN_0123f720(param_1,param_2,&DAT_0123ee7c,&DAT_0123ee68);
          FUN_0123f720(param_1,param_2,&DAT_0123ee90,&DAT_0123eea4);
          FUN_0123f720(param_1,param_2,&DAT_0123eea4,&DAT_0123ee90);
        }
        else {
          FUN_0123f720(param_1,param_2,&DAT_0123ee68,&DAT_0123ee7c);
          FUN_0123f720(param_1,param_2,&DAT_0123ee7c,&DAT_0123ee68);
        }
      }
      else if (sVar2 == 0x50) {
        FUN_0123f720(param_1,param_2,&DAT_0123ee68,&DAT_0123ee68);
        FUN_0123f720(param_1,param_2,&DAT_0123eea4,&DAT_0123ee90);
        FUN_0123f720(param_1,param_2,&DAT_0123ee90,&DAT_0123ee7c);
        FUN_0123f720(param_1,param_2,&DAT_0123eeb8,&DAT_0123eea4);
        FUN_00414b50(&local_90,&DAT_0123ee7c);
        local_a0 = FUN_0123da30(param_1,local_90);
        local_d8 = CONCAT44(local_d8._4_4_,param_2 + 10);
        local_d0 = 0;
        FUN_00442f70(&local_90,&DAT_0123eecc,&local_d8,0);
        local_118 = *(uint *)(param_1 + 0xe8);
        local_110 = 3;
        local_108 = *(ulonglong *)(local_a0 + 0x10);
        local_50 = (longlong *)FUN_0123f7f0(param_1,10,local_90,*(undefined4 *)(param_1 + 0xe4));
        (**(code **)(*local_50 + 0x1f0))(local_50,1,&local_ac,&local_a8);
        *(undefined4 *)(param_1 + 0x70) = 0;
        *(ulonglong *)(param_1 + 0x120) = CONCAT44(local_a8,local_ac);
        *(undefined4 *)(param_1 + 0x128) = uStack_a4;
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
        local_ac = *(undefined4 *)(param_1 + 0xe4);
        local_a8 = *(undefined4 *)(param_1 + 0xf4);
        puVar1 = (undefined8 *)(param_1 + 0x120 + (longlong)*(int *)(param_1 + 0x70) * 0xc);
        *puVar1 = CONCAT44(local_a8,local_ac);
        *(undefined4 *)(puVar1 + 1) = uStack_a4;
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
        puVar1 = (undefined8 *)(param_1 + 0x120 + (longlong)*(int *)(param_1 + 0x70) * 0xc);
        *puVar1 = *(undefined8 *)(param_1 + 0xf0);
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 0xf8);
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
        FUN_0123fa60(param_1);
      }
      else if (sVar2 == 0x53) {
        FUN_0123f720(param_1,param_2,&DAT_0123ee68,&DAT_0123ee68);
        FUN_0123f720(param_1,param_2,&DAT_0123ee90,&DAT_0123ee90);
        FUN_0123f720(param_1,param_2,&DAT_0123ee7c,&DAT_0123ee7c);
        FUN_0123f720(param_1,param_2,&DAT_0123eea4,&DAT_0123eea4);
        FUN_0123f720(param_1,param_2,L"Rp20",L"Rp20");
        FUN_0123f720(param_1,param_2,&DAT_0123eef8,&DAT_0123eef8);
        if (*(double *)(*(longlong *)(param_1 + 0x30) + 0x25b0 + (longlong)param_2 * 8) == 0.0) {
          FUN_0123f720(param_1,param_2,&DAT_0123ef20,&DAT_0123ef20);
        }
        else {
          FUN_0123f720(param_1,param_2,&DAT_0123ef0c,&DAT_0123ef20);
        }
      }
      else {
        uVar7 = FUN_0044d490(&PTR_FUN_004334c0,1,&DAT_0123ef34);
        FUN_004134c0(uVar7);
      }
    }
    uVar6 = FUN_0123b3f0(local_74 - local_7c);
    *(undefined4 *)(param_1 + 0x78) = uVar6;
    iVar9 = FUN_0123b3f0(local_70 - local_78);
    *(int *)(param_1 + 0x7c) = iVar9 + 0x10;
    if (*(int *)(param_1 + 0x84) < *(int *)(param_1 + 0x78)) {
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x78);
    }
    if (*(int *)(param_1 + 0x88) < *(int *)(param_1 + 0x7c)) {
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x7c);
    }
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + *(int *)(param_1 + 0x78);
    if ((local_res20 != '\0') &&
       (*(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1, *(int *)(param_1 + 0x6c) == 4)) {
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0xb4);
      *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0xbc);
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x88) + 8;
      *(undefined1 *)(param_1 + 0x5f8) = 1;
    }
    FUN_00419260(param_1 + 0x5d0,&DAT_0123a208,1,(longlong)(param_2 + 10));
    FUN_00419260(param_1 + 0x5d8,&DAT_0123a208,1,(longlong)(param_2 + 10));
    puVar1 = (undefined8 *)
             (*(longlong *)(param_1 + 0x5d0) + (longlong)*(int *)(param_1 + 0x74) * 0xc);
    *puVar1 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 0xb0);
    puVar1 = (undefined8 *)
             (*(longlong *)(param_1 + 0x5d8) + (longlong)*(int *)(param_1 + 0x74) * 0xc);
    *puVar1 = *(undefined8 *)(param_1 + 0xb4);
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 0xbc);
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  }
  thunk_FUN_041a9b5c(0,local_30);
  iVar9 = *(int *)(*(longlong *)(param_1 + 0x58) + 0x10);
  local_38 = 0;
  if (-1 < iVar9 + -1) {
    do {
      uVar7 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x58),local_38);
      FUN_00410f20(uVar7);
      local_38 = local_38 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))(*(longlong **)(param_1 + 0x58));
  iVar9 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x10);
  local_38 = 0;
  if (-1 < iVar9 + -1) {
    do {
      uVar7 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x60),local_38);
      FUN_00410f20(uVar7);
      local_38 = local_38 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))(*(longlong **)(param_1 + 0x60));
  FUN_00414480(&local_e0);
  FUN_00414480(&local_c8);
  FUN_00414560(&local_90,2);
  FUN_00414480(&local_res18);
  return;
}

