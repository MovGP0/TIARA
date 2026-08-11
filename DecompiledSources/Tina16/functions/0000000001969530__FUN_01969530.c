/* Ghidra address: 01969530 */
/* Ghidra symbol: FUN_01969530 */


void FUN_01969530(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 600) = param_2;
  if (param_2 == 0) {
    FUN_00414480(param_1 + 0x260);
  }
  else {
    FUN_00414ad0(param_1 + 0x260,*(undefined8 *)(param_2 + 0x1c8));
  }
  return;
}

