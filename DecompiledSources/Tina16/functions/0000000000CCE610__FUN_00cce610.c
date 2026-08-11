/* Ghidra address: 00cce610 */
/* Ghidra symbol: FUN_00cce610 */


longlong * FUN_00cce610(longlong *param_1)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong *local_30;
  
  local_40 = auStack_68;
  local_30 = (longlong *)FUN_00882aa0(&PTR_FUN_00cc8028,1,0);
  (**(code **)(*local_30 + 0x210))(local_30,1);
  local_30[0x40] = (longlong)param_1;
  local_30[0x3f] = *(longlong *)(*param_1 + 0xf0);
  local_30[0x41] = param_1[0x27];
  local_30[0x42] = param_1[0x28];
  *(undefined1 *)((longlong)local_30 + 0x1b1) = 1;
  (**(code **)(*(longlong *)local_30[0x39] + 0x10))((longlong *)local_30[0x39],param_1[0x1f]);
  *(undefined1 *)(local_30[0x39] + 0x2a) = 3;
  local_30[0x38] = 0;
  return local_30;
}

