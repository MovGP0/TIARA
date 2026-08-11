/* Ghidra address: 008279d0 */
/* Ghidra symbol: FUN_008279d0 */


void FUN_008279d0(longlong param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x2c)) && (param_2 != '\0')) {
    FUN_00827890(param_1);
    *(char *)(param_1 + 0x2c) = param_2;
    FUN_008278f0(param_1,*(undefined8 *)(param_1 + 8));
  }
  return;
}

