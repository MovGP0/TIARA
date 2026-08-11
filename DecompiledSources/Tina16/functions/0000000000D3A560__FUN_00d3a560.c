/* Ghidra address: 00d3a560 */
/* Ghidra symbol: FUN_00d3a560 */


longlong FUN_00d3a560(longlong param_1)

{
  undefined4 local_68;
  undefined4 local_64;
  longlong local_40;
  longlong local_20;
  
  FUN_0040d200(&local_68,0x50,0);
  local_68 = 0x50;
  local_64 = 0x88;
  thunk_FUN_0410b804(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),0xffffffff,
                     &local_68);
  if (local_20 == 0) {
    local_20 = local_40;
  }
  return local_20;
}

