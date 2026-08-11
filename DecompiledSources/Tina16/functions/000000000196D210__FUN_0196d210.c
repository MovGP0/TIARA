/* Ghidra address: 0196d210 */
/* Ghidra symbol: FUN_0196d210 */


undefined8 FUN_0196d210(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x18) == 0) {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x1c8));
  }
  return param_2;
}

