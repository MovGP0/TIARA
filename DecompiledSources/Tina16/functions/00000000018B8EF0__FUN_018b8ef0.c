/* Ghidra address: 018b8ef0 */
/* Ghidra symbol: FUN_018b8ef0 */


int FUN_018b8ef0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int local_2c;
  undefined8 local_28;
  longlong local_20;
  
  local_28 = 0;
  local_20 = 0;
  uVar3 = FUN_01803bf0(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x28),L"logicalpagenumbers");
  iVar1 = *(int *)(param_1 + 0xc);
  if (-1 < iVar1) {
    iVar2 = FUN_01803a10(uVar3);
    if (iVar1 < iVar2) {
      uVar3 = FUN_018039f0(uVar3,*(undefined4 *)(param_1 + 0xc));
      FUN_01803cc0(uVar3,&local_20,&DAT_018b902c);
      if (local_20 == 0) {
        local_2c = 0;
      }
      else {
        FUN_01803cc0(uVar3,&local_28,&DAT_018b902c);
        local_2c = FUN_0043fc00(local_28);
      }
      goto code_r0x018b8fae;
    }
  }
  local_2c = *(int *)(*(longlong *)(param_1 + 0x28) + 0x60) - *(int *)(param_1 + 0x14);
code_r0x018b8fae:
  FUN_00414560(&local_28,2);
  return local_2c;
}

