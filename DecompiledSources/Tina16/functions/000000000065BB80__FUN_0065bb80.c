/* Ghidra address: 0065bb80 */
/* Ghidra symbol: FUN_0065bb80 */


void FUN_0065bb80(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x390) != param_2) {
    *(char *)(param_1 + 0x390) = param_2;
    *(undefined1 *)(param_1 + 0x394) = 0;
    FUN_0064fca0(param_1,0xb010,0,0);
  }
  return;
}

