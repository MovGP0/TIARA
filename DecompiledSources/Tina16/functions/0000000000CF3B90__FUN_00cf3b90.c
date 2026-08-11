/* Ghidra address: 00cf3b90 */
/* Ghidra symbol: FUN_00cf3b90 */


undefined1 FUN_00cf3b90(longlong *param_1)

{
  int iVar1;
  undefined1 local_21;
  longlong local_20 [2];
  
  local_20[0] = 0;
  local_21 = 1;
  iVar1 = (int)param_1[1];
  if (iVar1 == 0) {
    FUN_00cddbf0(param_1,local_20);
    iVar1 = 0;
    if (local_20[0] != 0) {
      iVar1 = *(int *)(local_20[0] + -4);
    }
    if (iVar1 < 1) {
      local_21 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 1) = 1;
      local_21 = 1;
    }
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 1) = 2;
    local_21 = 1;
  }
  else if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 1) = 3;
    local_21 = 1;
  }
  else if (iVar1 == 3) {
    (**(code **)(*param_1 + 0x40))(param_1);
    local_21 = 2;
  }
  FUN_00414480(local_20);
  return local_21;
}

