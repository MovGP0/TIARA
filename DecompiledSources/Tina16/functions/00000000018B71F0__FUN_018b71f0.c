/* Ghidra address: 018b71f0 */
/* Ghidra symbol: FUN_018b71f0 */


void FUN_018b71f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_018b7220(param_1);
  if (*(longlong *)(param_1 + 8) != lVar1) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28);
  }
  return;
}

