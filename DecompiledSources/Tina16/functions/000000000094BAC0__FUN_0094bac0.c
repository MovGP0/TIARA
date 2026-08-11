/* Ghidra address: 0094bac0 */
/* Ghidra symbol: FUN_0094bac0 */


void FUN_0094bac0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x188))(*(longlong **)(param_1 + 0x18));
  lVar2 = (**(code **)(*param_2 + 0x188))(param_2);
  if (lVar1 != lVar2) {
    uVar3 = FUN_0044d490(&PTR_FUN_00900e68,1,L"Wrong document error.");
    FUN_004134c0(uVar3);
  }
  return;
}

