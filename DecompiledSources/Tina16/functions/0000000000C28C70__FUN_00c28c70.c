/* Ghidra address: 00c28c70 */
/* Ghidra symbol: FUN_00c28c70 */


longlong * FUN_00c28c70(longlong param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  ushort uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  code *pcVar10;
  undefined1 auStack_f8 [32];
  byte *local_d8;
  undefined1 *local_d0;
  byte *local_c8;
  byte *local_b8;
  undefined1 local_b0 [16];
  undefined1 *local_a0;
  byte local_92;
  byte local_91;
  uint local_90;
  int local_8c;
  byte *local_88;
  byte *local_80;
  char local_75;
  char local_74;
  char local_73;
  byte local_72;
  byte local_71;
  longlong local_70;
  undefined2 local_67;
  byte local_65;
  uint local_64;
  undefined1 *local_60;
  byte *local_58;
  longlong *local_50;
  undefined8 *local_48;
  longlong *local_40;
  longlong local_38;
  byte *local_30;
  
  local_a0 = auStack_f8;
  local_b8 = (byte *)0x0;
  local_70 = 0;
  local_50 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  if (DAT_01e9f548 < (int)((uint)*(ushort *)(param_1 + 0x4d) * (uint)*(ushort *)(param_1 + 0x4f))) {
    FUN_00c1a6c0(local_50,1);
  }
  cVar5 = FUN_00c28880(param_1);
  if (cVar5 != '\0') {
    (**(code **)(*local_50 + 0x88))(local_50,*(undefined2 *)(param_1 + 0x4d));
    (**(code **)(*local_50 + 0x70))(local_50,*(undefined2 *)(param_1 + 0x4f));
    uVar8 = FUN_00c288b0(param_1);
    uVar8 = FUN_00608880(uVar8);
    (**(code **)(*local_50 + 0x78))(local_50,uVar8);
    goto LAB_00c293cb;
  }
  local_38 = 0;
  local_40 = (longlong *)0x0;
  local_48 = (undefined8 *)0x0;
  uVar8 = FUN_00c288b0(param_1);
  local_38 = FUN_00c1c070(&PTR_FUN_00c19ba8,1,uVar8);
  local_40 = (longlong *)FUN_00c1e2b0(&PTR_FUN_00c1c950,1,*(undefined2 *)(param_1 + 0x4d),local_38);
  local_c8 = (byte *)FUN_00c288b0(param_1);
  local_d8 = (byte *)CONCAT44(local_d8._4_4_,(uint)*(ushort *)(param_1 + 0x4d));
  local_d0 = (undefined1 *)CONCAT44(local_d0._4_4_,(uint)*(ushort *)(param_1 + 0x4f));
  local_48 = (undefined8 *)FUN_00c1b640(&PTR_FUN_00c1b158,1,local_50,3);
  lVar9 = FUN_00c29d60(param_1);
  FUN_004194b0(&local_70,*(undefined8 *)(lVar9 + 8),&DAT_00c12750);
  if (*(char *)(param_1 + 0x20) == '\0') {
LAB_00c28e63:
    local_73 = '\0';
  }
  else {
    cVar5 = FUN_00c2a4a0(param_1);
    if (cVar5 == '\0') goto LAB_00c28e63;
    local_73 = '\x01';
  }
  local_74 = '\0';
  *(undefined1 *)(param_1 + 0x20) = 0;
  local_72 = 0;
  local_75 = '\0';
  if ((*(longlong *)(param_1 + 0x18) == 0) && (local_73 != '\0')) {
    local_73 = '\x01';
    local_72 = FUN_00c2e3e0(*(undefined8 *)(param_1 + 0x60));
    puVar1 = (undefined2 *)(local_70 + (ulonglong)local_72 * 3);
    uVar2 = *puVar1;
    local_65 = *(byte *)(puVar1 + 1);
    local_67._1_1_ = (undefined1)((ushort)uVar2 >> 8);
    uVar7 = local_67._1_1_;
    local_67 = uVar2;
    cVar5 = thunk_FUN_03f3ed25(6,uVar7,0x33);
    cVar6 = thunk_FUN_03f3ed25(0x24,(byte)local_67,0x33);
    local_75 = local_65 / 0x33 + cVar5 + cVar6 + '\x01';
  }
  local_80 = (byte *)0x0;
  local_91 = 0;
  if (local_73 == '\0') {
    local_30 = (byte *)0x0;
    local_8c = 0;
    local_90 = 0;
    local_92 = 0;
  }
  else {
    uVar3 = *(ushort *)(param_1 + 0x4d);
    local_8c = (uVar3 + 0xf >> 4) * 2;
    local_90 = uVar3 + 7 >> 3;
    local_92 = (byte)(1 << (8 - ((byte)uVar3 & 7) & 7));
    local_30 = (byte *)FUN_004095c0(local_8c * (uint)*(ushort *)(param_1 + 0x4f));
    FUN_0040d200(local_30,(longlong)(int)(local_8c * (uint)*(ushort *)(param_1 + 0x4f)),0);
  }
  local_64 = 0;
  (**(code **)(*local_40 + 8))(local_40);
  local_88 = local_30;
  local_58 = *(byte **)(param_1 + 0x30);
  while ((int)local_64 < (int)(uint)*(ushort *)(param_1 + 0x4f)) {
    if ((local_64 & 0x1f) == 0) {
      thunk_FUN_03f3ed25(local_64,100,(uint)*(ushort *)(param_1 + 0x4f));
      local_d8 = (byte *)((ulonglong)local_d8 & 0xffffffff00000000);
      FUN_004238d0(local_b0,0,0,0);
      FUN_0041ddd0(&local_b8,PTR_PTR_02002088);
      uVar8 = *(undefined8 *)(param_1 + 8);
      pcVar10 = (code *)FUN_00411550(uVar8,0xfffd);
      local_d8 = (byte *)((ulonglong)local_d8 & 0xffffffffffffff00);
      local_d0 = local_b0;
      local_c8 = local_b8;
      (*pcVar10)(uVar8,param_1,1);
    }
    local_60 = (undefined1 *)(**(code **)*local_48)(local_48,local_64);
    if (local_73 != '\0') {
      FUN_0040d200(local_60,*(undefined2 *)(param_1 + 0x4d),local_75);
      if ((int)local_40[1] == 1) {
        local_80 = local_88;
        local_91 = 0x80;
      }
      else {
        local_80 = local_88 + (longlong)(int)local_90 + -1;
        local_91 = local_92;
      }
    }
    local_60 = (undefined1 *)((longlong)local_60 + (longlong)*(int *)((longlong)local_40 + 0xc));
    while ((cVar5 = local_73, *(int *)((longlong)local_40 + 0xc) < (int)local_40[3] &&
           (-1 < *(int *)((longlong)local_40 + 0xc)))) {
      local_71 = *local_58;
      puVar1 = (undefined2 *)(local_70 + (ulonglong)local_71 * 3);
      local_67 = *puVar1;
      local_65 = *(byte *)(puVar1 + 1);
      if ((local_73 == '\0') || (local_71 != local_72)) {
        local_67._1_1_ = (undefined1)((ushort)local_67 >> 8);
        uVar7 = local_67._1_1_;
        local_d8 = (byte *)&local_67;
        local_d0 = (undefined1 *)((longlong)&local_67 + 1);
        local_c8 = &local_65;
        bVar4 = (byte)local_67;
        uVar7 = (**(code **)(*local_40 + 0x10))(local_40,bVar4,uVar7);
        *local_60 = uVar7;
      }
      else {
        *local_80 = *local_80 | local_91;
        local_74 = '\x01';
        FUN_00c1e290(local_40);
      }
      if (cVar5 != '\0') {
        if ((int)local_40[1] == 1) {
          local_91 = local_91 >> 1;
          if (local_91 == 0) {
            local_91 = 0x80;
            local_80 = local_80 + 1;
          }
        }
        else {
          local_91 = local_91 << 1;
          if (local_91 == 0) {
            local_91 = 1;
            local_80 = local_80 + -1;
          }
        }
      }
      local_58 = local_58 + (int)local_40[1];
      local_60 = local_60 + (int)local_40[1];
    }
    if (local_73 != '\0') {
      local_88 = local_88 + local_8c;
    }
    local_64 = local_64 + 1;
    local_58 = local_58 + (int)((uint)*(ushort *)(param_1 + 0x4d) - (int)local_40[1]);
    (**(code **)(*local_40 + 0x18))(local_40);
  }
  if ((local_73 != '\0') && (local_74 != '\0')) {
    local_d8 = local_30;
    uVar8 = thunk_FUN_03c9ff5e(*(undefined2 *)(param_1 + 0x4d),*(undefined2 *)(param_1 + 0x4f),1,1);
    *(undefined8 *)(param_1 + 0x18) = uVar8;
  }
  if (local_30 != (byte *)0x0) {
    FUN_004095f0(local_30);
  }
  if (local_38 != 0) {
    FUN_00410f20(local_38);
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00410f20(local_40);
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_00410f20(local_48);
  }
LAB_00c293cb:
  FUN_00414480(&local_b8);
  FUN_00419430(&local_70,&DAT_00c12750);
  return local_50;
}

