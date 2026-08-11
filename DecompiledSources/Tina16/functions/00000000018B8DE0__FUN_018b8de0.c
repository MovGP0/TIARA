/* Ghidra address: 018b8de0 */
/* Ghidra symbol: FUN_018b8de0 */


int FUN_018b8de0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int local_24;
  undefined8 local_20;
  
  local_20 = 0;
  uVar3 = FUN_01803bf0(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x28),L"logicalpagenumbers");
  iVar1 = *(int *)(param_1 + 0xc);
  if (-1 < iVar1) {
    iVar2 = FUN_01803a10(uVar3);
    if (iVar1 < iVar2) {
      uVar3 = FUN_018039f0(uVar3,*(undefined4 *)(param_1 + 0xc));
      FUN_01803cc0(uVar3,&local_20,&LAB_018b8ee8);
      local_24 = FUN_0043fc00(local_20);
      goto code_r0x018b8e70;
    }
  }
  local_24 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x14)) + 1;
code_r0x018b8e70:
  FUN_00414480(&local_20);
  return local_24;
}

