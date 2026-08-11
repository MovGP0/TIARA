/* Ghidra address: 012c5fe0 */
/* Ghidra symbol: FUN_012c5fe0 */


void FUN_012c5fe0(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x848) + 0x260))(*(longlong **)(param_1 + 0x848));
  if (cVar1 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x850) + 0x268))(*(longlong **)(param_1 + 0x850),1);
  }
  return;
}

