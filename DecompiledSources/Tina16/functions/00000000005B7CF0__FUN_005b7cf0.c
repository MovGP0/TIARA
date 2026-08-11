/* Ghidra address: 005b7cf0 */
/* Ghidra symbol: FUN_005b7cf0 */


void FUN_005b7cf0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x44) * 0x10) =
       param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 8 + (longlong)*(int *)(param_1 + 0x44) * 0x10) =
       param_3;
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  return;
}

