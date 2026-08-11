/* Ghidra address: 0170b860 */
/* Ghidra symbol: FUN_0170b860 */


void FUN_0170b860(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))(*(longlong **)(param_1 + 0x30));
  if (0 < iVar1) {
    FUN_01709e70(param_1,L"Data transfer",L"Data transfer...");
    FUN_0170b2d0(param_1);
    FUN_01709e70(param_1,L"Finished",L"Finished.");
  }
  return;
}

