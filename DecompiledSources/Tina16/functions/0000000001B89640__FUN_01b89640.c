/* Ghidra address: 01b89640 */
/* Ghidra symbol: FUN_01b89640 */


undefined1 FUN_01b89640(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 local_res10 [3];
  undefined1 auStack_258 [32];
  undefined8 local_238;
  int local_21c;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 *local_1a0;
  longlong local_190;
  char local_179;
  undefined8 local_178 [2];
  char local_168;
  undefined1 local_160 [24];
  undefined1 local_148 [40];
  longlong local_120;
  int local_114;
  int local_110;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_e8;
  int local_e4;
  uint local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_99;
  longlong *local_98;
  longlong *local_90;
  undefined1 local_88 [24];
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_38;
  longlong local_30;
  undefined4 local_24;
  undefined2 *local_20;
  
  local_1a0 = auStack_258;
  local_218 = 0;
  local_210 = 0;
  local_200 = 0;
  local_208 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_a8 = 0;
  local_20 = (undefined2 *)0x0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_48 = 0;
  local_50 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00417580(local_178,&DAT_01b7d278);
  FUN_00417580(local_88,&DAT_01b7d278);
  local_98 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_90 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_114 = 0x50;
  local_110 = 0x50;
  local_30 = FUN_010c9d50(&DAT_010c95c8,1);
  (**(code **)(*local_90 + 0xd8))(local_90,local_res10[0]);
  FUN_01a27290(local_90);
  *(undefined2 *)(local_30 + 0x20) = 0x3b;
  local_f4 = 10000;
  local_f8 = 10000;
  local_fc = -10000;
  local_100 = -10000;
  iVar2 = (**(code **)(*local_90 + 0x28))();
  local_e0 = 0;
  if (-1 < iVar2 + -1) {
    do {
      *(uint *)(local_30 + 0x10) = local_e0 + 1;
      (**(code **)(*local_90 + 0x18))(local_90,&local_1a8,local_e0);
      FUN_00414ad0(local_30 + 0x18,local_1a8);
      *(undefined4 *)(local_30 + 8) = 1;
      FUN_010ca8a0(local_30,&local_20,1);
      FUN_010ca040(local_30,&local_1b0,1);
      FUN_0043e130(&local_b8,local_20);
      iVar3 = FUN_00416db0(local_b8,L"WIRE");
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x348) = 0;
        local_e4 = 0;
        do {
          FUN_010cace0(local_30,&local_20,1);
          FUN_010ca040(local_30,&local_1b8,1);
          local_f0 = FUN_0043fc00(local_20);
          local_f0 = local_f0 / 8;
          local_e8 = local_f0 * 8;
          if (local_e4 % 2 == 0) {
            local_58 = CONCAT44(local_58._4_4_,local_e8);
            if (local_e8 < local_f4) {
              local_f4 = local_e8;
            }
            if (local_fc < local_e8) {
              local_fc = local_e8;
            }
          }
          else {
            local_58 = CONCAT44(local_e8,(int)local_58);
            if (local_e8 < local_f8) {
              local_f8 = local_e8;
            }
            if (local_100 < local_e8) {
              local_100 = local_e8;
            }
          }
          local_e4 = local_e4 + 1;
        } while (local_e4 != 4);
        local_e4 = 4;
      }
      else {
        iVar3 = FUN_00416db0(local_b8,L"SYMBOL");
        if (iVar3 == 0) {
          local_e4 = 0;
          do {
            FUN_010ca270(local_30,&local_20,0);
            FUN_010ca040(local_30,&local_1c0);
            if (local_e4 != 0) {
              if (local_e4 == 1) {
                iVar3 = FUN_0043fc00(local_20);
                local_58 = CONCAT44(local_58._4_4_,iVar3);
                if (iVar3 < local_f4) {
                  local_f4 = iVar3;
                }
                if (local_fc < iVar3) {
                  local_fc = iVar3;
                }
              }
              else if (local_e4 == 2) {
                iVar3 = FUN_0043fc00(local_20);
                local_58 = CONCAT44(iVar3,(int)local_58);
                if (iVar3 < local_f8) {
                  local_f8 = iVar3;
                }
                if (local_100 < iVar3) {
                  local_100 = iVar3;
                }
              }
            }
            local_e4 = local_e4 + 1;
          } while (local_e4 != 4);
          local_e4 = 4;
        }
        else {
          iVar3 = FUN_00416db0(local_b8,L"FLAG");
          if (iVar3 == 0) {
            local_e4 = 0;
            do {
              FUN_010ca270(local_30,&local_20,0);
              FUN_010ca040(local_30,&local_1c8);
              if (local_e4 == 0) {
                iVar3 = FUN_0043fc00(local_20);
                local_58 = CONCAT44(local_58._4_4_,iVar3);
                if (iVar3 < local_f4) {
                  local_f4 = iVar3;
                }
                if (local_fc < iVar3) {
                  local_fc = iVar3;
                }
              }
              else if (local_e4 == 1) {
                iVar3 = FUN_0043fc00(local_20);
                local_58 = CONCAT44(iVar3,(int)local_58);
                if (iVar3 < local_f8) {
                  local_f8 = iVar3;
                }
                if (local_100 < iVar3) {
                  local_100 = iVar3;
                }
              }
              else if (local_e4 == 2) {
                cVar1 = FUN_01b8c850(param_1,local_20);
                if ((cVar1 != '\0') && (cVar1 = FUN_010c9e10(local_30,*local_20), cVar1 == '\0')) {
                  FUN_00416ba0(&local_20,&PTR_u_laFloralwhite_01b8ab68);
                }
                FUN_00415dd0(&local_1d0,local_20);
                cVar1 = FUN_01b7fc30(local_1d0);
                if (cVar1 == '\0') {
                  FUN_01b88020(auStack_258,local_20);
                }
              }
              local_e4 = local_e4 + 1;
            } while (local_e4 != 3);
            local_e4 = 3;
          }
          else {
            iVar3 = FUN_00416db0(local_b8,L"TEXT");
            if (iVar3 == 0) {
              FUN_01b88bd0(auStack_258);
            }
          }
        }
      }
      local_e0 = local_e0 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(int *)(param_1 + 0x368) = local_f4;
  *(int *)(param_1 + 0x36c) = local_f8;
  *(int *)(param_1 + 0x370) = local_fc;
  *(int *)(param_1 + 0x374) = local_100;
  local_104 = *(int *)(param_1 + 0x370) - *(int *)(param_1 + 0x368);
  local_108 = *(int *)(param_1 + 0x374) - *(int *)(param_1 + 0x36c);
  *(int *)(param_1 + 0x378) = local_114 - *(int *)(param_1 + 0x368);
  *(int *)(param_1 + 0x37c) = local_110 - *(int *)(param_1 + 0x36c);
  FUN_00414b50(&local_d0,*(undefined8 *)(param_1 + 0x398));
  (**(code **)(*local_98 + 0x88))(local_98,*(undefined8 *)(param_1 + 0x3c8));
  (**(code **)(*local_98 + 0x88))(local_98,*(undefined8 *)(param_1 + 0x3d0));
  cVar1 = FUN_01b84070(param_1);
  if ((cVar1 != '\0') && (iVar2 = (**(code **)(*local_98 + 0x28))(local_98), 0 < iVar2)) {
    local_238 = *(undefined8 *)(param_1 + 0x388);
    FUN_00416cd0(&local_1d8,3,local_d0,&DAT_01b8ab94);
    (**(code **)(*local_98 + 0x100))(local_98,local_1d8);
  }
  iVar2 = (**(code **)(*local_90 + 0x28))();
  local_e0 = 0;
  if (-1 < iVar2 + -1) {
    do {
      *(uint *)(local_30 + 0x10) = local_e0 + 1;
      (**(code **)(*local_90 + 0x18))(local_90,&local_1e0,local_e0);
      FUN_00414ad0(local_30 + 0x18,local_1e0);
      *(undefined4 *)(local_30 + 8) = 1;
      FUN_010ca8a0(local_30,&local_20,1);
      FUN_010ca040(local_30,&local_1e8,1);
      FUN_0043e130(&local_b8,local_20);
      iVar3 = FUN_00416db0(local_b8,L"SYMATTR");
      if ((iVar3 != 0) && (*(int *)(param_1 + 0x350) == 1)) {
        *(undefined4 *)(param_1 + 0x350) = 0;
        FUN_00414480(&local_c8);
        FUN_004170c0(L"opamp",*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10),1);
        FUN_01b86a40(param_1,&local_c0);
      }
      iVar3 = FUN_00416db0(local_b8,L"WIRE");
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x348) = 0;
        local_e4 = 0;
        do {
          FUN_010cace0(local_30,&local_20,1);
          FUN_010ca040(local_30,&local_1f0,1);
          local_e8 = FUN_0043fc00(local_20);
          if (local_e4 % 2 == 0) {
            local_58 = CONCAT44(local_58._4_4_,local_e8);
          }
          else {
            local_58 = CONCAT44(local_e8,(int)local_58);
          }
          if (local_e4 % 2 == 1) {
            local_58 = CONCAT44(local_58._4_4_ + *(int *)(param_1 + 0x37c),
                                (int)local_58 + *(int *)(param_1 + 0x378));
            *(undefined8 *)(param_1 + 0x20 + (longlong)*(int *)(param_1 + 0x348) * 8) = local_58;
            *(int *)(param_1 + 0x348) = *(int *)(param_1 + 0x348) + 1;
          }
          local_e4 = local_e4 + 1;
        } while (local_e4 != 4);
        cVar1 = FUN_01b82390(param_1);
        if (cVar1 == '\0') {
          FUN_01b82420(param_1);
        }
      }
      else {
        iVar3 = FUN_00416db0(local_b8,L"SYMBOL");
        if (iVar3 == 0) {
          local_e4 = 0;
          do {
            FUN_010ca270(local_30,&local_20,0);
            FUN_010ca040(local_30,&local_1f8);
            if (local_e4 == 0) {
              *(undefined4 *)(param_1 + 0x34c) = 1;
              if (*(longlong *)(param_1 + 8) == 0) {
                uVar5 = FUN_01a24f20(&DAT_01a24120,1);
                *(undefined8 *)(param_1 + 8) = uVar5;
              }
              FUN_0043e1a0(&local_208,local_20);
              FUN_01b813d0(&local_200,local_208);
              FUN_00414ad0(*(longlong *)(param_1 + 8) + 0x10,local_200);
              FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10),L"voltage");
            }
            else if (local_e4 == 1) {
              uVar4 = FUN_0043fc00(local_20);
              *(undefined4 *)(*(longlong *)(param_1 + 8) + 8) = uVar4;
            }
            else if (local_e4 == 2) {
              uVar4 = FUN_0043fc00(local_20);
              *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xc) = uVar4;
            }
            else if (local_e4 == 3) {
              FUN_00414ad0(*(longlong *)(param_1 + 8) + 0x18,local_20);
            }
            local_e4 = local_e4 + 1;
          } while (local_e4 != 4);
          local_e4 = 4;
        }
        else {
          iVar3 = FUN_00416db0(local_b8,L"SYMATTR");
          if (iVar3 == 0) {
            *(undefined4 *)(param_1 + 0x350) = 1;
            local_38 = 0;
            local_24 = 0;
            while (cVar1 = FUN_010c9ed0(local_30), cVar1 == '\0') {
              FUN_010ca270(local_30,&local_20,0);
              FUN_010ca040(local_30,&local_210);
              if (local_38 == 0) {
                FUN_00414b50(&local_c8,local_20);
                iVar3 = FUN_00416db0(local_c8,L"SpiceLine");
                if (iVar3 == 0) {
                  FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20),&DAT_01b8ac14);
                  FUN_010ca5b0(local_30,&local_20);
                  FUN_00414ad0(*(longlong *)(param_1 + 8) + 0x38,local_20);
                }
                else {
                  iVar3 = FUN_00416db0(local_c8,L"SpiceLine2");
                  if (iVar3 == 0) {
                    FUN_010ca5b0(local_30,&local_20);
                    FUN_00414ad0(*(longlong *)(param_1 + 8) + 0x40,local_20);
                  }
                }
              }
              if ((local_38 == 1) && (iVar3 = FUN_00416db0(local_c8,L"InstName"), iVar3 == 0)) {
                FUN_00414ad0(*(longlong *)(param_1 + 8) + 0x20,local_20);
                FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20),&DAT_01b8ac14);
              }
              if ((local_38 < 1) || (iVar3 = FUN_00416db0(local_c8,L"Value"), iVar3 != 0)) {
                if ((0 < local_38) && (iVar3 = FUN_00416db0(local_c8,L"Value2"), iVar3 == 0)) {
                  FUN_01b883e0(auStack_258,2);
                }
              }
              else {
                FUN_01b883e0(auStack_258,1);
              }
              local_38 = local_38 + 1;
            }
          }
          else {
            iVar3 = FUN_00416db0(local_b8,L"FLAG");
            if (iVar3 == 0) {
              if (*(longlong *)(param_1 + 8) == 0) {
                uVar5 = FUN_01a24f20(&DAT_01a24120,1);
                *(undefined8 *)(param_1 + 8) = uVar5;
              }
              FUN_01a24fd0(*(undefined8 *)(param_1 + 8));
              local_e4 = 0;
              do {
                FUN_010ca270(local_30,&local_20,0);
                FUN_010ca040(local_30,&local_218);
                if (local_e4 == 0) {
                  FUN_00414ad0(*(longlong *)(param_1 + 8) + 0x10,&DAT_01b8aca0);
                  uVar4 = FUN_0043fc00(local_20);
                  *(undefined4 *)(*(longlong *)(param_1 + 8) + 8) = uVar4;
                }
                else if (local_e4 == 1) {
                  uVar4 = FUN_0043fc00(local_20);
                  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xc) = uVar4;
                }
                local_e4 = local_e4 + 1;
              } while (local_e4 != 3);
              iVar3 = FUN_00416db0(local_20,&LAB_01b8acb4);
              if (iVar3 == 0) {
                FUN_01b86a40(param_1,&local_c0);
              }
            }
            else {
              FUN_00416db0(local_b8,L"TEXT");
            }
          }
        }
      }
      local_e0 = local_e0 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) != 0))
  {
    FUN_01b86a40(param_1,&local_c0);
  }
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x3a0) + 0x10);
  local_e0 = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_120 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x3a0),local_e0);
      iVar3 = *(int *)(local_120 + 0x18);
      if (iVar3 == 1) {
        FUN_01b87c70(param_1,local_120,4,0);
      }
      else {
        local_e4 = 0;
        if (-1 < iVar3 + -1) {
          do {
            FUN_01b87c70(param_1,local_120,3,local_e4);
            local_e4 = local_e4 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      local_e0 = local_e0 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_58._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 0x370) >> 0x20);
  local_58._0_4_ = *(int *)(param_1 + 0x368) + *(int *)(param_1 + 0x378);
  local_58._4_4_ = local_58._4_4_ + *(int *)(param_1 + 0x37c);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x3e0) + 0x10);
  local_21c = iVar2 + -1;
  local_e0 = 0;
  if (-1 < local_21c) {
    do {
      local_21c = iVar2;
      FUN_00417740(local_88,&DAT_01b7d278);
      local_190 = *(longlong *)(param_1 + 0x3e0);
      if (*(uint *)(local_190 + 0x10) <= local_e0) {
        FUN_00594f90();
      }
      FUN_00417c40(local_88,*(longlong *)(local_190 + 8) + (longlong)(int)local_e0 * 0x18,
                   &DAT_01b7d278);
      FUN_00417c40(local_178,local_88,&DAT_01b7d278);
      FUN_00417740(local_88,&DAT_01b7d278);
      FUN_00414b50(&local_b0,local_178[0]);
      local_179 = local_168;
      if (local_168 == '\0') {
        local_58._4_4_ = local_58._4_4_ + 0x28;
        FUN_01b82240(param_1,local_b0,&local_58);
      }
      local_e0 = local_e0 + 1;
      local_21c = local_21c + -1;
      iVar2 = local_21c;
    } while (local_21c != 0);
  }
  if (local_60 != 0) {
    local_58._4_4_ = local_58._4_4_ + 0x28;
    FUN_01b82240(param_1,local_60,&local_58);
    if (local_68 != 0) {
      FUN_01a27e60(local_148,local_68);
      FUN_01b81b30(param_1,local_148);
    }
    if (local_70 != 0) {
      FUN_01a28eb0(local_160,local_70);
      FUN_01b81c10(param_1,local_160);
    }
  }
  local_99 = 1;
  FUN_00410f20(local_90);
  FUN_00410f20(local_30);
  FUN_00410f20(local_98);
  FUN_00414560(&local_218,9);
  FUN_004144d0(&local_1d0);
  FUN_00414560(&local_1c8,5);
  FUN_00417740(local_178,&DAT_01b7d278);
  FUN_00414560(&local_d8,7);
  FUN_00417740(local_88,&DAT_01b7d278);
  FUN_00414560(&local_70,3);
  FUN_00414560(&local_50,2);
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return local_99;
}

