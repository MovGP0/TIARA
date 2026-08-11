/* Ghidra address: 0072b900 */
/* Ghidra symbol: FUN_0072b900 */


void FUN_0072b900(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0xcc) = param_2;
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      thunk_FUN_041b2403(*(longlong *)(param_1 + 0xd8),0x474,1,
                         *(undefined8 *)(&DAT_01e065e0 + (longlong)param_2 * 8));
    }
  }
  return;
}

