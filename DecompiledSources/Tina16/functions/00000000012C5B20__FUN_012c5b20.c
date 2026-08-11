/* Ghidra address: 012c5b20 */
/* Ghidra symbol: FUN_012c5b20 */


void FUN_012c5b20(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7c8) + 0x260))(*(longlong **)(param_1 + 0x7c8));
  if (cVar1 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 2000) + 0x268))(*(longlong **)(param_1 + 2000),1);
  }
  return;
}

