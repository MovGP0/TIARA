/* Ghidra address: 019695d0 */
/* Ghidra symbol: FUN_019695d0 */


undefined8 FUN_019695d0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 600) == 0) {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x260));
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 600) + 0x1c8));
  }
  return param_2;
}

