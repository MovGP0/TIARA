/* Ghidra address: 00f6e300 */
/* Ghidra symbol: FUN_00f6e300 */


void FUN_00f6e300(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x78) + (longlong)*(int *)(param_1 + 0x74) * 8) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 4 + (longlong)*(int *)(param_1 + 0x74) * 8) =
       param_3;
  *(undefined1 *)(param_1 + 0x88 + (longlong)*(int *)(param_1 + 0x74)) = param_4;
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  return;
}

