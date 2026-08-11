/* Ghidra address: 00411b90 */
/* Ghidra symbol: FUN_00411b90 */


uint FUN_00411b90(void)

{
  BOOL BVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  DWORD local_24;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION local_20;
  uint local_14;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION local_10;
  
  local_30 = auStack_58;
  local_24 = 0;
  uVar3 = FUN_00406f00(L"kernel32.dll");
  lVar4 = thunk_FUN_041aa1c3(uVar3,"GetLogicalProcessorInformation");
  if (((lVar4 != 0) &&
      (BVar1 = GetLogicalProcessorInformation((PSYSTEM_LOGICAL_PROCESSOR_INFORMATION)0x0,&local_24),
      BVar1 == 0)) && (iVar2 = thunk_FUN_03ce33a6(), iVar2 == 0x7a)) {
    local_10 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION)FUN_004095c0(local_24);
    GetLogicalProcessorInformation(local_10,&local_24);
    local_20 = local_10;
    for (; local_24 != 0; local_24 = local_24 - 0x20) {
      if (((short)local_20->Relationship == RelationCache) && ((local_20->u).Cache.Level == '\x01'))
      {
        local_14 = (uint)(local_20->u).Cache.LineSize;
        FUN_00411c70(0,local_30);
        return local_14;
      }
      local_20 = local_20 + 1;
    }
    FUN_004095f0(local_10);
  }
  return 0x40;
}

