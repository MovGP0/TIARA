/* Ghidra address: 0195a600 */
/* Ghidra symbol: FUN_0195a600 */


void FUN_0195a600(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x1b0) = param_2;
  if (param_2 == 0) {
    FUN_00414480(param_1 + 0x1b8);
  }
  else {
    FUN_00414ad0(param_1 + 0x1b8,*(undefined8 *)(param_2 + 0x1c8));
  }
  return;
}

