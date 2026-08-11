/* Ghidra address: 00bc0bf0 */
/* Ghidra symbol: FUN_00bc0bf0 */


void FUN_00bc0bf0(longlong *param_1,char param_2)

{
  if ((char)param_1[5] != param_2) {
    *(char *)(param_1 + 5) = param_2;
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return;
}

