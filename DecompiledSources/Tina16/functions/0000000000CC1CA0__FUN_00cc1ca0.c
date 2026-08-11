/* Ghidra address: 00cc1ca0 */
/* Ghidra symbol: FUN_00cc1ca0 */


void FUN_00cc1ca0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_70 = auStack_98;
  *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) & 0xfd;
  lVar1 = *(longlong *)(param_1 + 0x80);
  cVar2 = FUN_004113d0(lVar1,&DAT_00cbfe58);
  if (cVar2 == '\0') {
    local_48 = (undefined8 *)(param_1 + 0x80);
    local_50 = *local_48;
    *local_48 = 0;
    FUN_00410f20(local_50);
  }
  else {
    local_28 = *(longlong *)(lVar1 + 8);
    if (local_28 != 0) {
      local_30 = FUN_004afa30(*(undefined8 *)(local_28 + 0x78));
      iVar3 = FUN_004aee30(local_30,*(undefined8 *)(param_1 + 0x80));
      if (iVar3 != -1) {
        local_38 = (undefined8 *)(param_1 + 0x80);
        local_40 = *local_38;
        *local_38 = 0;
        FUN_00410f20(local_40);
      }
      local_20 = *(longlong *)(local_28 + 0x78);
      FUN_00412130(*(undefined8 *)(local_20 + 0x10));
    }
  }
  if ((*(byte *)(param_1 + 0x69) & 4) != 0) {
    local_58 = (undefined8 *)(param_1 + 0x48);
    local_60 = *local_58;
    *local_58 = 0;
    FUN_00410f20(local_60);
  }
  return;
}

