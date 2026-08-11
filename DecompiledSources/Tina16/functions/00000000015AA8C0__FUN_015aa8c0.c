/* Ghidra address: 015aa8c0 */
/* Ghidra symbol: FUN_015aa8c0 */


undefined8 * FUN_015aa8c0(longlong param_1,undefined8 *param_2,byte *param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte *local_res18;
  int local_res20;
  int local_10;
  uint local_c;
  
  FUN_004144d0(param_2);
  if (param_3 != (byte *)0x0) {
    local_res20 = param_4;
    if (param_4 < 0) {
      local_res20 = FUN_00414ce0(param_3);
    }
    if (local_res20 != 0) {
      FUN_00415d10(param_2,(local_res20 * 4) / 3 + 4,0);
      lVar1 = FUN_00415ab0(*param_2);
      lVar2 = (**(code **)(param_1 + 0x28))(param_1);
      local_res18 = param_3;
      while (0 < local_res20) {
        local_c = 0;
        local_10 = 0;
        do {
          local_c = local_c << 8;
          if (0 < local_res20) {
            local_c = local_c | *local_res18;
            local_res18 = local_res18 + 1;
          }
          local_res20 = local_res20 + -1;
          local_10 = local_10 + 1;
        } while (local_10 != 3);
        local_10 = 3;
        do {
          if (local_res20 < 0) {
            *(undefined1 *)(lVar1 + local_10) = *(undefined1 *)(lVar2 + 0x40);
            local_res20 = local_res20 + 1;
          }
          else {
            *(undefined1 *)(lVar1 + local_10) = *(undefined1 *)(lVar2 + (ulonglong)(local_c & 0x3f))
            ;
          }
          local_c = local_c >> 6;
          local_10 = local_10 + -1;
        } while (local_10 != -1);
        lVar1 = lVar1 + 4;
      }
      lVar2 = FUN_00415ab0(*param_2);
      FUN_00415d10(param_2,lVar1 - lVar2,0);
    }
  }
  return param_2;
}

