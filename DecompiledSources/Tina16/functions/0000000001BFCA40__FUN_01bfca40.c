/* Ghidra address: 01bfca40 */
/* Ghidra symbol: FUN_01bfca40 */


void FUN_01bfca40(longlong *param_1,char param_2)

{
  if ((char)param_1[7] != param_2) {
    *(char *)(param_1 + 7) = param_2;
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return;
}

