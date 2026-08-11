/* Ghidra address: 0072e8e0 */
/* Ghidra symbol: FUN_0072e8e0 */


int FUN_0072e8e0(longlong param_1)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 *local_40;
  int local_34;
  int local_30;
  undefined4 local_28;
  int local_24;
  longlong local_20;
  
  local_50 = auStack_78;
  local_58 = 0;
  local_24 = 0;
  local_20 = FUN_0067eb90(&PTR_FUN_00669e80,1,0);
  iVar1 = *(int *)(*(longlong *)(param_1 + 200) + 0x20);
  local_28 = 0;
  if (-1 < iVar1 + -1) {
    local_40 = *(undefined8 **)(param_1 + 0xf8);
    do {
      FUN_0072e890(param_1,&local_58,*local_40);
      FUN_0064de00(local_20,local_58);
      local_30 = *(int *)(local_20 + 0x98) + *(int *)(param_1 + 0xc0);
      local_34 = local_30;
      if (local_30 < local_24) {
        local_34 = local_24;
      }
      local_24 = local_34;
      local_40 = local_40 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(local_20);
  FUN_00414480(&local_58);
  return local_24;
}

