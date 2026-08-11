/* Ghidra address: 005fdf10 */
/* Ghidra symbol: FUN_005fdf10 */


void FUN_005fdf10(longlong param_1)

{
  FUN_00427930(&DAT_02011ff8);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  FUN_00427ff0(&DAT_02011ff8);
  FUN_00427930(param_1 + 0x30);
  return;
}

