/* Ghidra address: 016d3b20 */
/* Ghidra symbol: FUN_016d3b20 */


void FUN_016d3b20(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    *(undefined2 *)(param_1 + 0x4a8) = 1;
  }
  else {
    *(undefined2 *)(param_1 + 0x4a8) = 2;
  }
  FUN_016d3db0();
  return;
}

