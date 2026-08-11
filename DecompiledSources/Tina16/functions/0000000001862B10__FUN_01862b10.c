/* Ghidra address: 01862b10 */
/* Ghidra symbol: FUN_01862b10 */


void FUN_01862b10(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x60))(*(longlong **)(param_1 + 0x48));
  if (iVar1 != param_2) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x88))(*(longlong **)(param_1 + 0x48),param_2);
  }
  return;
}

