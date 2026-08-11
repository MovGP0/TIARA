/* Ghidra address: 012bc750 */
/* Ghidra symbol: FUN_012bc750 */


void FUN_012bc750(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x700) == 0) {
    FUN_012bc780();
  }
  else {
    FUN_012bc820(param_1,*(undefined8 *)(param_1 + 0x700));
  }
  return;
}

