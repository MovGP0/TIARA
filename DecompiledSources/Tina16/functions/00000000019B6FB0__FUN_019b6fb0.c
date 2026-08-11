/* Ghidra address: 019b6fb0 */
/* Ghidra symbol: FUN_019b6fb0 */


void FUN_019b6fb0(char *param_1,undefined8 param_2,char param_3)

{
  for (; (*param_1 != param_3 && (*(longlong *)(param_1 + 0x10) != 0));
      param_1 = *(char **)(param_1 + 0x10)) {
  }
  if (*param_1 == param_3) {
    *(undefined8 *)(param_1 + 8) = param_2;
  }
  return;
}

