/* Ghidra address: 00727000 */
/* Ghidra symbol: FUN_00727000 */


undefined8 FUN_00727000(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x18) == 0) {
    FUN_004b18b0(param_1,param_2);
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x18));
  }
  return param_2;
}

