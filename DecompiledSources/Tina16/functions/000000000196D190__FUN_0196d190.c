/* Ghidra address: 0196d190 */
/* Ghidra symbol: FUN_0196d190 */


void FUN_0196d190(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x18) = param_2;
  if (param_2 == 0) {
    FUN_00414480(param_1 + 0x20);
  }
  else {
    FUN_00414ad0(param_1 + 0x20,*(undefined8 *)(param_2 + 0x1c8));
  }
  return;
}

