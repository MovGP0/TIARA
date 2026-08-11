/* Ghidra address: 00f98be0 */
/* Ghidra symbol: FUN_00f98be0 */


void FUN_00f98be0(longlong param_1)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x260))(*(longlong **)(param_1 + 0x6b8));
  *(undefined1 *)(param_1 + 0x7ac) = uVar1;
  return;
}

