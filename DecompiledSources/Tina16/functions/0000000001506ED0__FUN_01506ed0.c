/* Ghidra address: 01506ed0 */
/* Ghidra symbol: FUN_01506ed0 */


void FUN_01506ed0(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xb68) + 0x260))(*(longlong **)(param_1 + 0xb68));
  if (iVar2 != -1) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xb68) + 0x260))(*(longlong **)(param_1 + 0xb68))
    ;
    if (cVar1 == '\x01') {
      *(undefined1 *)(param_1 + 0x990) = 10;
      *(undefined1 *)(*(longlong *)(param_1 + 0x9b0) + 0x70) = 2;
    }
  }
  return;
}

