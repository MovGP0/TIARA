/* Ghidra address: 01832f60 */
/* Ghidra symbol: FUN_01832f60 */


void FUN_01832f60(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x19) == '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0xa0);
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  return;
}

