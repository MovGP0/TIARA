/* Ghidra address: 0171abe0 */
/* Ghidra symbol: FUN_0171abe0 */


bool FUN_0171abe0(longlong param_1)

{
  int iVar1;
  bool local_29;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  if (**(longlong **)(param_1 + 0x1b0) == 0) {
    FUN_00414b50(&local_10,*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x40));
  }
  else {
    FUN_017170e0(*(undefined8 *)(*(longlong *)(param_1 + 400) + 0x20),&local_10,
                 **(undefined8 **)(param_1 + 0x1b0));
  }
  FUN_00416880(&local_18,*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x20));
  if ((local_10 == 0) || (local_18 == 0)) {
    if (local_10 == 0) {
      if (*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x20) == 0) {
        local_29 = true;
      }
      else {
        FUN_00416880(&local_28,*(undefined8 *)(*(longlong *)(param_1 + 0x158) + 0x20));
        iVar1 = FUN_00416db0(local_28,local_18);
        local_29 = iVar1 == 0;
      }
    }
    else {
      iVar1 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 0x158) + 0x40),local_10);
      local_29 = iVar1 == 0;
    }
  }
  else {
    iVar1 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 0x158) + 0x40),local_10);
    if (iVar1 == 0) {
      FUN_00416880(&local_20,*(undefined8 *)(*(longlong *)(param_1 + 0x158) + 0x20));
      iVar1 = FUN_00416db0(local_20,local_18);
      if (iVar1 == 0) {
        local_29 = true;
        goto code_r0x0171ad44;
      }
    }
    local_29 = false;
  }
code_r0x0171ad44:
  FUN_00414560(&local_28,4);
  return local_29;
}

