/* Ghidra address: 0072a090 */
/* Ghidra symbol: FUN_0072a090 */


void FUN_0072a090(longlong *param_1,char param_2)

{
  if (param_2 != (char)param_1[5]) {
    *(char *)(param_1 + 5) = param_2;
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  return;
}

