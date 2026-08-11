/* Ghidra address: 00c0ce10 */
/* Ghidra symbol: FUN_00c0ce10 */


void FUN_00c0ce10(longlong param_1)

{
  short *psVar1;
  char cVar2;
  undefined8 uVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0;
  int local_d4;
  int local_d0;
  undefined1 local_c9;
  short *local_c8;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_78;
  int local_74;
  undefined4 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  char local_31;
  longlong local_30;
  
  local_b0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_c9 = *(undefined1 *)(param_1 + 0x5f5);
  local_d4 = 0;
  local_b8 = 0;
  cVar2 = FUN_00bf2c80(param_1);
  if (cVar2 != '\0') {
    local_44 = FUN_00bf2b30(param_1);
    local_4c = FUN_00bf2b90(param_1);
    local_3c = FUN_00bfaa10(param_1);
    local_d0 = *(int *)(param_1 + 0x4c4);
    if ((int)local_4c == 1) {
      local_b4 = local_4c._4_4_ + -1;
    }
    else {
      local_b4 = local_4c._4_4_;
    }
    iVar6 = local_44._4_4_;
    local_c8 = (short *)FUN_007111e0((*(int *)(param_1 + 0x618) + 2) * (local_b4 - local_44._4_4_) +
                                     *(int *)(param_1 + 0x618) + 1);
    *local_c8 = 0;
    local_31 = '\0';
    local_bc = iVar6;
    if (iVar6 <= local_b4 + -1) {
      iVar6 = ((local_b4 + -1) - iVar6) + 1;
      do {
        iVar5 = local_bc + -1;
        (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                  (*(longlong **)(param_1 + 0x4e8),&local_60,iVar5);
        local_30 = FUN_00416740(local_60);
        if (*(char *)(param_1 + 0x5f5) == '\x02') {
          (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                    (*(longlong **)(param_1 + 0x4e8),&local_68,iVar5);
          local_70 = 0;
          if (local_68 != 0) {
            local_70 = *(undefined4 *)(local_68 + -4);
          }
          local_78 = (int)local_44 + -1;
          local_74 = (int)local_4c + -1;
          iVar5 = FUN_00526f90(&local_78,2);
          local_30 = local_30 + (longlong)iVar5 * 2;
        }
        iVar5 = FUN_00c0cda0(auStack_108);
        FUN_004167d0(&local_88,local_30);
        FUN_00416dc0(&local_80,local_88,1,iVar5);
        uVar3 = FUN_00416740(local_80);
        FUN_007112d0(local_c8,uVar3);
        FUN_007112d0(local_c8,&LAB_00c0d474);
        if ((*(int *)(param_1 + 0x4cc) == local_bc) && (local_d0 != 1)) {
          local_d0 = local_d0 - iVar5;
        }
        local_bc = local_bc + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = local_b4 + -1;
    (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
              (*(longlong **)(param_1 + 0x4e8),&local_90,iVar6);
    local_30 = FUN_00416740(local_90);
    if (*(char *)(param_1 + 0x5f5) == '\x02') {
      (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                (*(longlong **)(param_1 + 0x4e8),&local_98,iVar6);
      local_70 = 0;
      if (local_98 != 0) {
        local_70 = *(undefined4 *)(local_98 + -4);
      }
      local_78 = (int)local_44 + -1;
      local_74 = (int)local_4c + -1;
      iVar6 = FUN_00526f90(&local_78,2);
      local_30 = local_30 + (longlong)iVar6 * 2;
    }
    iVar6 = FUN_00c0cda0(auStack_108);
    FUN_004167d0(&local_a8,local_30);
    FUN_00416dc0(&local_a0,local_a8,1,iVar6);
    uVar3 = FUN_00416740(local_a0);
    FUN_007112d0(local_c8,uVar3);
    psVar1 = local_c8;
    if ((*(int *)(param_1 + 0x4cc) == local_b4) && (local_d0 != 1)) {
      local_d0 = local_d0 - iVar6;
    }
    iVar6 = -1;
    psVar4 = (short *)0x0;
    iVar5 = -1;
    if (local_31 != '\0') {
      FUN_00bfa9e0(param_1,local_44._4_4_);
      if (*(char *)(param_1 + 0x5f5) == '\x02') {
        local_bc = (int)local_44;
        if ((int)local_4c <= (int)local_44) {
          local_bc = (int)local_4c;
        }
      }
      else {
        local_bc = 1;
        iVar6 = -1;
      }
      do {
        psVar4 = (short *)FUN_00bcc3c0(local_c8);
        if (psVar4 != local_c8) {
          local_d4 = (int)(((longlong)psVar4 - (longlong)local_c8) / 2);
          if (iVar6 == -1) {
            iVar6 = local_d4;
          }
          if (0 < local_d4) {
            (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                      (*(longlong **)(param_1 + 0x4e8),&local_58,*(int *)(param_1 + 0x4cc) + -1);
            FUN_00416e20(&local_58,local_bc,local_d4);
            (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x40))
                      (*(longlong **)(param_1 + 0x4e8),*(int *)(param_1 + 0x4cc) + -1,local_58);
          }
        }
        local_c8 = psVar4;
        if (*psVar4 == 0xd) {
          local_c8 = psVar4 + 1;
          if (*local_c8 == 10) {
            local_c8 = psVar4 + 2;
          }
          *(int *)(param_1 + 0x4cc) = *(int *)(param_1 + 0x4cc) + 1;
        }
      } while (*local_c8 != 0);
      local_b8 = local_d4;
      FUN_004167d0(&local_b0,psVar1);
      local_e8 = local_b0;
      local_e0 = *(undefined1 *)(param_1 + 0x5f5);
      FUN_00bd0e70(*(undefined8 *)(param_1 + 0x550),7,&local_44,&local_4c);
      psVar4 = psVar1;
      iVar5 = iVar6;
    }
    if (iVar5 == -1) {
      iVar5 = 0;
    }
    if (*(char *)(param_1 + 0x5f5) == '\x02') {
      FUN_00c0a5f0(param_1,&local_3c,&local_44,&local_4c);
    }
    else {
      local_3c = CONCAT44(local_3c._4_4_,local_d0);
      local_44 = CONCAT44(local_44._4_4_,(int)local_44 - iVar5);
      local_4c = CONCAT44(local_4c._4_4_,(int)local_4c - local_b8);
      FUN_00c0a5f0(param_1,&local_3c,&local_44,&local_4c);
    }
    FUN_00c086e0(param_1,local_c9);
    if (psVar4 == (short *)0x0) {
      FUN_00711270(local_c8);
    }
    else {
      FUN_00711270(psVar4);
    }
  }
  FUN_00414560(&local_b0,7);
  FUN_00414560(&local_68,3);
  return;
}

