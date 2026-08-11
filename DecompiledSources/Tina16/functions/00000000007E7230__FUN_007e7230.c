/* Ghidra address: 007e7230 */
/* Ghidra symbol: FUN_007e7230 */


void FUN_007e7230(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    FUN_007dddc0(*(undefined8 *)(param_1 + 0x80),0);
  }
  else {
    FUN_007dddc0(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_2 + 0x80));
  }
  return;
}

