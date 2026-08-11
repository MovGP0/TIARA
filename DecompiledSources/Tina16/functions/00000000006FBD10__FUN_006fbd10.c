/* Ghidra address: 006fbd10 */
/* Ghidra symbol: FUN_006fbd10 */


bool FUN_006fbd10(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong local_2050 [2];
  undefined2 local_2040 [2012];
  undefined1 local_1088;
  undefined1 local_88;
  undefined2 uStack_44;
  longlong local_40;
  int local_38;
  undefined4 local_34;
  byte local_30;
  byte local_2f;
  longlong local_28;
  longlong local_20;
  
  local_88 = 0;
  local_1088 = 0;
  local_2050[0] = 0;
  local_40 = 0;
  lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x4b0),param_3);
  cVar2 = FUN_004113d0(lVar4,&PTR_FUN_006cb0d0);
  local_28 = lVar4;
  if (cVar2 == '\0') {
    FUN_0040d200(&local_38,0x20,0);
    local_2f = DAT_01e023d2;
    local_38 = *(int *)(lVar4 + 0x98);
    local_34 = 0xffffffff;
    if ((*(char *)(lVar4 + 0xa9) == '\0') && ((*(ushort *)(lVar4 + 0x34) & 0x10) == 0)) {
      local_30 = local_30 | DAT_01e023c2;
    }
    local_20 = -1;
  }
  else {
    uVar5 = 0;
    FUN_0040d200(&local_38,0x20,0);
    bVar1 = *(byte *)(lVar4 + 0x33a);
    if (bVar1 < 8) {
      bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << (bVar1 & 0x1f) & 0x18U) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      local_38 = *(int *)(lVar4 + 0x98);
    }
    else {
      local_38 = *(int *)(lVar4 + 0x31c);
      if (local_38 < 0) {
        local_38 = -2;
      }
    }
    local_2f = (&DAT_01e023cc)[(ulonglong)bVar1 * 2];
    local_34 = param_3;
    if ((*(char *)(lVar4 + 0x319) != '\0') && (iVar3 = FUN_006d3e90(), 0x40046 < iVar3)) {
      local_2f = local_2f | 0x10;
    }
    local_30 = FUN_006f9f70(lVar4);
    if (*(char *)(lVar4 + 0x31b) != '\0') {
      local_2f = local_2f | 4;
    }
    if ((*(char *)(param_1 + 0x4dc) == '\0') &&
       ((*(char *)(param_1 + 0x4a0) == '\0' || (*(char *)(lVar4 + 0x33a) != '\x05')))) {
      local_20 = -1;
    }
    else {
      FUN_0064dd90(lVar4,local_2050);
      if (local_2050[0] == 0) {
        FUN_00414b50(&local_40,&LAB_006fc048);
      }
      else {
        FUN_0064dd90(lVar4,&local_40);
      }
      FUN_00442660(local_2040,local_40,0x1000);
      iVar3 = 0;
      if (local_40 != 0) {
        iVar3 = *(int *)(local_40 + -4);
      }
      if (0xffd < iVar3) {
        iVar3 = 0xffe;
        uStack_44 = 0;
      }
      local_2040[iVar3 + 1] = 0;
      local_20 = FUN_0064fca0(param_1,0x44d,0,local_2040);
    }
  }
  lVar4 = FUN_007017d0(param_1,param_2,(longlong)param_4,&local_38);
  if (0xffff < local_20) {
    FUN_00655b90(param_1);
  }
  FUN_00414480(local_2050);
  FUN_00414480(&local_40);
  return lVar4 != 0;
}

