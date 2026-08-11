/* Ghidra address: 006f15e0 */
/* Ghidra symbol: FUN_006f15e0 */


void FUN_006f15e0(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x11)) {
    *(char *)(param_1 + 0x11) = param_2;
    FUN_00655b90(*(undefined8 *)(param_1 + 8));
  }
  return;
}

