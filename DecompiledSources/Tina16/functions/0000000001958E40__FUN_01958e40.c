/* Ghidra address: 01958e40 */
/* Ghidra symbol: FUN_01958e40 */


void FUN_01958e40(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x10) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x10) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x10) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x10) = param_2;
  return;
}

