/* Ghidra address: 00819b30 */
/* Ghidra symbol: FUN_00819b30 */


undefined4 FUN_00819b30(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 local_ec;
  undefined1 local_e0 [16];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 uStack_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_70 [4];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60 [3];
  undefined4 local_54;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined8 local_30;
  
  local_30 = *param_2;
  local_ec = 1;
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x4d1) == '\0') {
    if ((*(longlong *)(param_1 + 0xa0) != 0) &&
       (cVar2 = FUN_00423210(*(longlong *)(param_1 + 0xa0) + 0xc,&local_30), cVar2 != '\0')) {
      local_ec = 5;
    }
  }
  else {
    FUN_00819760(param_1,&local_40);
    uStack_c8 = *(undefined8 *)(param_1 + 0x48);
    _local_d0 = CONCAT44(local_40,(int)*(undefined8 *)(param_1 + 0x40));
    local_3c = local_40;
    if ((*(longlong *)(param_1 + 0xa0) != 0) &&
       (cVar2 = FUN_00423210(*(longlong *)(param_1 + 0xa0) + 0xc,&local_30), cVar2 != '\0')) {
      return 5;
    }
    cVar2 = FUN_00423210(&local_d0,&local_30);
    if (cVar2 == '\0') {
      cVar2 = FUN_00423210(param_1 + 0x60,&local_30);
      if (cVar2 == '\0') {
        cVar2 = FUN_00423210(param_1 + 0xa8,&local_30);
        if (cVar2 == '\0') {
          cVar2 = FUN_00423210(param_1 + 0xe8,&local_30);
          if (cVar2 == '\0') {
            cVar2 = FUN_00423210(param_1 + 0x7c,&local_30);
            if (cVar2 == '\0') {
              cVar2 = FUN_00423210(param_1 + 0x11c,&local_30);
              uVar1 = local_3c;
              if (cVar2 == '\0') {
                cVar2 = *(char *)(*(longlong *)(param_1 + 0x10) + 0x4d2);
                if ((cVar2 != '\x02') && (cVar2 != '\x01')) {
                  cVar2 = *(char *)(*(longlong *)(param_1 + 0x10) + 0x4d1);
                  if ((cVar2 == '\x03') || ((cVar2 == '\x01' || (cVar2 == '\x04')))) {
                    FUN_004238d0(local_e0,local_40,local_3c,*(int *)(param_1 + 0x130) - local_38,
                                 *(int *)(param_1 + 0x78) - local_34);
                    cVar2 = FUN_00423210(local_e0,&local_30);
                    if (cVar2 == '\0') {
                      local_ec = 0x12;
                    }
                    else {
                      local_ec = 1;
                    }
                  }
                  else {
                    FUN_004238d0(local_50,0,0,local_40,local_3c);
                    FUN_004238d0(local_60,*(int *)(param_1 + 0x130) - local_38,0,
                                 *(int *)(param_1 + 0x130),uVar1);
                    FUN_004238d0(local_70,0,*(int *)(param_1 + 0x78) - local_34,local_40,
                                 *(int *)(param_1 + 0x78));
                    FUN_004238d0(&local_80,*(int *)(param_1 + 0x130) - local_38,
                                 *(int *)(param_1 + 0x78) - local_34,*(int *)(param_1 + 0x130),
                                 *(int *)(param_1 + 0x78));
                    FUN_004238d0(local_90,local_48,0,local_60[0],uVar1);
                    FUN_004238d0(local_a0,0,local_44,local_40,local_6c);
                    FUN_004238d0(local_b0,*(int *)(param_1 + 0x130) - local_38,local_54,
                                 *(int *)(param_1 + 0x130),local_7c);
                    FUN_004238d0(local_c0,local_68,*(int *)(param_1 + 0x78) - local_34,local_80,
                                 *(int *)(param_1 + 0x78));
                    cVar2 = FUN_00423210(local_50,&local_30);
                    if (cVar2 == '\0') {
                      cVar2 = FUN_00423210(local_60,&local_30);
                      if (cVar2 == '\0') {
                        cVar2 = FUN_00423210(local_70,&local_30);
                        if (cVar2 == '\0') {
                          cVar2 = FUN_00423210(&local_80,&local_30);
                          if (cVar2 == '\0') {
                            cVar2 = FUN_00423210(local_a0,&local_30);
                            if (cVar2 == '\0') {
                              cVar2 = FUN_00423210(local_b0,&local_30);
                              if (cVar2 == '\0') {
                                cVar2 = FUN_00423210(local_c0,&local_30);
                                if (cVar2 == '\0') {
                                  cVar2 = FUN_00423210(local_90,&local_30);
                                  if (cVar2 != '\0') {
                                    local_ec = 0xc;
                                  }
                                }
                                else {
                                  local_ec = 0xf;
                                }
                              }
                              else {
                                local_ec = 0xb;
                              }
                            }
                            else {
                              local_ec = 10;
                            }
                          }
                          else {
                            local_ec = 0x11;
                          }
                        }
                        else {
                          local_ec = 0x10;
                        }
                      }
                      else {
                        local_ec = 0xe;
                      }
                    }
                    else {
                      local_ec = 0xd;
                    }
                  }
                }
              }
              else {
                local_ec = 3;
              }
            }
            else {
              local_ec = 0x15;
            }
          }
          else {
            local_ec = 8;
          }
        }
        else {
          local_ec = 9;
        }
      }
      else {
        local_ec = 0x14;
      }
    }
    else {
      local_ec = 2;
    }
  }
  return local_ec;
}

