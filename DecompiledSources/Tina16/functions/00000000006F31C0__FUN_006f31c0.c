/* Ghidra address: 006f31c0 */
/* Ghidra symbol: FUN_006f31c0 */


void FUN_006f31c0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x510) != param_2) {
    FUN_006efe10(*(undefined8 *)(param_1 + 0x4e0));
    *(char *)(param_1 + 0x510) = param_2;
    FUN_00655b90(param_1);
  }
  return;
}

