/* Ghidra address: 010af940 */
/* Ghidra symbol: FUN_010af940 */


undefined8 FUN_010af940(longlong param_1,int param_2)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x10) >> 8),
                  *(int *)(*(longlong *)(param_1 + 0x10) + (longlong)param_2 * 4) != -1);
}

