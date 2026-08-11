/* Ghidra address: 00614850 */
/* Ghidra symbol: FUN_00614850 */


void FUN_00614850(longlong *param_1)

{
  FUN_004d3040(param_1);
  if ((char)param_1[0x11] != '\0') {
    (**(code **)(*param_1 + 0x98))(param_1);
  }
  return;
}

