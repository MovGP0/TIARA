/* Ghidra address: 0188b960 */
/* Ghidra symbol: FUN_0188b960 */


void FUN_0188b960(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0xb0))(*(longlong **)(param_1 + 0x70));
  if (iVar1 == -1) {
    iVar1 = 0;
  }
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))(*(longlong **)(param_1 + 0x70),iVar1);
  return;
}

