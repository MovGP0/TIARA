/* Ghidra address: 01816280 */
/* Ghidra symbol: FUN_01816280 */


undefined8 FUN_01816280(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x20) == 0) {
    FUN_018150c0(param_1,param_2);
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x20));
  }
  return param_2;
}

