/* Ghidra address: 0184cda0 */
/* Ghidra symbol: FUN_0184cda0 */


undefined8 FUN_0184cda0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x118) == 0) {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x160));
  }
  else {
    FUN_0184cda0(*(longlong *)(param_1 + 0x118),param_2);
  }
  return param_2;
}

