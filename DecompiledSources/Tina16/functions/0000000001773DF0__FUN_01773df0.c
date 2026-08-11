/* Ghidra address: 01773df0 */
/* Ghidra symbol: FUN_01773df0 */


undefined8 FUN_01773df0(longlong param_1)

{
  undefined8 local_20;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(char *)(param_1 + 0x62) == '\0') {
    local_20 = *(undefined8 *)(param_1 + 0xb0);
  }
  else {
    local_20 = 0;
  }
  FUN_00414480(&local_10);
  return local_20;
}

