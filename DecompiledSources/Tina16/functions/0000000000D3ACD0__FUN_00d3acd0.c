/* Ghidra address: 00d3acd0 */
/* Ghidra symbol: FUN_00d3acd0 */


bool FUN_00d3acd0(longlong param_1)

{
  undefined4 local_68;
  undefined4 local_64;
  uint local_5c;
  
  FUN_0040d200(&local_68,0x50,0);
  local_68 = 0x50;
  local_64 = 1;
  thunk_FUN_0410b804(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),0xffffffff,
                     &local_68);
  return (local_5c & 8) == 8;
}

