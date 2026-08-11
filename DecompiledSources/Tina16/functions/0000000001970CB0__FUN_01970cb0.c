/* Ghidra address: 01970cb0 */
/* Ghidra symbol: FUN_01970cb0 */


undefined8 FUN_01970cb0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x160) == 0) {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x168));
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x160) + 0x1c8));
  }
  return param_2;
}

