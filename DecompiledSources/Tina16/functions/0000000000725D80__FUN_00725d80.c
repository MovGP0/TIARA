/* Ghidra address: 00725d80 */
/* Ghidra symbol: FUN_00725d80 */


ulonglong FUN_00725d80(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_98;
  undefined4 local_90 [2];
  undefined8 local_88;
  longlong local_80;
  longlong local_78 [2];
  undefined4 local_68;
  undefined *local_58;
  code *local_40;
  
  FUN_0040d200(local_90,0x78,0);
  local_90[0] = 0x78;
  local_58 = PTR_IMAGE_DOS_HEADER_0200c280;
  FUN_00725a30(&local_98,local_78);
  local_80 = FUN_00725cb0(local_98);
  local_68 = 0x2040;
  local_40 = FUN_00721e30;
  if (*(char *)(*(longlong *)PTR_DAT_02004030 + 400) == '\0') {
    local_88 = FUN_00721cc0();
  }
  else {
    lVar2 = FUN_00652880(&PTR_FUN_00721fa0,1,0);
    param_1[0x11] = lVar2;
    lVar2 = param_1[0x11];
    *(longlong **)(lVar2 + 0x490) = param_1;
    *(undefined8 *)(lVar2 + 0x498) = param_2;
    local_88 = FUN_0065b870(param_1[0x11]);
  }
  iVar1 = (**(code **)(*param_1 + 0xa0))(param_1,&DAT_0069b830,local_90);
  if (iVar1 != 0) {
    FUN_00725bf0(local_80,local_78[0]);
  }
  else {
    if (local_80 != 0) {
      thunk_FUN_03d5bf3d(local_80);
    }
    if (local_78[0] != 0) {
      thunk_FUN_03d5bf3d(local_78[0]);
    }
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),iVar1 != 0) & 0xffffffff;
}

