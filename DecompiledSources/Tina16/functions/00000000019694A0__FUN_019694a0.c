/* Ghidra address: 019694a0 */
/* Ghidra symbol: FUN_019694a0 */


void FUN_019694a0(longlong param_1,longlong param_2,undefined4 param_3)

{
  FUN_01967e60(param_1,param_2,param_3);
  if (((char)param_3 == '\x01') && (param_2 == *(longlong *)(param_1 + 600))) {
    *(undefined8 *)(param_1 + 600) = 0;
  }
  return;
}

