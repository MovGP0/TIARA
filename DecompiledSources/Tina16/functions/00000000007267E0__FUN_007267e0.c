/* Ghidra address: 007267e0 */
/* Ghidra symbol: FUN_007267e0 */


undefined8 FUN_007267e0(longlong param_1)

{
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_1 + 0xd4);
  if (*(longlong *)(param_1 + 0x108) != 0) {
    thunk_FUN_03e49910(*(longlong *)(param_1 + 0x108),local_20);
    local_10 = local_20[0];
  }
  return local_10;
}

