/* Ghidra address: 00667120 */
/* Ghidra symbol: FUN_00667120 */


undefined8 FUN_00667120(longlong param_1)

{
  int iVar1;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  code *local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_40;
  int local_38;
  int local_34;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_70 = auStack_98;
  local_30 = 0;
  local_28 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_40 = FUN_004afa30(*(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x48));
  iVar1 = *(int *)(local_40 + 0x10);
  local_34 = 0;
  local_38 = iVar1;
  if (-1 < iVar1 + -1) {
    do {
      if (local_34 == local_38 + -1) {
        local_30 = FUN_004aeac0(local_40,0);
      }
      else {
        FUN_004aeac0(local_40,0);
        FUN_004ae7e0(local_28);
        FUN_004ae870(local_40);
      }
      local_34 = local_34 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_20 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x48);
  FUN_00412130(*(undefined8 *)(local_20 + 0x10));
  iVar1 = *(int *)(local_28 + 0x10);
  local_34 = 0;
  if (-1 < iVar1 + -1) {
    do {
      local_50 = *(undefined8 *)(param_1 + 0xe0);
      local_58 = FUN_004aeac0(local_28,local_34);
      local_60 = FUN_00410f20;
      FUN_004d1a50(local_50,&local_60);
      local_34 = local_34 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(local_28);
  return local_30;
}

