/* Ghidra address: 006f1600 */
/* Ghidra symbol: FUN_006f1600 */


void FUN_006f1600(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x12)) {
    *(char *)(param_1 + 0x12) = param_2;
    FUN_00655b90(*(undefined8 *)(param_1 + 8));
  }
  return;
}

