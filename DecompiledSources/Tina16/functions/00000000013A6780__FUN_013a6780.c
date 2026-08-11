/* Ghidra address: 013a6780 */
/* Ghidra symbol: FUN_013a6780 */


void FUN_013a6780(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_00410f20(*(undefined8 *)(param_2 + 0x88));
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x78) + 8);
  if (lVar1 != 0) {
    FUN_004095f0(lVar1);
  }
  FUN_004095f0(*(undefined8 *)(param_2 + 0x78));
  return;
}

