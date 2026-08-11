/* Ghidra address: 00be1350 */
/* Ghidra symbol: FUN_00be1350 */


void FUN_00be1350(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined1 local_130;
  undefined8 local_120;
  longlong local_118;
  undefined1 *local_110;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined4 local_cc;
  int local_c8 [4];
  undefined4 local_b8;
  undefined1 local_b4 [20];
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  ulonglong local_88;
  ulonglong uStack_80;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  int local_58;
  int local_54;
  int *local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  
  local_110 = auStack_158;
  local_118 = 0;
  local_120 = 0;
  local_68 = *(longlong *)(param_1 + 0x10);
  FUN_005980a0(local_68 + 8);
  local_38 = FUN_0082ccd0(&PTR_FUN_00825200,1);
  local_70 = *(undefined8 *)(param_1 + 0x20);
  local_30 = (longlong *)FUN_00be4820(&PTR_FUN_00bde5c0,1,local_70);
LAB_00be170c:
  do {
    local_78 = local_30;
    *(int *)(local_30 + 2) = (int)local_30[2] + 1;
    if (*(int *)(local_30[1] + 0x10) <= (int)local_30[2]) {
      if (local_30 != (longlong *)0x0) {
        (**(code **)(*local_30 + -0x20))(local_30,1);
      }
      if (*(char *)(param_1 + 8) == '\x01') {
        local_54 = *(int *)(local_38 + 0x10) + -1;
        if (-1 < local_54) {
          do {
            local_f8 = *(longlong *)(param_1 + 0x10);
            local_50 = (int *)(*(longlong *)(local_f8 + 8) +
                              (longlong)
                              *(int *)(*(longlong *)(local_38 + 8) + (longlong)local_54 * 4) * 0x14)
            ;
            if (-1 < local_50[3]) {
              iVar2 = (**(code **)(*param_2 + 0x28))(param_2);
              local_50[1] = iVar2;
              FUN_005995b0(local_38 + 8,local_54,5);
            }
            local_54 = local_54 + -1;
          } while (local_54 != -1);
        }
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
        local_54 = 0;
        if (-1 < iVar2 + -1) {
          do {
            local_100 = *(longlong *)(param_1 + 0x10);
            local_50 = (int *)(*(longlong *)(local_100 + 8) + (longlong)local_54 * 0x14);
            if (-1 < local_50[3]) {
              for (local_58 = local_50[1]; *local_50 < local_58; local_58 = local_58 + -1) {
                (**(code **)(*param_2 + 0x18))(param_2,&local_120,local_58 + -1);
                FUN_0043eb50(&local_118,local_120);
                if (local_118 != 0) break;
                local_50[1] = local_50[1] + -1;
              }
            }
            local_54 = local_54 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      FUN_00410f20(local_38);
      FUN_00414560(&local_120,2);
      return;
    }
    local_90 = local_30[1];
    puVar1 = (ulonglong *)(*(longlong *)(local_90 + 8) + (longlong)(int)local_30[2] * 0x10);
    local_88 = *puVar1;
    uStack_80 = puVar1[1];
    local_48._4_1_ = (char)(local_88 >> 0x20);
    local_48 = local_88;
    local_40 = uStack_80;
    if (local_48._4_1_ == '\0') {
      if ((-1 < (longlong)uStack_80) && (local_54 = *(int *)(local_38 + 0x10) + -1, -1 < local_54))
      {
        do {
          local_98 = *(longlong *)(param_1 + 0x10);
          local_50 = (int *)(*(longlong *)(local_98 + 8) +
                            (longlong)*(int *)(*(longlong *)(local_38 + 8) + (longlong)local_54 * 4)
                            * 0x14);
          if (local_40._4_4_ <= local_50[3]) {
            local_50[1] = (int)local_48 + -1;
            FUN_005995b0(local_38 + 8,local_54,5);
          }
          local_54 = local_54 + -1;
        } while (local_54 != -1);
      }
      local_a0 = *(longlong *)(param_1 + 0x10);
      local_138 = local_40._4_4_;
      local_130 = 0;
      FUN_00be1d50(local_b4,local_48 & 0xffffffff,local_48 & 0xffffffff,local_40 & 0xffffffff);
      local_b8 = FUN_005980d0(local_a0 + 8,local_b4);
      local_c8[0] = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10) + -1;
      local_cc = FUN_00597de0(local_38 + 8,local_c8);
      goto LAB_00be170c;
    }
    if ((longlong)uStack_80 < 0) {
      local_54 = *(int *)(local_38 + 0x10) + -1;
      if (-1 < local_54) {
        do {
          local_f0 = *(longlong *)(param_1 + 0x10);
          local_50 = (int *)(*(longlong *)(local_f0 + 8) +
                            (longlong)*(int *)(*(longlong *)(local_38 + 8) + (longlong)local_54 * 4)
                            * 0x14);
          local_40._0_4_ = (int)uStack_80;
          if (local_50[2] == (int)local_40) {
            local_48._0_4_ = (int)local_88;
            local_50[1] = (int)local_48;
            FUN_005995b0(local_38 + 8,local_54,5);
            break;
          }
          local_54 = local_54 + -1;
        } while (local_54 != -1);
      }
    }
    else {
      local_54 = *(int *)(local_38 + 0x10) + -1;
      if (-1 < local_54) {
        do {
          local_e8 = *(longlong *)(param_1 + 0x10);
          local_50 = (int *)(*(longlong *)(local_e8 + 8) +
                            (longlong)*(int *)(*(longlong *)(local_38 + 8) + (longlong)local_54 * 4)
                            * 0x14);
          if (local_40._4_4_ <= local_50[3]) {
            local_50[1] = (int)local_48 + -1;
            FUN_005995b0(local_38 + 8,local_54,5);
          }
          local_54 = local_54 + -1;
        } while (local_54 != -1);
      }
    }
  } while( true );
}

