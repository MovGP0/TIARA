/* Ghidra address: 00c294d0 */
/* Ghidra symbol: FUN_00c294d0 */


longlong * FUN_00c294d0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  code *pcVar3;
  uint uVar4;
  undefined1 auStack_e8 [32];
  byte *local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined1 *local_90;
  byte local_7a;
  byte local_79;
  undefined4 local_78;
  int local_74;
  byte *local_70;
  byte *local_68;
  char local_5b;
  char local_5a;
  char local_59;
  char *local_58;
  undefined8 local_50;
  uint local_44;
  longlong *local_40;
  undefined8 *local_38;
  byte *local_30;
  
  local_90 = auStack_e8;
  local_a8 = 0;
  local_40 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  if (DAT_01e9f548 < (int)((uint)*(ushort *)(param_1 + 0x4d) * (uint)*(ushort *)(param_1 + 0x4f))) {
    FUN_00c1a6c0(local_40,1);
  }
  cVar1 = FUN_00c28880(param_1);
  if (cVar1 == '\0') {
    local_b8 = FUN_00c288b0(param_1);
    local_c8 = (byte *)CONCAT44(local_c8._4_4_,(uint)*(ushort *)(param_1 + 0x4d));
    local_c0 = (undefined1 *)CONCAT44(local_c0._4_4_,(uint)*(ushort *)(param_1 + 0x4f));
    local_38 = (undefined8 *)FUN_00c1b640(&PTR_FUN_00c1b158,1,local_40,3);
    if ((*(char *)(param_1 + 0x20) == '\0') || (cVar1 = FUN_00c2a4a0(param_1), cVar1 == '\0')) {
      local_5a = '\0';
    }
    else {
      local_5a = '\x01';
    }
    local_5b = '\0';
    *(undefined1 *)(param_1 + 0x20) = 0;
    local_59 = '\0';
    if ((*(longlong *)(param_1 + 0x18) == 0) && (local_5a != '\0')) {
      local_59 = FUN_00c2e3e0(*(undefined8 *)(param_1 + 0x60));
    }
    if (local_5a == '\0') {
      local_30 = (byte *)0x0;
      local_74 = 0;
    }
    else {
      local_74 = (*(ushort *)(param_1 + 0x4d) + 0xf >> 4) * 2;
      local_30 = (byte *)FUN_004095c0(local_74 * (uint)*(ushort *)(param_1 + 0x4f));
      FUN_0040d200(local_30,(longlong)(int)(local_74 * (uint)*(ushort *)(param_1 + 0x4f)),0);
      local_5a = local_30 != (byte *)0x0;
    }
    local_44 = 0;
    local_58 = *(char **)(param_1 + 0x30);
    local_70 = local_30;
    while ((int)local_44 < (int)(uint)*(ushort *)(param_1 + 0x4f)) {
      local_50 = (**(code **)*local_38)(local_38,local_44);
      if ((local_44 & 0x1f) == 0) {
        thunk_FUN_03f3ed25(local_44,100,*(undefined2 *)(param_1 + 0x4f));
        local_c8 = (byte *)((ulonglong)local_c8 & 0xffffffff00000000);
        FUN_004238d0(local_a0,0,0,0);
        FUN_0041ddd0(&local_a8,PTR_PTR_02002088);
        uVar2 = *(undefined8 *)(param_1 + 8);
        pcVar3 = (code *)FUN_00411550(uVar2,0xfffd);
        local_c8 = (byte *)((ulonglong)local_c8 & 0xffffffffffffff00);
        local_c0 = local_a0;
        local_b8 = local_a8;
        (*pcVar3)(uVar2,param_1,1);
      }
      FUN_00409a70(local_58,local_50,*(undefined2 *)(param_1 + 0x4d));
      local_44 = local_44 + 1;
      if (local_5a == '\0') {
        local_58 = local_58 + *(ushort *)(param_1 + 0x4d);
      }
      else {
        local_7a = 0x80;
        local_68 = local_70;
        local_79 = 0;
        uVar4 = (uint)*(ushort *)(param_1 + 0x4d);
        local_78 = 0;
        if (-1 < (int)(uVar4 - 1)) {
          do {
            if (*local_58 == local_59) {
              local_79 = local_79 | local_7a;
            }
            local_7a = local_7a >> 1;
            if (local_7a == 0) {
              local_7a = 0x80;
              if ((local_5b == '\0') && (local_79 == 0)) {
                local_5b = '\0';
              }
              else {
                local_5b = '\x01';
              }
              *local_68 = local_79;
              local_68 = local_68 + 1;
              local_79 = 0;
            }
            local_58 = local_58 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (local_79 != 0) {
          local_5b = '\x01';
          *local_68 = local_79;
        }
        local_70 = local_70 + local_74;
      }
    }
    if ((local_5a != '\0') && (local_5b != '\0')) {
      local_c8 = local_30;
      uVar2 = thunk_FUN_03c9ff5e(*(undefined2 *)(param_1 + 0x4d),*(undefined2 *)(param_1 + 0x4f),1,1
                                );
      *(undefined8 *)(param_1 + 0x18) = uVar2;
    }
    if (local_30 != (byte *)0x0) {
      FUN_004095f0(local_30);
    }
    FUN_00410f20(local_38);
  }
  else {
    (**(code **)(*local_40 + 0x88))(local_40,*(undefined2 *)(param_1 + 0x4d));
    (**(code **)(*local_40 + 0x70))(local_40,*(undefined2 *)(param_1 + 0x4f));
    uVar2 = FUN_00c288b0(param_1);
    uVar2 = FUN_00608880(uVar2);
    (**(code **)(*local_40 + 0x78))(local_40,uVar2);
  }
  FUN_00414480(&local_a8);
  return local_40;
}

