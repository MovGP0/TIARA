/* Ghidra address: 00725ed0 */
/* Ghidra symbol: FUN_00725ed0 */


ulonglong FUN_00725ed0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_98;
  undefined4 local_90 [2];
  undefined8 local_88;
  longlong local_80;
  longlong local_78 [2];
  uint local_68;
  ushort local_64;
  ushort local_62;
  undefined2 local_60;
  undefined2 local_5e;
  short local_5c;
  undefined *local_58;
  code *local_48;
  code *local_40;
  longlong local_38;
  
  FUN_0040d200(local_90,0x78,0);
  local_90[0] = 0x78;
  local_58 = PTR_IMAGE_DOS_HEADER_0200c280;
  FUN_00725a30(&local_98,local_78);
  local_80 = FUN_00725cb0(local_98);
  local_68 = *(uint *)(&DAT_01e0584c + (ulonglong)*(byte *)((longlong)param_1 + 0xdb) * 4) | 0x3000;
  if ((char)param_1[0x1b] != '\0') {
    local_68 = local_68 + 0x10;
  }
  if ((*(byte *)((longlong)param_1 + 0xd9) & 1) == 0) {
    local_68 = local_68 + 0x100000;
  }
  if ((*(byte *)((longlong)param_1 + 0xd9) & 2) == 0) {
    local_68 = local_68 + 8;
  }
  if ((*(byte *)((longlong)param_1 + 0xd9) & 4) == 0) {
    local_68 = local_68 + 4;
  }
  if ((*(byte *)((longlong)param_1 + 0xd9) & 0x20) != 0) {
    local_68 = local_68 + 0x80000;
  }
  if (*(char *)((longlong)param_1 + 0xda) != '\0') {
    local_68 = local_68 + 0x20;
  }
  if ((*(byte *)((longlong)param_1 + 0xd9) & 0x10) != 0) {
    local_68 = local_68 + 0x800;
  }
  if ((*(byte *)((longlong)param_1 + 0xd9) & 8) == 0) {
    local_68 = local_68 + 0x80;
  }
  lVar3 = param_1[0x19];
  if (lVar3 != 0) {
    local_68 = local_68 | 0x4000;
    local_38 = lVar3;
    if ((undefined *)param_1[0x12] != (undefined *)0x0) {
      local_58 = (undefined *)param_1[0x12];
    }
  }
  local_64 = *(ushort *)(param_1 + 0x1a);
  local_62 = *(ushort *)((longlong)param_1 + 0xd4);
  local_60 = *(undefined2 *)((longlong)param_1 + 0xdc);
  local_5e = (undefined2)param_1[0x1c];
  local_48 = FUN_00721e30;
  local_40 = FUN_00721e30;
  if (*(char *)(*(longlong *)PTR_DAT_02004030 + 400) == '\0') {
    local_88 = FUN_00721cc0();
  }
  else {
    lVar3 = FUN_00652880(&PTR_FUN_00721fa0,1,0);
    param_1[0x11] = lVar3;
    lVar3 = param_1[0x11];
    *(longlong **)(lVar3 + 0x490) = param_1;
    *(undefined8 *)(lVar3 + 0x498) = param_2;
    local_88 = FUN_0065b870(param_1[0x11]);
  }
  iVar1 = (**(code **)(*param_1 + 0xa0))(param_1,&DAT_0069b830,local_90);
  if (iVar1 != 0) {
    FUN_00725bf0(local_80,local_78[0]);
    *(bool *)(param_1 + 0x1b) = (local_68 & 0x10) != 0;
    *(bool *)((longlong)param_1 + 0xda) = (local_68 & 0x20) != 0;
    if ((local_68 & 1) == 0) {
      if ((local_68 & 2) == 0) {
        *(undefined1 *)((longlong)param_1 + 0xdb) = 0;
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0xdb) = 2;
      }
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0xdb) = 1;
    }
    *(uint *)(param_1 + 0x1a) = (uint)local_64;
    *(uint *)((longlong)param_1 + 0xd4) = (uint)local_62;
    if (local_5c == 1) {
      uVar4 = FUN_0069e8a0();
      uVar2 = FUN_0069dc90(uVar4);
      FUN_00725ea0(param_1,uVar2);
    }
    else {
      FUN_00725ea0(param_1,local_5c);
    }
  }
  else {
    if (local_80 != 0) {
      thunk_FUN_03d5bf3d(local_80);
      local_80 = 0;
    }
    if (local_78[0] != 0) {
      thunk_FUN_03d5bf3d(local_78[0]);
    }
  }
  return CONCAT71((int7)((ulonglong)param_2 >> 8),iVar1 != 0) & 0xffffffff;
}

