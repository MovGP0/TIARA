/* Ghidra address: 01cfd450 */
/* Ghidra symbol: FUN_01cfd450 */


void FUN_01cfd450(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0xc0) != 0) && (*(char *)(param_1 + 0xd4) == '\0')) {
    FUN_01cfd490(param_1,*(longlong *)(param_1 + 0xc0));
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  return;
}

