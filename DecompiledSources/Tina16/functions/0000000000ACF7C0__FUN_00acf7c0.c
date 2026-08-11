/* Ghidra address: 00acf7c0 */
/* Ghidra symbol: FUN_00acf7c0 */


void FUN_00acf7c0(longlong param_1)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x260))(*(longlong **)(param_1 + 0x140));
  *(undefined1 *)(param_1 + 0x148) = uVar1;
  return;
}

