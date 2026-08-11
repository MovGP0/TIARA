/* Ghidra address: 015aade0 */
/* Ghidra symbol: FUN_015aade0 */


undefined8 * FUN_015aade0(longlong param_1,undefined8 *param_2,byte *param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  byte *local_res18;
  int local_res20;
  uint local_24;
  int local_20;
  int local_1c;
  
  FUN_004144d0(param_2);
  if (param_3 != (byte *)0x0) {
    local_res20 = param_4;
    if (param_4 < 0) {
      local_res20 = FUN_00414ce0(param_3);
    }
    if (local_res20 != 0) {
      FUN_00415d10(param_2,(local_res20 * 4) / 3 + local_res20 / 0x2d + 10,0);
      puVar1 = (undefined1 *)FUN_00415ab0(*param_2);
      lVar2 = (**(code **)(param_1 + 0x28))(param_1);
      while (0 < local_res20) {
        local_1c = local_res20;
        if (0x2d < local_res20) {
          local_1c = 0x2d;
        }
        local_res20 = local_res20 - local_1c;
        *puVar1 = *(undefined1 *)(lVar2 + local_1c);
        local_res18 = param_3;
        while (0 < local_1c) {
          local_24 = 0;
          local_20 = 0;
          do {
            local_24 = local_24 << 8;
            if (0 < local_1c) {
              local_24 = local_24 | *local_res18;
              local_res18 = local_res18 + 1;
            }
            local_1c = local_1c + -1;
            local_20 = local_20 + 1;
          } while (local_20 != 3);
          local_20 = 4;
          do {
            puVar1[local_20] = *(undefined1 *)(lVar2 + (ulonglong)(local_24 & 0x3f));
            local_24 = local_24 >> 6;
            local_20 = local_20 + -1;
          } while (local_20 != 0);
          puVar1 = puVar1 + 4;
        }
        puVar1 = puVar1 + 1;
        param_3 = local_res18;
      }
      lVar2 = FUN_00415ab0(*param_2);
      FUN_00415d10(param_2,(longlong)puVar1 - lVar2,0);
    }
  }
  return param_2;
}

