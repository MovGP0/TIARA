/* Ghidra address: 012bc4f0 */
/* Ghidra symbol: FUN_012bc4f0 */


void FUN_012bc4f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_019a4600();
  if (*(longlong *)(param_1 + 0x6f0) == lVar1) {
    lVar1 = FUN_0198d430(*(undefined8 *)(param_1 + 0x6f0));
    if (lVar1 != 0) {
      FUN_01994230(*(undefined8 *)(param_1 + 0x6f0));
    }
  }
  FUN_012bc3d0(*(undefined8 *)(param_1 + 0x6f8),1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x6f8));
  DAT_02107780 = 0;
  DAT_01f2fdf0 = 1;
  return;
}

