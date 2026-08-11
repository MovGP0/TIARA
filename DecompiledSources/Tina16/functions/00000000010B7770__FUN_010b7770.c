/* Ghidra address: 010b7770 */
/* Ghidra symbol: FUN_010b7770 */


longlong FUN_010b7770(longlong param_1)

{
  FUN_00410f20(*(undefined8 *)(param_1 + 0x198));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    thunk_FUN_040d2fd9(*(longlong *)(param_1 + 0x38));
  }
  FUN_00414480(param_1 + 0x188);
  FUN_00414480(param_1 + 400);
  FUN_00b94db0(param_1);
  return param_1;
}

