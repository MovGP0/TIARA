/* Ghidra address: 005fe090 */
/* Ghidra symbol: FUN_005fe090 */


void FUN_005fe090(longlong param_1)

{
  FUN_00427ff0(param_1 + 0x30);
  FUN_00427930(&DAT_02011ff8);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
  FUN_00427ff0(&DAT_02011ff8);
  return;
}

