/* Ghidra address: 005fe010 */
/* Ghidra symbol: FUN_005fe010 */


undefined1 FUN_005fe010(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined1 local_9;
  
  local_20 = auStack_48;
  FUN_00427930(&DAT_02011ff8);
  local_9 = *(int *)(param_1 + 0x58) == 0;
  if ((bool)local_9) {
    FUN_005fdf10(param_1);
  }
  FUN_00427ff0(&DAT_02011ff8);
  return local_9;
}

