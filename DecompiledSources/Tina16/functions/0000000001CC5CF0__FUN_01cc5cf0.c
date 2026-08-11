/* Ghidra address: 01cc5cf0 */
/* Ghidra symbol: FUN_01cc5cf0 */


bool FUN_01cc5cf0(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  bool local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_004167d0(&local_10,*(undefined8 *)(param_2 + 0x10));
  iVar1 = FUN_004170c0(&LAB_01cc5eb8,local_10,1);
  if (0 < iVar1) {
    iVar1 = FUN_004170c0(&LAB_01cc5eb8,local_10,1);
    FUN_00416dc0(&local_28,local_10,1,iVar1 + -1);
    FUN_0043ea00(&local_20,local_28);
    FUN_00414b50(&local_10,local_20);
  }
  FUN_00414b50(&local_18,*(undefined8 *)(param_1 + 0x78));
  iVar1 = FUN_004170c0(&LAB_01cc5eb8,local_18,1);
  if (0 < iVar1) {
    iVar1 = FUN_004170c0(&LAB_01cc5eb8,local_18,1);
    FUN_00416dc0(&local_38,local_18,1,iVar1 + -1);
    FUN_0043ea00(&local_30,local_38);
    FUN_00414b50(&local_18,local_30);
  }
  if (param_3 == '\0') {
    if (local_10 == local_18) {
      local_39 = true;
    }
    else if ((local_10 == 0) || (local_18 == 0)) {
      local_39 = false;
    }
    else {
      iVar1 = FUN_0043e420(local_10,local_18);
      local_39 = iVar1 == 0;
    }
  }
  else {
    iVar1 = FUN_00416db0(local_10,local_18);
    local_39 = iVar1 == 0;
  }
  FUN_00414560(&local_38,6);
  return local_39;
}

