/* Ghidra address: 004c8a70 */
/* Ghidra symbol: FUN_004c8a70 */


void FUN_004c8a70(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  FUN_00411a80(param_1,param_2);
  lVar1 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + -8);
  }
  if (0 < lVar1) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x50))
              (*(longlong **)(param_1 + 8),
               *(longlong *)(param_1 + 0x40) + -*(longlong *)(param_1 + 0x20),
               CONCAT71((int7)((ulonglong)-*(longlong *)(param_1 + 0x20) >> 8),1));
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

