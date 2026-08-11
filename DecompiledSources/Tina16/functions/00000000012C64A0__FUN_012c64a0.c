/* Ghidra address: 012c64a0 */
/* Ghidra symbol: FUN_012c64a0 */


void FUN_012c64a0(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x8b8) + 0x260))(*(longlong **)(param_1 + 0x8b8));
  if (cVar1 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x268))(*(longlong **)(param_1 + 0x8c0),1);
  }
  return;
}

