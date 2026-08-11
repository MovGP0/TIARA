/* Ghidra address: 00b4e2c0 */
/* Ghidra symbol: FUN_00b4e2c0 */


void FUN_00b4e2c0(longlong param_1,longlong param_2)

{
  if (*(char *)(param_1 + 0x20) == '\0') {
    if (*(char *)(param_2 + 8) == '\0') {
      FUN_00b4e300(param_1,param_2);
    }
    if (param_2 == *(longlong *)(param_1 + 0x10)) {
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  return;
}

