/* Ghidra address: 0195a680 */
/* Ghidra symbol: FUN_0195a680 */


undefined8 FUN_0195a680(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x1b0) == 0) {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x1b8));
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x1c8));
  }
  return param_2;
}

