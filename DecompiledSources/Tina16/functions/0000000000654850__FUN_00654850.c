/* Ghidra address: 00654850 */
/* Ghidra symbol: FUN_00654850 */


bool FUN_00654850(longlong param_1,longlong param_2)

{
  for (; (param_2 != 0 && (param_2 != param_1)); param_2 = *(longlong *)(param_2 + 0x78)) {
  }
  return param_2 != 0;
}

