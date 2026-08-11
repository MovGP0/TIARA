/* Ghidra address: 01862ad0 */
/* Ghidra symbol: FUN_01862ad0 */


void FUN_01862ad0(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x48))(*(longlong **)(param_1 + 0x48));
  if (iVar1 != param_2) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x70))(*(longlong **)(param_1 + 0x48),param_2);
  }
  return;
}

