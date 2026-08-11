/* Ghidra address: 01481580 */
/* Ghidra symbol: FUN_01481580 */


void FUN_01481580(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined1 *local_190;
  longlong local_188;
  undefined8 local_180;
  bool local_171;
  undefined8 *local_170;
  longlong local_168;
  undefined8 local_160;
  longlong local_158;
  longlong local_150;
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
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  char local_a9;
  undefined8 *local_a8;
  undefined8 *local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  uint local_80;
  longlong local_78;
  undefined4 local_70;
  int local_6c;
  int local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_190 = auStack_1b8;
  local_198 = (undefined8 *)0x0;
  local_78 = 0;
  local_a0 = (undefined8 *)0x0;
  local_a8 = (undefined8 *)0x0;
  local_30[0] = 0;
  FUN_00417580(&local_88,&DAT_01483b38);
  FUN_00414480(local_30);
  FUN_005d10a0(param_1,0,0);
  FUN_005d1300(local_30,param_1);
  uVar3 = FUN_00f30500(local_30[0],0,0);
  local_38 = FUN_004113f0(uVar3,&LAB_00f23b78);
  FUN_00414480(local_30);
  local_40 = FUN_014860a0(local_38,L"graph");
  local_50 = FUN_014860c0(local_40,L"components");
  local_90 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b67b0(local_90,0);
  *(undefined1 *)((longlong)local_90 + 0x49) = 0;
  iVar5 = *(int *)(*(longlong *)(local_50 + 0x10) + 0x10);
  local_54 = 0;
  if (-1 < iVar5 + -1) {
    do {
      local_f0 = *(longlong *)(local_50 + 0x10);
      if (*(uint *)(local_f0 + 0x10) <= local_54) {
        FUN_00594f90();
      }
      local_48 = FUN_004113f0(*(undefined8 *)
                               (*(longlong *)(local_f0 + 8) + (longlong)(int)local_54 * 8),
                              &LAB_00f23b78);
      FUN_014861c0(local_48,&local_a0,L"label");
      local_98 = FUN_014860c0(local_48,L"pins");
      iVar6 = *(int *)(*(longlong *)(local_98 + 0x10) + 0x10);
      local_58 = 0;
      if (-1 < iVar6 + -1) {
        do {
          local_f8 = *(longlong *)(local_98 + 0x10);
          if (*(uint *)(local_f8 + 0x10) <= local_58) {
            FUN_00594f90();
          }
          uVar3 = FUN_004113f0(*(undefined8 *)
                                (*(longlong *)(local_f8 + 8) + (longlong)(int)local_58 * 8),
                               &LAB_00f22f08);
          local_6c = FUN_00f2fcb0(uVar3);
          FUN_00414b50(&local_88,local_a0);
          local_80 = local_58;
          local_a9 = '\0';
          local_100 = local_78;
          if (local_78 != 0) {
            local_100 = *(longlong *)(local_78 + -8);
          }
          iVar7 = (int)local_100;
          local_5c = 0;
          if (-1 < iVar7 + -1) {
            do {
              lVar4 = (longlong)(int)local_5c;
              if (*(int *)(local_78 + lVar4 * 0x10) == local_6c) {
                local_108 = *(longlong *)(local_78 + 8 + lVar4 * 0x10);
                local_110 = local_108;
                if (local_108 != 0) {
                  local_110 = *(longlong *)(local_108 + -8);
                }
                FUN_00419260(local_78 + 8 + lVar4 * 0x10,&DAT_014814a8,1,local_110 + 1);
                local_118 = *(longlong *)(local_78 + 8 + lVar4 * 0x10);
                local_120 = local_118;
                if (local_118 != 0) {
                  local_120 = *(longlong *)(local_118 + -8);
                }
                FUN_00417c40(*(longlong *)(local_78 + 8 + lVar4 * 0x10) + (local_120 + -1) * 0x10,
                             &local_88,&DAT_01483b38);
                local_a9 = '\x01';
                break;
              }
              local_5c = local_5c + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          if (local_a9 == '\0') {
            local_128 = local_78;
            if (local_78 != 0) {
              local_128 = *(longlong *)(local_78 + -8);
            }
            FUN_00419260(&local_78,&DAT_01481548,1,local_128 + 1);
            local_130 = local_78;
            if (local_78 != 0) {
              local_130 = *(longlong *)(local_78 + -8);
            }
            local_5c = (int)local_130 - 1;
            *(int *)(local_78 + (longlong)(int)local_5c * 0x10) = local_6c;
            FUN_00419260(local_78 + 8 + (longlong)(int)local_5c * 0x10,&DAT_014814a8,1,1);
            FUN_00417c40(*(undefined8 *)(local_78 + 8 + (longlong)(int)local_5c * 0x10),&local_88,
                         &DAT_01483b38);
          }
          local_58 = local_58 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_54 = local_54 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_b8 = FUN_00f309b0(&LAB_00f23b78,1);
  local_c0 = FUN_00f309b0(&LAB_00f23b78,1);
  iVar5 = *(int *)(*(longlong *)(local_50 + 0x10) + 0x10);
  local_54 = 0;
  if (-1 < iVar5 + -1) {
    do {
      local_138 = *(longlong *)(local_50 + 0x10);
      if (*(uint *)(local_138 + 0x10) <= local_54) {
        FUN_00594f90();
      }
      local_48 = FUN_004113f0(*(undefined8 *)
                               (*(longlong *)(local_138 + 8) + (longlong)(int)local_54 * 8),
                              &LAB_00f23b78);
      FUN_014861c0(local_48,&local_a0,L"label");
      local_98 = FUN_014860c0(local_48,L"pins");
      FUN_01486270(local_48,L"classID");
      (**(code **)(*local_90 + 0x90))(local_90);
      iVar6 = *(int *)(*(longlong *)(local_98 + 0x10) + 0x10);
      local_58 = 0;
      if (-1 < iVar6 + -1) {
        do {
          local_140 = *(longlong *)(local_98 + 0x10);
          if (*(uint *)(local_140 + 0x10) <= local_58) {
            FUN_00594f90();
          }
          uVar3 = FUN_004113f0(*(undefined8 *)
                                (*(longlong *)(local_140 + 8) + (longlong)(int)local_58 * 8),
                               &LAB_00f22f08);
          local_6c = FUN_00f2fcb0(uVar3);
          local_148 = local_78;
          if (local_78 != 0) {
            local_148 = *(longlong *)(local_78 + -8);
          }
          iVar7 = (int)local_148;
          local_5c = 0;
          if (-1 < iVar7 + -1) {
            do {
              if (*(int *)(local_78 + (longlong)(int)local_5c * 0x10) == local_6c) {
                local_150 = *(longlong *)(local_78 + 8 + (longlong)(int)local_5c * 0x10);
                local_158 = local_150;
                if (local_150 != 0) {
                  local_158 = *(longlong *)(local_150 + -8);
                }
                iVar7 = (int)local_158;
                local_60 = 0;
                if (-1 < iVar7 + -1) {
                  do {
                    FUN_00414b50(&local_a8,
                                 *(undefined8 *)
                                  (*(longlong *)(local_78 + 8 + (longlong)(int)local_5c * 0x10) +
                                  (longlong)local_60 * 0x10));
                    iVar1 = FUN_00416db0(local_a8,local_a0);
                    if ((iVar1 != 0) &&
                       (iVar1 = (**(code **)(*local_90 + 0xb0))(local_90,local_a8), iVar1 == -1)) {
                      (**(code **)(*local_90 + 0x78))(local_90,local_a8);
                    }
                    local_60 = local_60 + 1;
                    iVar7 = iVar7 + -1;
                  } while (iVar7 != 0);
                }
                break;
              }
              local_5c = local_5c + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          local_58 = local_58 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_d0 = FUN_00f33100(&LAB_00f256b8,1);
      local_d8 = FUN_00f33100(&LAB_00f256b8,1);
      iVar6 = (**(code **)(*local_90 + 0x28))();
      local_58 = 0;
      if (-1 < iVar6 + -1) {
        do {
          (**(code **)(*local_90 + 0x18))(local_90,&local_a8,local_58);
          local_160 = FUN_00f2e9d0(&LAB_00f22a90,1,local_a8);
          FUN_00f335b0(local_d0,local_160);
          iVar7 = *(int *)(*(longlong *)(local_50 + 0x10) + 0x10);
          local_5c = 0;
          if (-1 < iVar7 + -1) {
            do {
              local_168 = *(longlong *)(local_50 + 0x10);
              if (*(uint *)(local_168 + 0x10) <= local_5c) {
                FUN_00594f90();
              }
              local_48 = FUN_004113f0(*(undefined8 *)
                                       (*(longlong *)(local_168 + 8) + (longlong)(int)local_5c * 8),
                                      &LAB_00f23b78);
              FUN_014861c0(local_48,&local_198,L"label");
              local_170 = local_198;
              if (local_198 == local_a8) {
                local_171 = true;
              }
              else if ((local_198 == (undefined8 *)0x0) || (local_a8 == (undefined8 *)0x0)) {
                local_171 = false;
              }
              else {
                iVar1 = FUN_0043e420(local_198,local_a8);
                local_171 = iVar1 == 0;
              }
              if (local_171 != false) {
                local_70 = FUN_01486270(local_48,L"classID");
                local_180 = FUN_00f2f8e0(&LAB_00f22f08,1,local_70);
                FUN_00f335b0(local_d8,local_180);
                break;
              }
              local_5c = local_5c + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          local_58 = local_58 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_c8 = FUN_00f309b0(&LAB_00f23b78,1);
      FUN_00f30e70(local_c8,L"comps",local_d0);
      FUN_00f30e70(local_c8,L"classIDs",local_d8);
      uVar2 = (**(code **)(*local_90 + 0x28))(local_90);
      uVar3 = FUN_00f2f8e0(&LAB_00f22f08,1,uVar2);
      FUN_00f30e70(local_c8,L"pin_count",uVar3);
      local_188 = *(longlong *)(local_50 + 0x10);
      if (*(uint *)(local_188 + 0x10) <= local_54) {
        FUN_00594f90();
      }
      uVar2 = FUN_01486270(*(undefined8 *)
                            (*(longlong *)(local_188 + 8) + (longlong)(int)local_54 * 8),L"classID")
      ;
      uVar3 = FUN_00f2f8e0(&LAB_00f22f08,1,uVar2);
      FUN_00f30e70(local_c8,L"classID",uVar3);
      FUN_00f30e70(local_c0,local_a0,local_c8);
      local_54 = local_54 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00f30e70(local_b8,L"connections",local_c0);
  FUN_0147d210(param_2,local_b8);
  FUN_00410f20(local_90);
  FUN_00410f20(local_b8);
  FUN_00410f20(local_38);
  FUN_00414480(&local_198);
  FUN_00414560(&local_a8,2);
  FUN_00417740(&local_88,&DAT_01483b38);
  FUN_00419430(&local_78,&DAT_01481548);
  FUN_00414480(local_30);
  return;
}

