/* Ghidra address: 00aabb20 */
/* Ghidra symbol: FUN_00aabb20 */


longlong FUN_00aabb20(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     longlong param_5,undefined8 param_6)

{
  byte bVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong local_res8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  int local_c4;
  undefined1 *local_c0;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  undefined1 local_99;
  undefined1 *local_98;
  undefined8 local_90;
  undefined1 local_81;
  undefined1 *local_80;
  undefined8 local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_60;
  char local_59;
  longlong local_58;
  longlong local_48;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_c0 = auStack_f8;
  local_28 = 0;
  local_20[0] = 0;
  local_38 = 0;
  local_30 = 0;
  local_res8 = param_1;
  puVar2 = auStack_f8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_c0;
  }
  local_c0 = puVar2;
  local_d8 = param_6;
  FUN_00ac2f70(local_res8,0,param_4,param_5);
  *(undefined8 *)(local_res8 + 0xa8) = param_3;
  if (*(char *)(local_res8 + 0x40) == '\0') {
    *(undefined1 *)(local_res8 + 0x40) = 7;
  }
  uVar6 = FUN_00610ca0(&PTR_FUN_00a8d5e0,1);
  *(undefined8 *)(local_res8 + 0x168) = uVar6;
  *(undefined4 *)(local_res8 + 0x134) = 1;
  *(undefined4 *)(local_res8 + 0x138) = 2;
  *(undefined4 *)(local_res8 + 0x13c) = 2;
  *(undefined4 *)(local_res8 + 0x178) = 0xff00000f;
  *(undefined4 *)(local_res8 + 0x140) = 0xff000014;
  *(undefined4 *)(local_res8 + 0x144) = 0xff000010;
  local_48 = 0;
  iVar4 = *(int *)(param_5 + 0x10);
  local_60 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar7 = FUN_00a72910(param_5,local_60);
      if (*(char *)(lVar7 + 8) == '\b') {
        local_59 = '\x01';
        local_48 = FUN_00a72910(param_5,local_60);
        goto code_r0x00aabd0e;
      }
      local_60 = local_60 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_59 = '\0';
