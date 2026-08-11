/* Ghidra address: 015a7530 */
/* Ghidra symbol: FUN_015a7530 */


void FUN_015a7530(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 local_18;
  
  for (local_18 = 0; local_18 < 0x20; local_18 = local_18 + 1) {
    uVar1 = FUN_015a74d0(param_2,*(undefined4 *)(param_2 + (longlong)local_18 * 4));
    *(undefined4 *)(param_1 + (longlong)local_18 * 4) = uVar1;
  }
  return;
}

