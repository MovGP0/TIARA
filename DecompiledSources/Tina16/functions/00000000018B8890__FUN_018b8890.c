/* Ghidra address: 018b8890 */
/* Ghidra symbol: FUN_018b8890 */


int FUN_018b8890(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_01803bf0(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x28),L"anchors");
  iVar1 = FUN_01803a10(uVar2);
  return iVar1 + -1;
}

