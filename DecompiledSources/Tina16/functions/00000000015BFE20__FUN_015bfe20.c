/* Ghidra address: 015bfe20 */
/* Ghidra symbol: FUN_015bfe20 */


uint FUN_015bfe20(undefined8 param_1,undefined8 param_2)

{
  int local_20;
  longlong local_18;
  int local_10;
  uint local_c;
  
  local_18 = 0;
  FUN_00414b50(&local_18,param_2);
  local_c = 0;
  local_20 = 0;
  if (local_18 != 0) {
    local_20 = *(int *)(local_18 + -4);
  }
  local_10 = 1;
  if (0 < local_20) {
    do {
      local_c = (local_c * 4 | local_c >> 0x1e) ^
                (uint)*(ushort *)(local_18 + -2 + (longlong)local_10 * 2);
      local_10 = local_10 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  FUN_00414480(&local_18);
  return local_c;
}

