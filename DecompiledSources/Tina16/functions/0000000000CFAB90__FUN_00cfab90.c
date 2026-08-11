/* Ghidra address: 00cfab90 */
/* Ghidra symbol: FUN_00cfab90 */


undefined1 FUN_00cfab90(longlong *param_1)

{
  int iVar1;
  undefined1 local_29;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  local_29 = 1;
  iVar1 = (int)param_1[1];
  if (iVar1 == 0) {
    local_29 = 1;
    *(undefined4 *)(param_1 + 1) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 1) = 2;
    local_29 = 1;
  }
  else if (iVar1 == 3) {
    *(undefined4 *)(param_1 + 1) = 4;
    local_29 = 1;
  }
  else if (iVar1 == 4) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_00cddbf0(param_1,local_20);
    if (local_20[0] == 0) {
      local_29 = 0;
    }
    else {
      local_29 = 2;
      (**(code **)(*param_1 + 0x30))(param_1,0);
      (**(code **)(*param_1 + 0x28))(param_1,0);
      FUN_008b0310(&local_28);
      FUN_00cfb060(param_1,local_28);
    }
  }
  FUN_00414560(&local_28,2);
  return local_29;
}

