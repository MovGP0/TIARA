/* Ghidra address: 00f34950 */
/* Ghidra symbol: FUN_00f34950 */


undefined8 FUN_00f34950(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_00414ad0(param_2,PTR_u_false_01efb780);
  }
  else {
    FUN_00414ad0(param_2,PTR_u_true_01efb788);
  }
  return param_2;
}

