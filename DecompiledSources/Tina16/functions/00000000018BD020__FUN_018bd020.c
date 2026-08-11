/* Ghidra address: 018bd020 */
/* Ghidra symbol: FUN_018bd020 */


void FUN_018bd020(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_01803bf0(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x28),L"anchors");
  if ((-1 < param_2 + 1) && (iVar1 = FUN_01803a10(uVar2), param_2 + 1 < iVar1)) {
    while (iVar1 = FUN_01803a10(uVar2), param_2 + 1 < iVar1) {
      iVar1 = FUN_01803a10(uVar2);
      uVar3 = FUN_018039f0(uVar2,iVar1 + -1);
      FUN_00410f20(uVar3);
    }
  }
  return;
}

