/* Ghidra address: 01a251a0 */
/* Ghidra symbol: FUN_01a251a0 */


undefined1 FUN_01a251a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  wchar_t *local_f0;
  wchar_t *local_e8;
  wchar_t *local_e0;
  wchar_t *local_d8;
  wchar_t *local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  bool local_a9;
  wchar_t *local_a8;
  undefined1 local_95;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_5c;
  int local_58;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29;
  longlong local_28;
  longlong *local_20;
  
  local_c0 = auStack_118;
  local_f8 = (wchar_t *)0x0;
  local_f0 = (wchar_t *)0x0;
  local_e8 = (wchar_t *)0x0;
  local_e0 = (wchar_t *)0x0;
  local_d8 = (wchar_t *)0x0;
  local_d0 = (wchar_t *)0x0;
  local_c8 = (wchar_t *)0x0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_94 = 0;
  local_90 = 0;
  local_95 = 0;
  local_28 = FUN_010c9d50(&DAT_010c95c8,1);
  (**(code **)(*local_20 + 0xd8))(local_20,local_res10[0]);
  local_68 = 10000;
  local_6c = 10000;
  local_70 = -10000;
  local_74 = -10000;
  iVar1 = (**(code **)(*local_20 + 0x28))();
  local_54 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*local_20 + 0x18))(local_20,&local_c8,local_54);
      FUN_00414ad0(local_28 + 0x18,local_c8);
      *(undefined4 *)(local_28 + 8) = 1;
      FUN_010ca8a0(local_28,&local_40,1);
      FUN_010ca040(local_28,&local_d0,1);
      FUN_0043e130(&local_48,local_40);
      iVar2 = FUN_00416db0(local_48,L"LINE");
      if (iVar2 == 0) {
        local_95 = 1;
        *(undefined4 *)(param_1 + 0x340) = 0;
        local_58 = 0;
        do {
          FUN_010ca270(local_28,&local_40,0);
          FUN_010ca040(local_28,&local_d8);
          if (0 < local_58) {
            local_5c = FUN_0043fc00(local_40);
          }
          local_84 = local_58 + -1;
          if (-1 < local_84) {
            if (local_84 % 2 == 0) {
              local_8c = local_5c;
              if (local_5c < local_68) {
                local_68 = local_5c;
              }
              if (local_70 < local_5c) {
                local_70 = local_5c;
              }
            }
            else {
              local_88 = local_5c;
              if (local_5c < local_6c) {
                local_6c = local_5c;
              }
              if (local_74 < local_5c) {
                local_74 = local_5c;
              }
            }
          }
          local_58 = local_58 + 1;
        } while (local_58 != 5);
        local_58 = 5;
      }
      else {
        iVar2 = FUN_00416db0(local_48,L"RECTANGLE");
        if (iVar2 == 0) {
          local_95 = 1;
          *(undefined4 *)(param_1 + 0x340) = 0;
          local_58 = 0;
          do {
            FUN_010ca270(local_28,&local_40,0);
            FUN_010ca040(local_28,&local_e0);
            if (0 < local_58) {
              local_5c = FUN_0043fc00(local_40);
            }
            local_84 = local_58 + -1;
            if (-1 < local_84) {
              if (local_84 % 2 == 0) {
                local_8c = local_5c;
                if (local_5c < local_68) {
                  local_68 = local_5c;
                }
                if (local_70 < local_5c) {
                  local_70 = local_5c;
                }
              }
              else {
                local_88 = local_5c;
                if (local_5c < local_6c) {
                  local_6c = local_5c;
                }
                if (local_74 < local_5c) {
                  local_74 = local_5c;
                }
              }
            }
            local_58 = local_58 + 1;
          } while (local_58 != 5);
          local_58 = 5;
        }
        else {
          iVar2 = FUN_00416db0(local_48,L"CIRCLE");
          if (iVar2 == 0) {
            local_95 = 1;
            *(undefined4 *)(param_1 + 0x340) = 0;
            local_58 = 0;
            do {
              FUN_010ca270(local_28,&local_40,0);
              FUN_010ca040(local_28,&local_e8);
              if (0 < local_58) {
                local_5c = FUN_0043fc00(local_40);
              }
              local_84 = local_58 + -1;
              if (-1 < local_84) {
                if (local_84 % 2 == 0) {
                  local_8c = local_5c;
                  if (local_5c < local_68) {
                    local_68 = local_5c;
                  }
                  if (local_70 < local_5c) {
                    local_70 = local_5c;
                  }
                }
                else {
                  local_88 = local_5c;
                  if (local_5c < local_6c) {
                    local_6c = local_5c;
                  }
                  if (local_74 < local_5c) {
                    local_74 = local_5c;
                  }
                }
              }
              local_58 = local_58 + 1;
            } while (local_58 != 4);
            local_58 = 4;
          }
          else {
            iVar2 = FUN_00416db0(local_48,&DAT_01a25a10);
            if (iVar2 == 0) {
              local_95 = 1;
              local_58 = 0;
              do {
                FUN_010ca270(local_28,&local_40,0);
                FUN_010ca040(local_28,&local_f0);
                if ((-1 < local_58) && (local_58 < 2)) {
                  local_5c = FUN_0043fc00(local_40);
                }
                local_84 = local_58;
                if ((-1 < local_58) && (local_58 < 2)) {
                  if (local_58 % 2 == 0) {
                    local_8c = local_5c;
                    if (local_5c < local_68) {
                      local_68 = local_5c;
                    }
                    if (local_70 < local_5c) {
                      local_70 = local_5c;
                    }
                  }
                  else {
                    local_88 = local_5c;
                    if (local_5c < local_6c) {
                      local_6c = local_5c;
                    }
                    if (local_74 < local_5c) {
                      local_74 = local_5c;
                    }
                  }
                }
                local_58 = local_58 + 1;
              } while (local_58 != 4);
            }
          }
        }
      }
      local_54 = local_54 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00441920(&local_f8,local_res10[0]);
  local_a8 = local_f8;
  if (local_f8 == L"zener.asy") {
    local_a9 = true;
  }
  else if (local_f8 == (wchar_t *)0x0) {
    local_a9 = false;
  }
  else {
    iVar1 = FUN_0043e420(local_f8,L"zener.asy");
    local_a9 = iVar1 == 0;
  }
  if (local_a9 != false) {
    local_68 = local_68 + -4;
    local_70 = local_70 + 4;
  }
  *(int *)(param_1 + 0x358) = local_68;
  *(int *)(param_1 + 0x35c) = local_6c;
  *(int *)(param_1 + 0x360) = local_70;
  *(int *)(param_1 + 0x364) = local_74;
  *(int *)(param_1 + 0x368) = local_94 - *(int *)(param_1 + 0x358);
  *(int *)(param_1 + 0x36c) = local_90 - *(int *)(param_1 + 0x35c);
  local_29 = local_95;
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00414560(&local_f8,7);
  FUN_00414560(&local_50,4);
  FUN_00414480(local_res10);
  return local_29;
}