code_r0x00aabd0e:
  *(char *)(local_res8 + 0x124) = local_59;
  if (local_59 != '\0') {
    if (*(longlong *)(local_48 + 0x28) == 0) {
      *(undefined4 *)(local_res8 + 0x174) = 1;
    }
    else {
      local_68 = *(int *)(local_48 + 0x18);
      local_6c = local_68;
      if (local_68 < 0) {
        local_6c = 0;
      }
      if (local_6c < 0x65) {
        local_70 = local_6c;
      }
      else {
        local_70 = 100;
      }
      *(int *)(local_res8 + 0x174) = local_70;
    }
    *(undefined4 *)(local_res8 + 0x120) = *(undefined4 *)(local_res8 + 0x174);
    if (*(int *)(local_res8 + 0x174) == 0) {
      *(undefined1 *)(local_res8 + 0x125) = 0;
      *(undefined1 *)(local_res8 + 0x170) = 0;
    }
    else {
      *(undefined1 *)(local_res8 + 0x125) = 8;
      *(undefined1 *)(local_res8 + 0x170) = 4;
    }
  }
  local_c4 = *(int *)(param_5 + 0x10) + -1;
  local_3c = 0;
  iVar4 = *(int *)(param_5 + 0x10);
  if (-1 < local_c4) {
    do {
      local_c4 = iVar4;
      local_58 = FUN_004aeac0(param_5,local_3c);
      bVar1 = *(byte *)(local_58 + 8);
      if (bVar1 < 0xd) {
        if (bVar1 == 0xc) {
          local_ac = *(int *)(local_58 + 0x18);
          local_b0 = local_ac;
          if (local_ac < 0) {
            local_b0 = 0;
          }
          if (local_b0 < 0x33) {
            local_b4 = local_b0;
          }
          else {
            local_b4 = 0x32;
          }
          *(int *)(local_res8 + 0x134) = local_b4;
        }
        else if (bVar1 == 9) {
          FUN_00a602d0(*(undefined8 *)(local_58 + 0x28),0,local_res8 + 0x178);
        }
        else if (bVar1 == 10) {
          FUN_00a602d0(*(undefined8 *)(local_58 + 0x28),0,local_res8 + 0x144);
        }
        else if (bVar1 == 0xb) {
          FUN_00a602d0(*(undefined8 *)(local_58 + 0x28),0,local_res8 + 0x140);
        }
      }
      else if (bVar1 == 0xd) {
        local_a0 = *(int *)(local_58 + 0x18);
        local_a4 = local_a0;
        if (local_a0 < -1) {
          local_a4 = -1;
        }
        if (local_a4 < 0x29) {
          local_a8 = local_a4;
        }
        else {
          local_a8 = 0x28;
        }
        *(int *)(local_res8 + 0x138) = local_a8;
        *(int *)(local_res8 + 0x13c) = local_a8;
      }
      else if (bVar1 == 0x1c) {
        local_28 = 0;
        local_20[0] = 0;
        local_78 = *(undefined8 *)(local_58 + 0x28);
        local_80 = (undefined1 *)(local_res8 + 0x125);
        FUN_00414480(local_20);
        FUN_0043e5a0(local_20,local_78);
        FUN_00414b50(&local_28,local_20[0]);
        FUN_00414480(local_20);
        local_81 = 1;
        iVar4 = FUN_0043e210(local_28,L"VOID");
        if (iVar4 == 0) {
          *local_80 = 0;
        }
        else {
          iVar4 = FUN_0043e210(local_28,L"ABOVE");
          if (iVar4 == 0) {
            *local_80 = 1;
          }
          else {
            iVar4 = FUN_0043e210(local_28,L"BELOW");
            if (iVar4 == 0) {
              *local_80 = 2;
            }
            else {
              iVar4 = FUN_0043e210(local_28,L"HSIDES");
              if (iVar4 == 0) {
                *local_80 = 3;
              }
              else {
                iVar4 = FUN_0043e210(local_28,&DAT_00aac520);
                if (iVar4 == 0) {
                  *local_80 = 4;
                }
                else {
                  iVar4 = FUN_0043e210(local_28,&DAT_00aac534);
                  if (iVar4 == 0) {
                    *local_80 = 5;
                  }
                  else {
                    iVar4 = FUN_0043e210(local_28,L"VSIDES");
                    if (iVar4 == 0) {
                      *local_80 = 6;
                    }
                    else {
                      iVar4 = FUN_0043e210(local_28,&DAT_00aac564);
                      if (iVar4 == 0) {
                        *local_80 = 7;
                      }
                      else {
                        iVar4 = FUN_0043e210(local_28,L"BORDER");
                        if (iVar4 == 0) {
                          *local_80 = 8;
                        }
                        else {
                          local_81 = 0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        FUN_00414480(local_20);
        FUN_00414480(&local_28);
      }
      else if (bVar1 == 0x47) {
        local_38 = 0;
        local_30 = 0;
        local_90 = *(undefined8 *)(local_58 + 0x28);
        local_98 = (undefined1 *)(local_res8 + 0x170);
        FUN_00414480(&local_30);
        FUN_0043e5a0(&local_30,local_90);
        FUN_00414b50(&local_38,local_30);
        FUN_00414480(&local_30);
        local_99 = 1;
        iVar4 = FUN_0043e210(local_38,L"NONE");
        if (iVar4 == 0) {
          *local_98 = 0;
        }
        else {
          iVar4 = FUN_0043e210(local_38,L"GROUPS");
          if (iVar4 == 0) {
            *local_98 = 1;
          }
          else {
            iVar4 = FUN_0043e210(local_38,L"ROWS");
            if (iVar4 == 0) {
              *local_98 = 2;
            }
            else {
              iVar4 = FUN_0043e210(local_38,L"COLS");
              if (iVar4 == 0) {
                *local_98 = 3;
              }
              else {
                iVar4 = FUN_0043e210(local_38,&DAT_00aac5f8);
                if (iVar4 == 0) {
                  *local_98 = 4;
                }
                else {
                  local_99 = 0;
                }
              }
            }
          }
        }
        FUN_00414480(&local_30);
        FUN_00414480(&local_38);
      }
      local_3c = local_3c + 1;
      local_c4 = local_c4 + -1;
      iVar4 = local_c4;
    } while (local_c4 != 0);
  }
  cVar3 = FUN_00a54b40(param_6);
  if (cVar3 == '\0') {
    cVar3 = FUN_00a55770(param_6);
    if (cVar3 != '\0') {
      uVar5 = FUN_00a55570(param_6);
      *(undefined4 *)(local_res8 + 0x138) = uVar5;
      uVar5 = FUN_00a55670(param_6);
      *(undefined4 *)(local_res8 + 0x13c) = uVar5;
    }
  }
  else {
    *(undefined4 *)(local_res8 + 0x138) = 0xffffffff;
    *(undefined4 *)(local_res8 + 0x13c) = 0xffffffff;
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

