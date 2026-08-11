/* Ghidra address: 00788ee0 */
/* Ghidra symbol: FUN_00788ee0 */


void FUN_00788ee0(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x2a) != '\0') {
    (**(code **)(*param_1 + 0x68))(param_1);
  }
  thunk_FUN_03a2fc9d(param_1[1],0,0);
  return;
}

