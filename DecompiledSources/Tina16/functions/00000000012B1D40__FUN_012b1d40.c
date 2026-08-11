/* Ghidra address: 012b1d40 */
/* Ghidra symbol: FUN_012b1d40 */


void FUN_012b1d40(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xb98) + 0x260))(*(longlong **)(param_1 + 0xb98));
  if (iVar1 != -1) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xb98) + 0x260))(*(longlong **)(param_1 + 0xb98))
    ;
    (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0xb0))(*(longlong **)(param_1 + 0xdb8),uVar2);
  }
  return;
}

