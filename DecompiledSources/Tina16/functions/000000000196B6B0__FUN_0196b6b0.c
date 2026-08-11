/* Ghidra address: 0196b6b0 */
/* Ghidra symbol: FUN_0196b6b0 */


void FUN_0196b6b0(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x198) = param_2;
  if (param_2 == 0) {
    FUN_00414480(param_1 + 0x200);
  }
  else {
    FUN_00414ad0(param_1 + 0x200,*(undefined8 *)(param_2 + 0x1c8));
  }
  return;
}

