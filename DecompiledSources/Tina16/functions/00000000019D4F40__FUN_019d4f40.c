/* Ghidra address: 019d4f40 */
/* Ghidra symbol: FUN_019d4f40 */


void FUN_019d4f40(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_0072d440(L"The defaults will be loaded. Are you sure?",3,0xb,0);
  if (iVar1 == 6) {
    (**(code **)(**(longlong **)(param_1 + 0x720) + 0x268))(*(longlong **)(param_1 + 0x720),0);
    FUN_019d5d90(param_1,1);
    FUN_019d62c0(param_1);
  }
  return;
}

