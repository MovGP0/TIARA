/* Ghidra address: 017ec290 */
/* Ghidra symbol: FUN_017ec290 */


void FUN_017ec290(longlong param_1)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x260))(*(longlong **)(param_1 + 0x6c8));
  *(undefined1 *)(param_1 + 0x6d8) = uVar1;
  return;
}

