/* Ghidra address: 00b27160 */
/* Ghidra symbol: FUN_00b27160 */


undefined8 FUN_00b27160(undefined8 param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  int local_d0;
  int local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined1 *local_90;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  short *local_50;
  char *local_48;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_90 = auStack_108;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_48 = (char *)0x0;
  local_50 = (short *)0x0;
  local_30[0] = 0;
  local_38 = 0;
  FUN_00416880(&local_a0,param_2);
  FUN_0043ea00(&local_98,local_a0);
  if (local_98 == 0) {
    FUN_00414520(param_1);
  }
  else if (param_3 == '\0') {
    FUN_00414c70(&local_48,param_2);
    local_39 = *local_48 == '\x01';
    if ((bool)local_39) {
      local_58 = 0;
      if (local_48 != (char *)0x0) {
        local_58 = *(int *)(local_48 + -4);
      }
      FUN_00415ad0(&local_48,local_48,2,local_58 + -1);
      local_54 = 1;
      while( true ) {
        local_5c = 0;
        if (local_48 != (char *)0x0) {
          local_5c = *(int *)(local_48 + -4);
        }
        if (local_5c < local_54) break;
        lVar4 = (longlong)local_54;
        if ((local_48[lVar4 + -1] == '\x03') || (local_48[lVar4 + -1] == '\x02')) {
          lVar2 = FUN_00414df0(&local_48);
          *(undefined1 *)(lVar2 + -1 + lVar4) = 0x5c;
        }
        if (local_48[lVar4 + -1] == '\x01') {
          local_d0 = local_54 + 1;
          lVar2 = (longlong)local_d0;
          cVar1 = local_48[lVar2 + -1];
          if (cVar1 == '@') {
            lVar3 = FUN_00414df0(&local_48);
            *(undefined1 *)(lVar3 + -1 + lVar4) = 0x5c;
            lVar4 = FUN_00414df0(&local_48);
            *(undefined1 *)(lVar4 + -1 + lVar2) = 0x5c;
          }
          else {
            lVar3 = FUN_00414df0(&local_48);
            *(char *)(lVar3 + -1 + lVar4) = cVar1;
            lVar4 = FUN_00414df0(&local_48);
            *(undefined1 *)(lVar4 + -1 + lVar2) = 0x3a;
            local_60 = 0;
            if (local_48 != (char *)0x0) {
              local_60 = *(int *)(local_48 + -4);
            }
            if (local_d0 < local_60) {
              local_30[0] = 0;
              FUN_00415ad0(&local_b0,local_48,1,local_d0);
              FUN_004156b0(local_30,local_b0,&DAT_00b27964);
              local_64 = 0;
              if (local_48 != (char *)0x0) {
                local_64 = *(undefined4 *)(local_48 + -4);
              }
              FUN_00415ad0(&local_b8,local_48,local_54 + 2,local_64);
              FUN_004156b0(&local_48,local_30[0],local_b8);
              FUN_004144d0(local_30);
            }
          }
        }
        local_54 = local_54 + 1;
      }
      local_68 = 0;
      if (local_48 != (char *)0x0) {
        local_68 = *(int *)(local_48 + -4);
      }
      if (local_48[(longlong)local_68 + -1] == '\\') {
        local_6c = 0;
        if (local_48 != (char *)0x0) {
          local_6c = *(int *)(local_48 + -4);
        }
        FUN_00415ad0(&local_48,local_48,1,local_6c + -1);
      }
      FUN_00b15390(param_1,local_48);
    }
    else {
      local_e8 = 1;
      FUN_0061d490(&local_a8,local_48,&DAT_00b27944,&DAT_00b27954);
      FUN_00414c70(&local_48,local_a8);
      FUN_00415f40(param_1,local_48);
    }
  }
  else {
    FUN_00b15310(&local_50,param_2);
    local_39 = *local_50 == 1;
    if ((bool)local_39) {
      local_70 = 0;
      if (local_50 != (short *)0x0) {
        local_70 = *(uint *)(local_50 + -2) >> 1;
      }
      FUN_00416430(&local_50,local_50,2,local_70 - 1);
      local_54 = 1;
      while( true ) {
        local_74 = 0;
        if (local_50 != (short *)0x0) {
          local_74 = *(uint *)(local_50 + -2) >> 1;
        }
        if ((int)local_74 < local_54) break;
        lVar4 = (longlong)local_54;
        if ((local_50[lVar4 + -1] == 3) || (local_50[lVar4 + -1] == 2)) {
          local_50[lVar4 + -1] = 0x5c;
        }
        if (local_50[lVar4 + -1] == 1) {
          local_cc = local_54 + 1;
          if (local_50[(longlong)local_cc + -1] == 0x40) {
            local_50[lVar4 + -1] = 0x5c;
            local_50[(longlong)local_cc + -1] = 0x5c;
          }
          else {
            local_50[lVar4 + -1] = local_50[(longlong)local_cc + -1];
            local_50[(longlong)local_cc + -1] = 0x3a;
            local_78 = 0;
            if (local_50 != (short *)0x0) {
              local_78 = *(uint *)(local_50 + -2) >> 1;
            }
            if (local_cc < (int)local_78) {
              local_38 = 0;
              FUN_00416430(&local_c0,local_50,1,local_cc);
              FUN_00416020(&local_38,local_c0,&DAT_00b2796c);
              local_7c = 0;
              if (local_50 != (short *)0x0) {
                local_7c = *(uint *)(local_50 + -2) >> 1;
              }
              FUN_00416430(&local_c8,local_50,local_54 + 2,local_7c);
              FUN_00416020(&local_50,local_38,local_c8);
              FUN_00414520(&local_38);
            }
          }
        }
        local_54 = local_54 + 1;
      }
      local_80 = 0;
      if (local_50 != (short *)0x0) {
        local_80 = *(uint *)(local_50 + -2) >> 1;
      }
      if (local_50[(longlong)(int)local_80 + -1] == 0x5c) {
        local_84 = 0;
        if (local_50 != (short *)0x0) {
          local_84 = *(uint *)(local_50 + -2) >> 1;
        }
        FUN_00416430(&local_50,local_50,1,local_84 - 1);
      }
      FUN_00414b90(param_1,local_50);
    }
    else {
      FUN_00414b90(param_1,local_50);
    }
  }
  FUN_004145c0(&local_c8,2);
  FUN_00414590(&local_b8,3);
  FUN_00414560(&local_a0,2);
  FUN_00414520(&local_50);
  FUN_004144d0(&local_48);
  return param_1;
}

