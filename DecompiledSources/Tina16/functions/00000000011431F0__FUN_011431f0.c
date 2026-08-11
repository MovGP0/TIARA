/* Ghidra address: 011431f0 */
/* Ghidra symbol: FUN_011431f0 */


undefined8 FUN_011431f0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 8);
  for (iVar4 = 0; iVar4 < *(int *)(lVar1 + 0x10); iVar4 = iVar4 + 1) {
    uVar3 = FUN_01d347d0(lVar1,iVar4);
    FUN_01cc0ae0(uVar3,&local_20);
    iVar2 = FUN_00416db0(local_20,*(undefined8 *)(param_1 + 0xa8));
    if (iVar2 == 0) break;
  }
  if (iVar4 < *(int *)(lVar1 + 0x10)) {
    local_28 = FUN_01d347d0(lVar1,iVar4);
  }
  FUN_00414480(&local_20);
  return local_28;
}

