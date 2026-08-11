/* Ghidra address: 007255d0 */
/* Ghidra symbol: FUN_007255d0 */


bool FUN_007255d0(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  bool bVar9;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_dc [28];
  undefined1 local_c0 [64];
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 *local_68;
  uint local_5c;
  undefined4 local_58;
  undefined8 local_50;
  code *local_48;
  longlong local_40;
  longlong local_38;
  int local_24;
  int local_20;
  ulonglong uVar8;
  
  local_f0 = 0;
  local_e8 = 0;
  local_80[0] = 0x68;
  local_68 = local_dc;
  uVar4 = FUN_005fc8c0(param_1[0x1a]);
  thunk_FUN_03d2c01a(uVar4,0x5c,local_dc);
  uVar8 = 0;
  FUN_00416830(&local_e8,local_c0,0x20);
  local_70 = 0;
  if ((char)param_1[0x1b] != '\0') {
    uVar4 = FUN_0069e8a0();
    local_70 = FUN_0069dc70(uVar4);
  }
  local_5c = *(uint *)(&DAT_01e05840 + (ulonglong)*(byte *)(param_1 + 0x1b) * 4) | 0x48;
  bVar1 = 0;
  puVar6 = &DAT_01e05800;
  do {
    if (bVar1 < 0x10) {
      uVar7 = (int)CONCAT62((int6)(uVar8 >> 0x10),1) << (bVar1 & 0x1f);
      uVar8 = (ulonglong)uVar7;
      bVar9 = ((ushort)uVar7 & *(ushort *)((longlong)param_1 + 0xd9)) != 0;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) {
      uVar8 = (ulonglong)*puVar6;
      local_5c = local_5c | *puVar6;
    }
    bVar1 = bVar1 + 1;
    puVar6 = puVar6 + 1;
  } while (bVar1 != 0x10);
  if (param_1[0x1c] != 0) {
    local_5c = local_5c | 0x200;
  }
  lVar5 = param_1[0x19];
  if (lVar5 != 0) {
    local_5c = local_5c | 0x10;
    local_40 = lVar5;
    if (param_1[0x12] != 0) {
      local_38 = param_1[0x12];
    }
  }
  local_58 = FUN_005fbf20(*(undefined4 *)(param_1[0x1a] + 0x28));
  local_50 = 0;
  local_48 = FUN_007252a0;
  local_24 = (int)param_1[0x1e];
  local_20 = *(int *)((longlong)param_1 + 0xf4);
  if (local_20 < local_24) {
    local_5c = local_5c & 0xffffdfff;
  }
  if (*(char *)(*(longlong *)PTR_DAT_02004030 + 400) == '\0') {
    local_78 = FUN_00721cc0();
  }
  else {
    lVar5 = FUN_00652880(&PTR_FUN_00721fa0,1,0);
    param_1[0x11] = lVar5;
    lVar5 = param_1[0x11];
    *(longlong **)(lVar5 + 0x490) = param_1;
    *(undefined8 *)(lVar5 + 0x498) = param_2;
    local_78 = FUN_0065b870(param_1[0x11]);
  }
  *(undefined1 *)((longlong)param_1 + 0xf9) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  uVar4 = DAT_020124e0;
  DAT_020124e0 = param_1;
  iVar2 = (**(code **)(*param_1 + 0xa0))(param_1,&DAT_0069b820,local_80);
  DAT_020124e0 = (longlong *)uVar4;
  if (iVar2 != 0) {
    FUN_00416830(&local_f0,local_c0,0x20);
    iVar3 = FUN_0043e6d0(local_e8,local_f0);
    if (iVar3 != 0) {
      *(undefined1 *)(param_1 + 0x1f) = 1;
    }
    FUN_00725920(param_1,local_dc);
    if (*(char *)((longlong)param_1 + 0xf9) != '\0') {
      FUN_005fc860(param_1[0x1a],local_58);
    }
  }
  FUN_00414560(&local_f0,2);
  return iVar2 != 0;
}

