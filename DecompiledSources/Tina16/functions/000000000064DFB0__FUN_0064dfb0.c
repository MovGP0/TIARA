/* Ghidra address: 0064dfb0 */
/* Ghidra symbol: FUN_0064dfb0 */


void FUN_0064dfb0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0xfd) != param_2) {
    *(char *)(param_1 + 0xfd) = param_2;
    *(undefined1 *)(param_1 + 0xfe) = 0;
    FUN_0064fca0(param_1,0xb022,0,0);
  }
  return;
}

