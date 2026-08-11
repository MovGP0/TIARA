/* Ghidra address: 0196b730 */
/* Ghidra symbol: FUN_0196b730 */


undefined8 FUN_0196b730(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x198) == 0) {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x200));
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x198) + 0x1c8));
  }
  return param_2;
}

