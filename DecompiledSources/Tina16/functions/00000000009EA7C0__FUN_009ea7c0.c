/* Ghidra address: 009ea7c0 */
/* Ghidra symbol: FUN_009ea7c0 */


void FUN_009ea7c0(longlong *param_1,char param_2)

{
  if ((param_2 != *(char *)((longlong)param_1 + 0x42)) &&
     (*(char *)((longlong)param_1 + 0x42) = param_2, (char)param_1[8] != '\0')) {
    (**(code **)(*param_1 + 0x148))(param_1);
  }
  return;
}

