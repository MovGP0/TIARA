/* Ghidra address: 00450070 */
/* Ghidra symbol: FUN_00450070 */


longlong *
FUN_00450070(longlong *param_1,longlong param_2,longlong param_3,undefined2 *param_4,byte param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_108 [32];
  int local_e8;
  undefined1 local_e0;
  undefined8 local_d0;
  longlong local_c8;
  undefined1 *local_c0;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  bool local_a1;
  longlong local_a0;
  int local_98;
  int local_94;
  int local_90;
  char local_81;
  undefined2 *local_80;
  longlong local_78;
  longlong local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  longlong local_58;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  longlong local_30;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_c0 = auStack_108;
  local_d0 = 0;
  local_c8 = 0;
  local_28 = 0;
  local_30 = 0;
  local_58 = 0;
  local_20[0] = 0;
  local_90 = 0;
  if (param_3 != 0) {
    local_90 = *(int *)(param_3 + -4);
  }
  local_5c = local_90;
  local_94 = 0;
  if (param_2 != 0) {
    local_94 = *(int *)(param_2 + -4);
  }
  local_64 = local_94;
  if ((local_90 == 0) || (local_94 == 0)) {
    local_c0 = auStack_108;
    FUN_00414ad0(param_1,param_2);
  }
  else {
    if ((param_5 & 2) == 0) {
      FUN_00414b50(&local_30,param_3);
      FUN_00414b50(&local_28,param_2);
    }
    else {
      local_c0 = auStack_108;
      FUN_0043e5a0(&local_30,param_3);
      local_98 = 0;
      if (local_30 != 0) {
        local_98 = *(int *)(local_30 + -4);
      }
      local_5c = local_98;
      FUN_0043e600(&local_c8,param_3);
      local_a0 = local_c8;
      if (local_30 == local_c8) {
        local_a1 = true;
      }
      else if ((local_30 == 0) || (local_c8 == 0)) {
        local_a1 = false;
      }
      else {
        iVar1 = FUN_0043e210(local_30,local_c8);
        local_a1 = iVar1 == 0;
      }
      if (local_a1 == false) {
        FUN_0043e5a0(&local_28,param_2);
        local_a8 = 0;
        if (local_28 != 0) {
          local_a8 = *(int *)(local_28 + -4);
        }
        local_64 = local_a8;
      }
      else {
        FUN_00414b50(&local_28,param_2);
      }
    }
    local_ac = 0;
    if (local_28 != 0) {
      local_ac = *(int *)(local_28 + -4);
    }
    local_b0 = 0;
    if (param_2 != 0) {
      local_b0 = *(int *)(param_2 + -4);
    }
    if (local_ac == local_b0) {
      local_34 = 1;
      local_4c = 0;
      local_68 = 0;
      local_81 = (param_5 & 1) == 0;
      do {
        local_34 = FUN_004170c0(local_30,local_28,local_34);
        if (local_34 == 0) break;
        local_4c = local_4c + 1;
        if (local_68 < local_4c) {
          if (local_68 == 0) {
            local_68 = 0x20;
          }
          else {
            local_68 = local_68 * 2;
          }
          FUN_00419260(&local_58,&DAT_00450030,1,(longlong)local_68);
        }
        *(int *)(local_58 + (longlong)(local_4c + -1) * 4) = local_34 + -1;
        local_34 = local_34 + local_5c;
      } while (local_81 == '\0');
      if (local_4c < 1) {
        FUN_00414ad0(param_1,param_2);
      }
      else {
        local_b8 = 0;
        if (param_4 != (undefined2 *)0x0) {
          local_b8 = *(int *)(param_4 + -2);
        }
        local_60 = local_b8;
        local_80 = param_4;
        local_78 = param_2;
        if (local_b8 == local_5c) {
          FUN_004169f0(param_1,local_64);
          local_70 = *param_1;
          FUN_00409a70(local_78,local_70,(longlong)(local_64 * 2));
          if (local_60 == 1) {
            local_38 = 0;
            iVar1 = local_4c;
            if (-1 < local_4c + -1) {
              do {
                *(undefined2 *)
                 (local_70 + (longlong)*(int *)(local_58 + (longlong)local_38 * 4) * 2) = *local_80;
                local_38 = local_38 + 1;
                iVar1 = iVar1 + -1;
              } while (iVar1 != 0);
            }
          }
          else if (local_60 < 9) {
            local_38 = 0;
            iVar1 = local_4c;
            if (-1 < local_4c + -1) {
              do {
                local_3c = 0;
                iVar2 = local_60;
                if (-1 < local_60 + -1) {
                  do {
                    *(undefined2 *)
                     (local_70 +
                     (longlong)(*(int *)(local_58 + (longlong)local_38 * 4) + local_3c) * 2) =
                         local_80[local_3c];
                    local_3c = local_3c + 1;
                    iVar2 = iVar2 + -1;
                  } while (iVar2 != 0);
                }
                local_38 = local_38 + 1;
                iVar1 = iVar1 + -1;
              } while (iVar1 != 0);
            }
          }
          else {
            local_38 = 0;
            iVar1 = local_4c;
            if (-1 < local_4c + -1) {
              do {
                FUN_00409a70(local_80,local_70 +
                                      (longlong)*(int *)(local_58 + (longlong)local_38 * 4) * 2,
                             (longlong)(local_60 * 2));
                local_38 = local_38 + 1;
                iVar1 = iVar1 + -1;
              } while (iVar1 != 0);
            }
          }
        }
        else {
          FUN_004169f0(param_1,local_64 + (local_b8 - local_5c) * local_4c);
          local_70 = *param_1;
          local_40 = 0;
          local_44 = 0;
          if (local_60 == 0) {
            local_38 = 0;
            iVar1 = local_4c;
            if (-1 < local_4c + -1) {
              do {
                local_48 = *(int *)(local_58 + (longlong)local_38 * 4) - local_40;
                if (0 < local_48) {
                  if (local_48 == 1) {
                    *(undefined2 *)(local_70 + (longlong)local_44 * 2) =
                         *(undefined2 *)(local_78 + (longlong)local_40 * 2);
                    local_40 = local_40 + 1;
                    local_44 = local_44 + 1;
                  }
                  else if (local_48 < 9) {
                    local_3c = 0;
                    iVar2 = local_48;
                    if (-1 < local_48 + -1) {
                      do {
                        *(undefined2 *)(local_70 + (longlong)(local_44 + local_3c) * 2) =
                             *(undefined2 *)(local_78 + (longlong)(local_40 + local_3c) * 2);
                        local_3c = local_3c + 1;
                        iVar2 = iVar2 + -1;
                      } while (iVar2 != 0);
                    }
                    local_40 = local_40 + local_48;
                    local_44 = local_44 + local_48;
                  }
                  else {
                    FUN_00409a70(local_78 + (longlong)local_40 * 2,local_70 + (longlong)local_44 * 2
                                 ,(longlong)(local_48 * 2));
                    local_40 = local_40 + local_48;
                    local_44 = local_44 + local_48;
                  }
                }
                local_40 = local_40 + local_5c;
                local_38 = local_38 + 1;
                iVar1 = iVar1 + -1;
              } while (iVar1 != 0);
            }
          }
          else if (local_60 == 1) {
            local_38 = 0;
            iVar1 = local_4c;
            if (-1 < local_4c + -1) {
              do {
                local_48 = *(int *)(local_58 + (longlong)local_38 * 4) - local_40;
                if (0 < local_48) {
                  if (local_48 == 1) {
                    *(undefined2 *)(local_70 + (longlong)local_44 * 2) =
                         *(undefined2 *)(local_78 + (longlong)local_40 * 2);
                    local_40 = local_40 + 1;
                    local_44 = local_44 + 1;
                  }
                  else if (local_48 < 9) {
                    local_3c = 0;
                    iVar2 = local_48;
                    if (-1 < local_48 + -1) {
                      do {
                        *(undefined2 *)(local_70 + (longlong)(local_44 + local_3c) * 2) =
                             *(undefined2 *)(local_78 + (longlong)(local_40 + local_3c) * 2);
                        local_3c = local_3c + 1;
                        iVar2 = iVar2 + -1;
                      } while (iVar2 != 0);
                    }
                    local_40 = local_40 + local_48;
                    local_44 = local_44 + local_48;
                  }
                  else {
                    FUN_00409a70(local_78 + (longlong)local_40 * 2,local_70 + (longlong)local_44 * 2
                                 ,(longlong)(local_48 * 2));
                    local_40 = local_40 + local_48;
                    local_44 = local_44 + local_48;
                  }
                }
                *(undefined2 *)(local_70 + (longlong)local_44 * 2) = *local_80;
                local_44 = local_44 + 1;
                local_40 = local_40 + local_5c;
                local_38 = local_38 + 1;
                iVar1 = iVar1 + -1;
              } while (iVar1 != 0);
            }
          }
          else {
            local_38 = 0;
            iVar1 = local_4c;
            if (-1 < local_4c + -1) {
              do {
                local_48 = *(int *)(local_58 + (longlong)local_38 * 4) - local_40;
                if (0 < local_48) {
                  if (local_48 == 1) {
                    *(undefined2 *)(local_70 + (longlong)local_44 * 2) =
                         *(undefined2 *)(local_78 + (longlong)local_40 * 2);
                    local_40 = local_40 + 1;
                    local_44 = local_44 + 1;
                  }
                  else if (local_48 < 9) {
                    local_3c = 0;
                    iVar2 = local_48;
                    if (-1 < local_48 + -1) {
                      do {
                        *(undefined2 *)(local_70 + (longlong)(local_44 + local_3c) * 2) =
                             *(undefined2 *)(local_78 + (longlong)(local_40 + local_3c) * 2);
                        local_3c = local_3c + 1;
                        iVar2 = iVar2 + -1;
                      } while (iVar2 != 0);
                    }
                    local_40 = local_40 + local_48;
                    local_44 = local_44 + local_48;
                  }
                  else {
                    FUN_00409a70(local_78 + (longlong)local_40 * 2,local_70 + (longlong)local_44 * 2
                                 ,(longlong)(local_48 * 2));
                    local_40 = local_40 + local_48;
                    local_44 = local_44 + local_48;
                  }
                }
                FUN_00409a70(local_80,local_70 + (longlong)local_44 * 2,(longlong)(local_60 * 2));
                local_44 = local_44 + local_60;
                local_40 = local_40 + local_5c;
                local_38 = local_38 + 1;
                iVar1 = iVar1 + -1;
              } while (iVar1 != 0);
            }
          }
          local_48 = local_64 - local_40;
          if (0 < local_48) {
            FUN_00409a70(local_78 + (longlong)local_40 * 2,local_70 + (longlong)local_44 * 2,
                         (longlong)(local_48 * 2));
          }
        }
      }
    }
    else {
      FUN_00414480(param_1);
      local_38 = 1;
      do {
        while( true ) {
          local_b4 = 0;
          if (param_2 != 0) {
            local_b4 = *(int *)(param_2 + -4);
          }
          if (local_b4 < local_38) goto LAB_00450ca5;
          local_e8 = local_5c;
          local_e0 = 1;
          iVar1 = FUN_00456060(param_2,local_38 + -1,param_3,0);
          if (iVar1 == 0) break;
          FUN_00416780(&local_d0,*(undefined2 *)(param_2 + -2 + (longlong)local_38 * 2));
          FUN_00416ad0(param_1,local_d0);
          local_38 = local_38 + 1;
        }
        FUN_00416ad0(param_1,param_4);
        local_38 = local_38 + local_5c;
      } while ((param_5 & 1) != 0);
      FUN_00414480(local_20);
      FUN_00416dc0(local_20,param_2,local_38,0x7fffffff);
      FUN_00416ad0(param_1,local_20[0]);
      FUN_00414480(local_20);
    }
  }
LAB_00450ca5:
  FUN_00414560(&local_d0,2);
  FUN_00419430(&local_58,&DAT_00450030);
  FUN_00414560(&local_30,3);
  return param_1;
}

