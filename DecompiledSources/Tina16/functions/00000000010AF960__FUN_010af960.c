/* Ghidra address: 010af960 */
/* Ghidra symbol: FUN_010af960 */


undefined8 FUN_010af960(longlong param_1,int param_2)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x18) >> 8),
                  *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 4) != -1);
}

