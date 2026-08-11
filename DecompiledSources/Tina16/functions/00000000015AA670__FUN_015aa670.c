/* Ghidra address: 015aa670 */
/* Ghidra symbol: FUN_015aa670 */


undefined8 * FUN_015aa670(longlong param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int local_res20;
  undefined8 local_40;
  longlong local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  uint local_14;
  int local_10;
  uint local_c;
  
  local_40 = 0;
  FUN_004144d0(param_2);
  if (param_3 != 0) {
    local_res20 = param_4;
    if (param_4 < 0) {
      local_res20 = FUN_00414ce0(param_3);
    }
    if (local_res20 != 0) {
      FUN_00415d10(param_2,local_res20,0);
      uVar1 = FUN_00415ab0(*param_2);
      FUN_00409a70(param_3,uVar1,(longlong)local_res20);
      local_38 = (**(code **)(param_1 + 0x28))(param_1);
      for (; local_res20 % 4 != 0; local_res20 = local_res20 + 1) {
        FUN_004153d0(&local_40,*(undefined1 *)(local_38 + 0x40),0);
        FUN_004155b0(param_2,local_40);
      }
      local_28 = (undefined1 *)FUN_00415ab0(*param_2);
      local_30 = local_28 + local_res20;
      uVar3 = (longlong)(local_res20 * 3) % 4 & 0xffffffff;
      local_20 = local_28;
      for (local_res20 = (local_res20 * 3) / 4; 0 < local_res20; local_res20 = local_res20 + -3) {
        local_c = 0;
        local_10 = 4;
        for (; (0 < local_10 && (local_20 <= local_30)); local_20 = local_20 + 1) {
          local_14 = FUN_015aa100(*local_20,local_38,0x41);
          if (-1 < (int)local_14) {
            local_c = local_c << 6;
            if ((int)local_14 < 0x40) {
              local_c = local_c | local_14 & 0xff;
            }
            else {
              local_res20 = local_res20 + -1;
            }
            local_10 = local_10 + -1;
          }
        }
        local_10 = 2;
        do {
          uVar3 = (ulonglong)(byte)local_c;
          local_28[local_10] = (byte)local_c;
          local_c = local_c >> 8;
          local_10 = local_10 + -1;
        } while (-1 < local_10);
        if (local_res20 < 4) {
          local_28 = local_28 + local_res20;
        }
        else {
          local_28 = local_28 + 3;
        }
      }
      lVar2 = FUN_00415ab0(*param_2,uVar3);
      FUN_00415d10(param_2,(longlong)local_28 - lVar2,0);
    }
  }
  FUN_004144d0(&local_40);
  return param_2;
}

