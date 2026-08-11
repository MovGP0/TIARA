/* Ghidra address: 00f98ae0 */
/* Ghidra symbol: FUN_00f98ae0 */


void FUN_00f98ae0(longlong param_1)

{
  char cVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x268))
            (*(longlong **)(param_1 + 0x6b8),*(undefined1 *)(param_1 + 0x7ac));
  (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x268))
            (*(longlong **)(param_1 + 0x6c0),*(char *)(param_1 + 0x7ac) == '\0');
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x260))(*(longlong **)(param_1 + 0x6b8));
  if (cVar1 == '\0') {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e0),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),1);
  }
  else {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e0),1);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),0);
  }
  return;
}

