/* Ghidra address: 016351a0 */
/* Ghidra symbol: FUN_016351a0 */


undefined8 FUN_016351a0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x660) == 0) {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x638));
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x660));
  }
  return param_2;
}

