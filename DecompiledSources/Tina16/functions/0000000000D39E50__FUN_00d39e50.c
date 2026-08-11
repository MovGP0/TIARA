/* Ghidra address: 00d39e50 */
/* Ghidra symbol: FUN_00d39e50 */


undefined4 FUN_00d39e50(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  
  FUN_0040d200(&local_68,0x50,0);
  local_68 = 0x50;
  local_64 = 0x100;
  thunk_FUN_0410b804(param_1,param_2,0xffffffff,&local_68);
  return CONCAT31((int3)((local_60 & 0x800) >> 8),(local_60 & 0x800) == 0x800);
}

