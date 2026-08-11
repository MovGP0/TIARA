/* Ghidra address: 008363b0 */
/* Ghidra symbol: FUN_008363b0 */


void FUN_008363b0(longlong param_1,short param_2,ushort param_3)

{
  int local_20;
  int local_1c;
  
  FUN_00835860(param_1,&local_1c,&local_20);
  if (param_2 == 0x24) {
    if ((param_3 & 1) == 0) {
      FUN_008358c0(param_1,0);
    }
    else {
      if ((local_1c != *(int *)(param_1 + 0x4ec)) && (local_20 != local_1c + 1)) {
        local_20 = local_1c + 1;
      }
      FUN_00835890(param_1,0,local_20);
      FUN_00835cc0(param_1);
    }
    *(undefined4 *)(param_1 + 0x4ec) = 0;
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_008358c0(param_1,*(undefined4 *)(param_1 + 0x4e4));
    }
    else {
      if ((local_20 != *(int *)(param_1 + 0x4ec)) && (local_20 != local_1c + 1)) {
        local_1c = local_20 + -1;
      }
      FUN_00835890(param_1,local_1c,*(undefined4 *)(param_1 + 0x4e4));
      FUN_00835cc0(param_1);
    }
    *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_1 + 0x4e4);
  }
  return;
}

