/* Ghidra address: 0114d330 */
/* Ghidra symbol: FUN_0114d330 */


void FUN_0114d330(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))(*(longlong **)(param_1 + 0x718));
  if (*(char *)(param_1 + 0x7c8) != (char)(cVar1 + '\a')) {
    *(char *)(param_1 + 0x7c8) = cVar1 + '\a';
    FUN_0114d180(param_1);
  }
  return;
}

