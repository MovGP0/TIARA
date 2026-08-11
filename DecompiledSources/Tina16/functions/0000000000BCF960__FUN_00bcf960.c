/* Ghidra address: 00bcf960 */
/* Ghidra symbol: FUN_00bcf960 */


undefined4 FUN_00bcf960(longlong param_1,int param_2)

{
  undefined4 local_14;
  longlong local_10;
  
  local_10 = 0;
  if ((param_2 < 0) || (*(int *)(param_1 + 0x40) <= param_2)) {
    local_14 = 0;
  }
  else if ((*(byte *)(*(longlong *)(param_1 + 0x38) + 0x20 + (longlong)param_2 * 0x28) & 4) == 0) {
    local_14 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x18 + (longlong)param_2 * 0x28);
  }
  else {
    FUN_00bcf900(param_1,&local_10,param_2);
    local_14 = 0;
    if (local_10 != 0) {
      local_14 = *(undefined4 *)(local_10 + -4);
    }
  }
  FUN_00414480(&local_10);
  return local_14;
}

