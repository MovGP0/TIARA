/* Ghidra address: 004b67b0 */
/* Ghidra symbol: FUN_004b67b0 */


void FUN_004b67b0(longlong *param_1,char param_2)

{
  if ((char)param_1[9] != param_2) {
    if (param_2 != '\0') {
      (**(code **)(*param_1 + 0x148))(param_1);
    }
    *(char *)(param_1 + 9) = param_2;
  }
  return;
}

