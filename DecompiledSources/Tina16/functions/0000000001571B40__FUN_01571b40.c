/* Ghidra address: 01571b40 */
/* Ghidra symbol: FUN_01571b40 */


undefined8 FUN_01571b40(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_01571790(param_1,param_2);
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x10));
  }
  return param_2;
}

