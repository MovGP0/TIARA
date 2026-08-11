/* Ghidra address: 00ada730 */
/* Ghidra symbol: FUN_00ada730 */


void FUN_00ada730(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong local_110;
  undefined1 *local_100;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  longlong local_e8;
  int local_e0;
  int local_dc;
  longlong local_d8;
  int local_cc;
  int local_c8;
  int local_c0;
  char local_b9;
  longlong local_b8;
  int local_a8;
  char local_a1;
  longlong local_a0;
  int local_90;
  char local_89;
  longlong local_88;
  int local_78;
  char local_71;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  longlong local_38;
  longlong local_30 [2];
  
  local_100 = auStack_138;
  local_30[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_60 = 0;
  local_68 = 0;
  local_40 = (code *)*param_2;
  local_38 = param_2[1];
  puVar2 = auStack_138;
  if (*(char *)(param_1 + 0x45) == '\0') {
    if (local_40 == (code *)0x0) {
      FUN_00ad1170(param_1);
      do {
        FUN_00ada5e0(auStack_138);
        puVar2 = local_100;
      } while (0x1f < *(byte *)(param_1 + 0x44) ||
               (1 << (*(byte *)(param_1 + 0x44) & 0x1f) & 0x1000010U) == 0);
    }
    else {
      *(undefined1 *)(param_1 + 0x82) = 1;
      local_100 = auStack_138;
      FUN_00ad1170(param_1);
      local_58 = 0;
      local_70 = *(longlong *)(param_1 + 0x48);
      iVar5 = *(int *)(local_70 + 0x10);
      local_78 = 0;
      if (-1 < iVar5 + -1) {
        do {
          lVar3 = FUN_00a72910(local_70,local_78);
          if (*(char *)(lVar3 + 8) == 'W') {
            local_71 = '\x01';
            local_58 = FUN_00a72910(local_70,local_78);
            goto code_r0x00ada859;
          }
          local_78 = local_78 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      local_71 = '\0';
code_r0x00ada859:
      if (local_71 == '\0') {
        local_88 = *(longlong *)(param_1 + 0x48);
        iVar5 = *(int *)(local_88 + 0x10);
        local_90 = 0;
        if (-1 < iVar5 + -1) {
          do {
            lVar3 = FUN_00a72910(local_88,local_90);
            if (*(char *)(lVar3 + 8) == '&') {
              local_89 = '\x01';
              local_58 = FUN_00a72910(local_88,local_90);
              goto code_r0x00ada903;
            }
            local_90 = local_90 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_89 = '\0';
code_r0x00ada903:
        if (local_89 == '\0') {
          FUN_00414480(&local_48);
        }
        else {
          FUN_00414b50(&local_48,*(undefined8 *)(local_58 + 0x28));
        }
      }
      else {
        FUN_00414b50(&local_48,*(undefined8 *)(local_58 + 0x28));
      }
      local_a0 = *(longlong *)(param_1 + 0x48);
      iVar5 = *(int *)(local_a0 + 0x10);
      local_a8 = 0;
      if (-1 < iVar5 + -1) {
        do {
          lVar3 = FUN_00a72910(local_a0,local_a8);
          if (*(char *)(lVar3 + 8) == '3') {
            local_a1 = '\x01';
            local_58 = FUN_00a72910(local_a0,local_a8);
            goto code_r0x00ada9b6;
          }
          local_a8 = local_a8 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      local_a1 = '\0';
code_r0x00ada9b6:
      if (local_a1 == '\0') {
        FUN_00414480(&local_50);
      }
      else {
        FUN_00414b50(&local_50,*(undefined8 *)(local_58 + 0x28));
      }
      local_b8 = *(longlong *)(param_1 + 0x48);
      iVar5 = *(int *)(local_b8 + 0x10);
      local_c0 = 0;
      if (-1 < iVar5 + -1) {
        do {
          lVar3 = FUN_00a72910(local_b8,local_c0);
          if (*(char *)(lVar3 + 8) == 'N') {
            local_b9 = '\x01';
            local_58 = FUN_00a72910(local_b8,local_c0);
            goto code_r0x00adaa54;
          }
          local_c0 = local_c0 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      local_b9 = '\0';
code_r0x00adaa54:
      if (local_b9 == '\0') {
        FUN_00414480(&local_68);
      }
      else {
        FUN_00414b50(&local_68,*(undefined8 *)(local_58 + 0x28));
      }
      FUN_00414480(&local_60);
      FUN_00ada5e0(auStack_138);
      while ((cVar1 = *(char *)(param_1 + 0x44), cVar1 != '\x18' && (cVar1 != '\x04'))) {
        if (cVar1 == '\x03') {
          local_c8 = 0;
          if (local_60 != 0) {
            local_c8 = *(int *)(local_60 + -4);
          }
          FUN_004169f0(&local_60,local_c8 + 1);
          local_d8 = FUN_00414de0(&local_60);
          local_cc = 0;
          if (local_60 != 0) {
            local_cc = *(int *)(local_60 + -4);
          }
          *(undefined2 *)(local_d8 + -2 + (longlong)local_cc * 2) = 0xd;
          local_dc = 0;
          if (local_60 != 0) {
            local_dc = *(int *)(local_60 + -4);
          }
          FUN_004169f0(&local_60,local_dc + 1);
          local_e8 = FUN_00414de0(&local_60);
          local_e0 = 0;
          if (local_60 != 0) {
            local_e0 = *(int *)(local_60 + -4);
          }
          *(undefined2 *)(local_e8 + -2 + (longlong)local_e0 * 2) = 10;
        }
        else {
          local_f4 = 0;
          if (local_30[0] != 0) {
            local_f4 = *(int *)(local_30[0] + -4);
          }
          local_ec = local_f4;
          if (0 < local_f4) {
            local_f8 = 0;
            if (local_60 != 0) {
              local_f8 = *(int *)(local_60 + -4);
            }
            local_f0 = local_f8;
            FUN_004169f0(&local_60,local_f8 + local_f4);
            uVar4 = FUN_00416740(local_30[0]);
            lVar3 = FUN_00414de0(&local_60);
            FUN_00409a70(uVar4,lVar3 + -2 + (longlong)(local_f0 + 1) * 2,(longlong)(local_ec * 2));
          }
        }
        FUN_00ada5e0(auStack_138);
      }
      local_118 = local_68;
      local_110 = local_60;
      (*local_40)(local_38,*(undefined8 *)(param_1 + 0x98),local_50,local_48);
      *(undefined1 *)(param_1 + 0x82) = 0;
      puVar2 = local_100;
    }
  }
  local_100 = puVar2;
  FUN_00414560(&local_68,2);
  FUN_00414560(&local_50,2);
  FUN_00414480(local_30);
  return;
}

