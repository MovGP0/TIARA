/* Ghidra address: 008f9470 */
/* Ghidra symbol: FUN_008f9470 */


void FUN_008f9470(longlong *param_1,char param_2)

{
  if ((char)param_1[4] != param_2) {
    if (param_2 != '\0') {
      (**(code **)(*param_1 + 0xd8))(param_1);
    }
    *(char *)(param_1 + 4) = param_2;
  }
  return;
}

