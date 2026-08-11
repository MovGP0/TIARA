/* Ghidra address: 0111d1b0 */
/* Ghidra symbol: FUN_0111d1b0 */


void FUN_0111d1b0(longlong param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_0111c240(param_1,*(longlong *)(param_1 + 0x120) +
                               (longlong)*(int *)(param_1 + 0x150) * 2);
  *(undefined1 *)(param_1 + 0x163) = uVar1;
  *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x13c);
  return;
}

