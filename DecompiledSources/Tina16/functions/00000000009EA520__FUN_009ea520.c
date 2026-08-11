/* Ghidra address: 009ea520 */
/* Ghidra symbol: FUN_009ea520 */


void FUN_009ea520(longlong *param_1,char param_2)

{
  if ((char)param_1[8] != param_2) {
    if (param_2 != '\0') {
      (**(code **)(*param_1 + 0x148))(param_1);
    }
    *(char *)(param_1 + 8) = param_2;
  }
  return;
}

