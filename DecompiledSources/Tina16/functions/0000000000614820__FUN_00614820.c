/* Ghidra address: 00614820 */
/* Ghidra symbol: FUN_00614820 */


void FUN_00614820(longlong *param_1)

{
  FUN_004d3030(param_1);
  if ((char)param_1[0x11] != '\0') {
    (**(code **)(*param_1 + 0x98))(param_1);
  }
  return;
}

