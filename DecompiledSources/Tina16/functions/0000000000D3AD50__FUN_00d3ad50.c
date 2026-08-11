/* Ghidra address: 00d3ad50 */
/* Ghidra symbol: FUN_00d3ad50 */


undefined4 FUN_00d3ad50(longlong param_1)

{
  undefined4 local_68;
  undefined4 local_64;
  uint local_5c;
  
  FUN_0040d200(&local_68,0x50,0);
  local_68 = 0x50;
  local_64 = 1;
  thunk_FUN_0410b804(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),0xffffffff,
                     &local_68);
  return CONCAT31((int3)((local_5c & 0x1000) >> 8),(local_5c & 0x1000) == 0x1000);
}

