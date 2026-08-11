/* Ghidra address: 00fd1480 */
/* Ghidra symbol: FUN_00fd1480 */


void FUN_00fd1480(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  *(undefined1 *)(param_1 + 0x7f1) = *(undefined1 *)(param_1 + 0x6fc + (longlong)(iVar1 + 1) * 4);
  if ((*(char *)(param_1 + 0x7f1) == '\x05') || (*(char *)(param_1 + 0x7f1) == '\x04')) {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f8),0);
  }
  else {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f8),1);
  }
  return;
}

