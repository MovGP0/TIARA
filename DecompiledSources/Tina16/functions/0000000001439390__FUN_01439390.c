/* Ghidra address: 01439390 */
/* Ghidra symbol: FUN_01439390 */


void FUN_01439390(longlong param_1)

{
  char cVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x128))(*(longlong **)(param_1 + 0x6b8),1);
  cVar1 = FUN_01b23030();
  if (((cVar1 != '\0') && (0 < *(int *)(*(longlong *)(param_1 + 0x6f8) + 0x10))) &&
     (*(char *)(param_1 + 0x1038) != '\x01')) {
    (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x128))(*(longlong **)(param_1 + 0x6b8),0);
  }
  return;
}

