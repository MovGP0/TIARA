/* Ghidra address: 00d3a610 */
/* Ghidra symbol: FUN_00d3a610 */


undefined8 FUN_00d3a610(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  int local_14;
  undefined8 local_10;
  
  local_70 = auStack_98;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_00414480(param_2);
    FUN_0040d200(&local_68,0x50,0);
    local_68 = 0x50;
    local_64 = 0x140;
    local_30 = 0;
    thunk_FUN_0410b804(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),0xffffffff,
                       &local_68);
    if (((local_60 & 0x100) == 0x100) && (*(int *)PTR_DAT_02001bd8 < 10)) {
      FUN_0040d200(&local_68,0x50,0);
      local_68 = 0x50;
      local_64 = 0x20;
      thunk_FUN_0410b804(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),0xffffffff,
                         &local_68);
      FUN_004167d0(param_2,local_38);
    }
    else {
      local_14 = local_28 * 2 + 2;
      local_30 = FUN_004095c0((longlong)local_14);
      local_28 = local_28 + 1;
      local_10 = local_30;
      thunk_FUN_0410b804(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),0xffffffff,
                         &local_68);
      FUN_004167d0(param_2,local_10);
      FUN_004095f0(local_10,(longlong)local_14);
    }
  }
  else {
    local_70 = auStack_98;
    FUN_00414ad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x78));
  }
  return param_2;
}

