/* Ghidra address: 0072a050 */
/* Ghidra symbol: FUN_0072a050 */


void FUN_0072a050(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x40) == param_1) {
      FUN_0072a780(*(longlong *)(param_1 + 8),0);
    }
  }
  else {
    FUN_0072a780(*(undefined8 *)(param_1 + 8),param_1);
  }
  return;
}

