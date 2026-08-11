/* Ghidra address: 00c31cb0 */
/* Ghidra symbol: FUN_00c31cb0 */


void FUN_00c31cb0(longlong *param_1,char param_2)

{
  if (param_2 != (char)param_1[1]) {
    *(char *)(param_1 + 1) = param_2;
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return;
}

