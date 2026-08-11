/* Ghidra address: 009949a0 */
/* Ghidra symbol: FUN_009949a0 */


undefined8 FUN_009949a0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x18) == 0) {
    FUN_00414520(param_2);
  }
  else {
    FUN_00994bf0(*(longlong *)(param_1 + 0x18),param_2);
  }
  return param_2;
}

