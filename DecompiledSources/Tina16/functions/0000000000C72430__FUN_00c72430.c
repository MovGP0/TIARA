/* Ghidra address: 00c72430 */
/* Ghidra symbol: FUN_00c72430 */


void FUN_00c72430(longlong param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x2c)) && (param_2 != '\0')) {
    FUN_00c722f0(param_1);
    *(char *)(param_1 + 0x2c) = param_2;
    FUN_00c72350(param_1,*(undefined8 *)(param_1 + 8));
  }
  return;
}

