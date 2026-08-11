/* Ghidra address: 01a25a40 */
/* Ghidra symbol: FUN_01a25a40 */


undefined8 FUN_01a25a40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_res10 [3];
  undefined1 auStack_148 [32];
  undefined4 local_128;
  uint local_120;
  undefined1 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined1 local_ae;
  char local_ad;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined4 local_64;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  longlong *local_20;
  
  local_c0 = auStack_148;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_30 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_28 = FUN_010c9d50(&DAT_010c95c8,1);
  (**(code **)(*local_20 + 0xd8))(local_20,local_res10[0]);
  cVar2 = FUN_01a251a0(param_1,local_res10[0]);
  if (cVar2 == '\0') {
    FUN_01a26530(0,local_c0);
  }
  else {
    uVar5 = FUN_00c3c560(&PTR_FUN_00c39d20,1);
    *(undefined8 *)(param_1 + 0x380) = uVar5;
    FUN_00441920(&local_58,local_res10[0]);
    *(undefined4 *)(*(longlong *)(param_1 + 0x380) + 8) = 0;
    uVar5 = FUN_00c3d400(&LAB_00c3a6d0,1);
    *(undefined8 *)(param_1 + 0x388) = uVar5;
    FUN_00c3f030(uVar5,*(undefined8 *)(param_1 + 0x380));
    FUN_00414ad0(*(longlong *)(param_1 + 0x388) + 0x10,local_58);
    *(undefined1 *)(*(longlong *)(param_1 + 0x388) + 0xd) = 1;
    iVar3 = (**(code **)(*local_20 + 0x28))();
    local_5c = 0;
    if (-1 < iVar3 + -1) {
      do {
        (**(code **)(*local_20 + 0x18))(local_20,&local_c8,local_5c);
        FUN_00414ad0(local_28 + 0x18,local_c8);
        *(undefined4 *)(local_28 + 8) = 1;
        FUN_010ca8a0(local_28,&local_40,1);
        FUN_010ca040(local_28,&local_d0,1);
        FUN_0043e130(&local_48,local_40);
        iVar4 = FUN_00416db0(local_48,L"PINATTR");
        if ((iVar4 != 0) && (*(int *)(param_1 + 0x348) == 1)) {
          *(undefined4 *)(param_1 + 0x348) = 0;
          local_ae = 0;
          lVar1 = *(longlong *)(param_1 + 0x10);
          local_128 = *(undefined4 *)(lVar1 + 0x14);
          local_120 = local_120 & 0xffffff00;
          local_118 = 0;
          local_110 = 0;
          local_108 = 0;
          FUN_01a26900(param_1,*(undefined8 *)(param_1 + 0x380),*(undefined8 *)(lVar1 + 8),
                       *(undefined4 *)(lVar1 + 0x10));
        }
        iVar4 = FUN_00416db0(local_48,L"LINE");
        if (iVar4 == 0) {
          *(undefined4 *)(param_1 + 0x340) = 0;
          local_60 = 0;
          do {
            FUN_010ca270(local_28,&local_40,0);
            FUN_010ca040(local_28,&local_d8);
            if (0 < local_60) {
              local_64 = FUN_0043fc00(local_40);
            }
            local_8c = local_60 + -1;
            if (-1 < local_8c) {
              if (local_8c % 2 == 0) {
                local_9c = local_64;
              }
              else {
                local_98 = local_64;
              }
            }
            iVar4 = local_8c / 2;
            if (iVar4 == 0) {
              local_a4 = FUN_01a26640(param_1,&local_9c);
            }
            if (iVar4 == 1) {
              local_ac = FUN_01a26640(param_1,&local_9c);
            }
            local_60 = local_60 + 1;
          } while (local_60 != 5);
          local_128 = (undefined4)local_ac;
          local_120 = local_ac._4_4_;
          FUN_01a267b0(param_1,*(undefined8 *)(param_1 + 0x380),local_a4 & 0xffffffff,local_a4._4_4_
                      );
        }
        else {
          iVar4 = FUN_00416db0(local_48,L"RECTANGLE");
          if (iVar4 == 0) {
            *(undefined4 *)(param_1 + 0x340) = 0;
            local_60 = 0;
            do {
              FUN_010ca270(local_28,&local_40,0);
              FUN_010ca040(local_28,&local_e0);
              if (0 < local_60) {
                local_64 = FUN_0043fc00(local_40);
              }
              local_8c = local_60 + -1;
              if (-1 < local_8c) {
                if (local_8c % 2 == 0) {
                  local_9c = local_64;
                }
                else {
                  local_98 = local_64;
                }
              }
              iVar4 = local_8c / 2;
              if (iVar4 == 0) {
                local_a4 = FUN_01a26640(param_1,&local_9c);
              }
              if (iVar4 == 1) {
                local_ac = FUN_01a26640(param_1,&local_9c);
              }
              local_60 = local_60 + 1;
            } while (local_60 != 5);
            local_128 = (undefined4)local_ac;
            local_120 = local_ac._4_4_;
            FUN_01a26680(param_1,*(undefined8 *)(param_1 + 0x380),local_a4 & 0xffffffff,
                         local_a4._4_4_);
          }
          else {
            iVar4 = FUN_00416db0(local_48,L"CIRCLE");
            if (iVar4 == 0) {
              *(undefined4 *)(param_1 + 0x340) = 0;
              local_60 = 0;
              do {
                FUN_010ca270(local_28,&local_40,0);
                FUN_010ca040(local_28,&local_e8);
                if (0 < local_60) {
                  local_64 = FUN_0043fc00(local_40);
                }
                local_8c = local_60 + -1;
                if (-1 < local_8c) {
                  if (local_8c % 2 == 0) {
                    local_9c = local_64;
                  }
                  else {
                    local_98 = local_64;
                  }
                }
                iVar4 = local_8c / 2;
                if (iVar4 == 0) {
                  local_a4 = FUN_01a26640(param_1,&local_9c);
                }
                if (iVar4 == 1) {
                  local_ac = FUN_01a26640(param_1,&local_9c);
                }
                local_60 = local_60 + 1;
              } while (local_60 != 5);
              local_128 = (undefined4)local_ac;
              local_120 = local_ac._4_4_;
              FUN_01a26860(param_1,*(undefined8 *)(param_1 + 0x380),local_a4 & 0xffffffff,
                           local_a4._4_4_);
            }
            else {
              iVar4 = FUN_00416db0(local_48,&DAT_01a2661c);
              if (iVar4 == 0) {
                if (*(longlong *)(param_1 + 0x10) == 0) {
                  uVar5 = FUN_01a24e80(&DAT_01a243f8,1);
                  *(undefined8 *)(param_1 + 0x10) = uVar5;
                }
                else {
                  FUN_00414480(*(longlong *)(param_1 + 0x10) + 8);
                }
                local_60 = 0;
                do {
                  FUN_010ca270(local_28,&local_40,0);
                  FUN_010ca040(local_28,&local_f0);
                  if ((-1 < local_60) && (local_60 < 2)) {
                    local_64 = FUN_0043fc00(local_40);
                  }
                  local_8c = local_60;
                  if ((-1 < local_60) && (local_60 < 2)) {
                    if (local_60 % 2 == 0) {
                      local_9c = local_64;
                    }
                    else {
                      local_98 = local_64;
                    }
                  }
                  local_60 = local_60 + 1;
                } while (local_60 != 4);
                uVar5 = FUN_01a26640(param_1,&local_9c);
                *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10) = uVar5;
              }
              else {
                iVar4 = FUN_00416db0(local_48,L"PINATTR");
                if (iVar4 == 0) {
                  local_ad = '\0';
                  local_60 = 0;
                  do {
                    FUN_010ca270(local_28,&local_40,0);
                    FUN_010ca040(local_28,&local_f8);
                    if ((local_60 == 0) && (iVar4 = FUN_00416db0(local_40,L"PinName"), iVar4 == 0))
                    {
                      *(undefined4 *)(param_1 + 0x348) = 1;
                    }
                    else if ((local_60 == 0) &&
                            (iVar4 = FUN_00416db0(local_40,L"PinName"), iVar4 != 0)) {
                      local_ad = '\x01';
                    }
                    else if (((local_60 == 1) && (*(int *)(param_1 + 0x348) == 1)) &&
                            (local_ad == '\0')) {
                      FUN_00414ad0(*(longlong *)(param_1 + 0x10) + 8,local_40);
                    }
                    local_60 = local_60 + 1;
                  } while (local_60 != 2);
                }
              }
            }
          }
        }
        local_5c = local_5c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (*(int *)(param_1 + 0x348) == 1) {
      *(undefined4 *)(param_1 + 0x348) = 0;
      local_ae = 0;
      lVar1 = *(longlong *)(param_1 + 0x10);
      local_128 = *(undefined4 *)(lVar1 + 0x14);
      local_120 = local_120 & 0xffffff00;
      local_118 = 0;
      local_110 = 0;
      local_108 = 0;
      FUN_01a26900(param_1,*(undefined8 *)(param_1 + 0x380),*(undefined8 *)(lVar1 + 8),
                   *(undefined4 *)(lVar1 + 0x10));
    }
    local_90 = *(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x358);
    if (local_90 == 0) {
      local_90 = 0x20;
    }
    local_94 = *(int *)(param_1 + 0x364) - *(int *)(param_1 + 0x35c);
    if (local_94 == 0) {
      local_94 = 0x20;
    }
    FUN_01a26a00(param_1,local_90,local_94,local_58);
    local_30 = *(undefined8 *)(param_1 + 0x388);
    FUN_00410f20(local_20);
    FUN_00410f20(local_28);
  }
  FUN_00414560(&local_f8,7);
  FUN_00414560(&local_58,5);
  FUN_00414480(local_res10);
  return local_30;
}

