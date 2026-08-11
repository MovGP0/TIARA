/* Ghidra address: 00a33990 */
/* Ghidra symbol: FUN_00a33990 */


void FUN_00a33990(longlong param_1,uint param_2,undefined8 param_3)

{
  if (param_2 <= *(int *)(param_1 + 0x10) - 1U) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * 8) = param_3;
  }
  return;
}

