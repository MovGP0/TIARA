/* Ghidra address: 004bdf60 */
/* Ghidra symbol: FUN_004bdf60 */


void FUN_004bdf60(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x50))
            (*(longlong **)(param_1 + 8),
             *(longlong *)(param_1 + 0x20) + -*(longlong *)(param_1 + 0x28),
             CONCAT71((int7)((ulonglong)-*(longlong *)(param_1 + 0x28) >> 8),1));
  FUN_004baf90(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

