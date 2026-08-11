/* Ghidra address: 00bbaa40 */
/* Ghidra symbol: FUN_00bbaa40 */


void FUN_00bbaa40(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_24;
  longlong local_20 [2];
  
  local_20[0] = 0;
  if (((*(char *)(param_1 + 0x4a) == '\0') || (*(char *)(param_1 + 0x4c) == '\0')) ||
     (*(char *)(param_1 + 0x1c) == '\0')) {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x20);
  }
  else {
    if (*(char *)(param_1 + 0x25) == '\0') {
      local_24 = param_2;
      if (1 < *(int *)(param_1 + 0x58)) {
        local_24 = param_2 + *(int *)(param_1 + 0x58) + -1;
      }
    }
    else {
      local_24 = param_2 + -1;
    }
    FUN_0043f750(local_20,local_24);
    iVar2 = 0;
    if (local_20[0] != 0) {
      iVar2 = *(int *)(local_20[0] + -4);
    }
    iVar1 = *(int *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x20) < iVar2) {
      iVar1 = iVar2;
    }
    if ((*(int *)(param_1 + 0x50) != iVar1) &&
       (*(int *)(param_1 + 0x50) = iVar1, *(longlong *)(param_1 + 0x38) != 0)) {
      (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_1);
    }
  }
  FUN_00414480(local_20);
  return;
}

