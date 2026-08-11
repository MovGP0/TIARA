/* Ghidra address: 0146f090 */
/* Ghidra symbol: FUN_0146f090 */


void FUN_0146f090(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x738);
  uVar3 = FUN_00bfaa50(lVar1);
  plVar2 = *(longlong **)(lVar1 + 0x4e8);
  (**(code **)(*plVar2 + 200))(plVar2,uVar3,L"# Hide from here");
  return;
}

