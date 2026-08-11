/* Ghidra address: 01d85580 */
/* Ghidra symbol: FUN_01d85580 */


undefined8 FUN_01d85580(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      FUN_01d84a80(param_2);
    }
    else {
      FUN_01d84ec0(param_2,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x18));
  }
  return param_2;
}

