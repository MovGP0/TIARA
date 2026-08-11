/* Ghidra address: 015aab20 */
/* Ghidra symbol: FUN_015aab20 */


undefined8 * FUN_015aab20(longlong param_1,undefined8 *param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *local_res18;
  int local_res20;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50 [2];
  uint local_3c;
  uint local_38;
  int local_34;
  undefined1 *local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_50[0] = 0;
  local_68 = 0;
  FUN_004144d0(param_2);
  if (param_3 != (undefined1 *)0x0) {
    local_res20 = param_4;
    if (param_4 < 0) {
      local_res20 = FUN_00414ce0(param_3);
    }
    if (local_res20 != 0) {
      FUN_00415d10(param_2,local_res20,0);
      local_30 = param_3 + local_res20;
      local_28 = FUN_00415ab0(*param_2);
      local_20 = (**(code **)(param_1 + 0x28))(param_1);
      local_res18 = param_3;
      do {
        iVar1 = FUN_015aa100(*local_res18,local_20,0x40);
        if ((iVar1 < 0) || (0x2d < iVar1)) {
          FUN_0041ddd0(local_50,PTR_PTR_020045e0);
          (**(code **)(param_1 + 0x10))(param_1,&local_68);
          local_60 = local_68;
          local_58 = 0xb;
          uVar2 = FUN_0044d530(&PTR_FUN_015a7a48,1,local_50[0],&local_60,0);
          FUN_004134c0(uVar2);
        }
        local_res18 = local_res18 + 1;
        for (; 0 < iVar1; iVar1 = iVar1 + -3) {
          local_3c = 0;
          local_34 = 4;
          for (; (0 < local_34 && (local_res18 <= local_30)); local_res18 = local_res18 + 1) {
            local_38 = FUN_015aa100(*local_res18,local_20,0x40);
            if (-1 < (int)local_38) {
              local_3c = local_3c << 6 | local_38 & 0xff;
              local_34 = local_34 + -1;
            }
          }
          local_34 = 2;
          do {
            *(undefined1 *)(local_28 + local_34) = (undefined1)local_3c;
            local_3c = local_3c >> 8;
            local_34 = local_34 + -1;
          } while (-1 < local_34);
          if (iVar1 < 4) {
            local_28 = local_28 + iVar1;
          }
          else {
            local_28 = local_28 + 3;
          }
        }
      } while (local_res18 < local_30);
      lVar3 = FUN_00415ab0(*param_2);
      FUN_00415d10(param_2,local_28 - lVar3,0);
    }
  }
  FUN_004144d0(&local_68);
  FUN_00414480(local_50);
  return param_2;
}

