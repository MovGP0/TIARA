/* Ghidra address: 006fc050 */
/* Ghidra symbol: FUN_006fc050 */


undefined1 FUN_006fc050(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 local_20a8 [32];
  longlong local_2088;
  undefined1 *local_2080;
  undefined4 local_206c;
  int local_2068;
  undefined2 local_2064 [2014];
  undefined1 local_10a8;
  undefined1 local_a8;
  undefined2 uStack_68;
  int local_64;
  longlong local_60;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  int local_4c;
  undefined1 local_48;
  byte local_47;
  undefined2 local_46;
  longlong local_40;
  undefined2 *local_38;
  undefined4 local_30;
  longlong local_28;
  undefined1 local_19;
  
  local_a8 = 0;
  local_10a8 = 0;
  local_20a8[0] = 0;
  local_2080 = local_20a8;
  local_2088 = 0;
  local_60 = 0;
  local_28 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x4b0),param_3);
  uVar4 = 0;
  FUN_0040d200(&local_58,0x30,0);
  local_58 = 0x30;
  cVar2 = FUN_004113d0(local_28,&PTR_FUN_006cb0d0);
  if (cVar2 == '\0') {
    local_54 = 0x7e;
    local_47 = DAT_01e023d2;
    local_46 = *(undefined2 *)(local_28 + 0x98);
    local_50 = 0xffffffff;
    local_38 = (undefined2 *)0x0;
    local_30 = 0;
    local_40 = local_28;
  }
  else {
    local_54 = 0x7c;
    bVar1 = *(byte *)(local_28 + 0x33a);
    if (bVar1 < 8) {
      bVar5 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (bVar1 & 0x1f) & 0x18U) != 0;
    }
    else {
      bVar5 = false;
    }
    if (!bVar5) {
      local_54 = 0x7d;
      local_4c = *(int *)(local_28 + 0x31c);
      if (local_4c < 0) {
        local_4c = -2;
      }
    }
    local_46 = *(undefined2 *)(local_28 + 0x98);
    local_47 = (&DAT_01e023cc)[(ulonglong)bVar1 * 2];
    if (*(char *)(local_28 + 0x319) != '\0') {
      local_47 = local_47 | 0x10;
    }
    if (*(char *)(local_28 + 0x31b) != '\0') {
      local_47 = local_47 | 4;
    }
    local_50 = param_3;
    local_48 = FUN_006f9f70(local_28);
    lVar3 = local_28;
    local_40 = local_28;
    if ((*(char *)(param_1 + 0x4dc) == '\0') &&
       ((*(char *)(param_1 + 0x4a0) == '\0' || (*(char *)(local_28 + 0x33a) != '\x05')))) {
      local_38 = (undefined2 *)0x0;
      local_30 = 0;
    }
    else {
      FUN_0064dd90(local_28,&local_2088);
      if (local_2088 == 0) {
        FUN_00414b50(&local_60,&LAB_006fc418);
      }
      else {
        FUN_0064dd90(lVar3,&local_60);
      }
      FUN_00442660(local_2064,local_60,0x1000);
      local_2068 = 0;
      if (local_60 != 0) {
        local_2068 = *(int *)(local_60 + -4);
      }
      local_64 = local_2068;
      if (0xffd < local_2068) {
        local_64 = 0xffe;
        uStack_68 = 0;
      }
      local_2064[local_64 + 1] = 0;
      local_38 = local_2064;
      local_206c = 0;
      if (local_60 != 0) {
        local_206c = *(undefined4 *)(local_60 + -4);
      }
      local_30 = local_206c;
      local_54 = local_54 | 2;
    }
  }
  lVar3 = FUN_0064fca0(param_1,param_2,(longlong)param_4,&local_58);
  local_19 = lVar3 != 0;
  FUN_00414480(&local_2088);
  FUN_00414480(&local_60);
  return local_19;
}

