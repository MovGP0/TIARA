/* Ghidra address: 01bb5eb0 */
/* Ghidra symbol: FUN_01bb5eb0 */


void FUN_01bb5eb0(longlong param_1)

{
  longlong lVar1;
  
  FUN_00410f20(*(undefined8 *)(param_1 + 0x6e8));
  DAT_021113e8 = 0;
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    lVar1 = FUN_0198d430(*(longlong *)(param_1 + 0x6f0));
    if (lVar1 != 0) {
      FUN_01994230(*(undefined8 *)(param_1 + 0x6f0));
    }
  }
  return;
}

