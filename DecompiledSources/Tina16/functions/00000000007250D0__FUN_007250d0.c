/* Ghidra address: 007250d0 */
/* Ghidra symbol: FUN_007250d0 */


ulonglong FUN_007250d0(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auStack_c8 [40];
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined1 *local_80;
  uint local_78;
  code *local_68;
  longlong local_60;
  undefined1 local_58 [72];
  
  FUN_00724f90(auStack_c8);
  local_a0[0] = 0x48;
  local_90 = PTR_IMAGE_DOS_HEADER_0200c280;
  local_88 = FUN_005fbf20((int)param_1[0x1a]);
  local_80 = local_58;
  local_78 = 0x11;
  bVar1 = 0;
  puVar4 = &DAT_01e05328;
  do {
    if (bVar1 < 8) {
      uVar5 = (int)CONCAT71((int7)(param_4 >> 8),1) << (bVar1 & 0x1f);
      param_4 = (ulonglong)uVar5;
      bVar6 = ((byte)uVar5 & *(byte *)((longlong)param_1 + 0xd4)) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      local_78 = local_78 | *puVar4;
    }
    bVar1 = bVar1 + 1;
    puVar4 = puVar4 + 1;
  } while (bVar1 != 5);
  lVar3 = param_1[0x19];
  if (lVar3 != 0) {
    local_78 = local_78 | 0x20;
    local_60 = lVar3;
    if ((undefined *)param_1[0x12] != (undefined *)0x0) {
      local_90 = (undefined *)param_1[0x12];
    }
  }
  local_68 = FUN_00721e30;
  if (*(char *)(*(longlong *)PTR_DAT_02004030 + 400) == '\0') {
    local_98 = FUN_00721cc0();
  }
  else {
    lVar3 = FUN_00652880(&PTR_FUN_00721fa0,CONCAT71((int7)((ulonglong)puVar4 >> 8),1),0);
    param_1[0x11] = lVar3;
    lVar3 = param_1[0x11];
    *(longlong **)(lVar3 + 0x490) = param_1;
    *(undefined8 *)(lVar3 + 0x498) = param_2;
    local_98 = FUN_0065b870(param_1[0x11]);
  }
  iVar2 = (**(code **)(*param_1 + 0xa0))(param_1,&DAT_0069b7f0,local_a0);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x1a) = local_88;
    FUN_00724e80(auStack_c8);
  }
  return CONCAT71((int7)((ulonglong)param_2 >> 8),iVar2 != 0) & 0xffffffff;
}

