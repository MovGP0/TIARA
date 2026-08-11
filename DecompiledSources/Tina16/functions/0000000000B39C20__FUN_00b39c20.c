/* Ghidra address: 00b39c20 */
/* Ghidra symbol: FUN_00b39c20 */


void FUN_00b39c20(longlong param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x14) == '\0') {
    FUN_00b39db0(param_1,param_2);
  }
  if (param_2 == *(longlong *)(param_1 + 8)) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}

