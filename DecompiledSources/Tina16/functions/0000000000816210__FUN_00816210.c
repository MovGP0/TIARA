/* Ghidra address: 00816210 */
/* Ghidra symbol: FUN_00816210 */


undefined4 FUN_00816210(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  
  FUN_0040d200(&local_78,0x50,0);
  local_78 = 0x50;
  local_74 = 0x10;
  thunk_FUN_0410b804(param_2,*(undefined2 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x40) + 8 +
                                (longlong)param_3 * 0x20) + 0xa8),0,&local_78);
  return CONCAT31((int3)((local_70 & 0x4000) >> 8),(local_70 & 0x4000) == 0x4000);
}

