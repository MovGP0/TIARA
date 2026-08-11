/* Ghidra address: 01141330 */
/* Ghidra symbol: FUN_01141330 */


void FUN_01141330(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))(*(longlong **)(param_1 + 0x6f0));
  if (*(char *)(param_1 + 0x780) != (char)(cVar1 + '\a')) {
    *(char *)(param_1 + 0x780) = cVar1 + '\a';
    FUN_01141380(param_1,param_2);
  }
  return;
}

