/* Ghidra address: 01a91d20 */
/* Ghidra symbol: FUN_01a91d20 */


void FUN_01a91d20(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x38) + -0x20))(*(undefined8 *)(param_2 + 0x38),1);
  }
  return;
}

