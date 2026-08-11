/* Ghidra address: 018b8130 */
/* Ghidra symbol: FUN_018b8130 */


void FUN_018b8130(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = (**(code **)*param_1)(param_1);
  *(int *)((longlong)param_1 + 100) = iVar1 + -1;
  if (iVar1 + -1 != -1) {
    uVar3 = FUN_01803bf0(*(undefined8 *)(param_1[0x13] + 0x28),L"previewpages");
    uVar3 = FUN_018039f0(uVar3,*(undefined4 *)((longlong)param_1 + 100));
    uVar2 = FUN_01803a10(uVar3);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    uVar3 = FUN_01803bf0(*(undefined8 *)(param_1[0x13] + 0x28),L"outline");
    uVar2 = FUN_01803a10(uVar3);
    *(undefined4 *)(param_1 + 0xd) = uVar2;
  }
  (**(code **)(*param_1 + 0x98))(param_1);
  return;
}

