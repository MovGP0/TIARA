/* Ghidra address: 00cd0bb0 */
/* Ghidra symbol: FUN_00cd0bb0 */


bool FUN_00cd0bb0(longlong param_1)

{
  int iVar1;
  bool local_21;
  wchar_t *local_20;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00441a10(&local_10,*(undefined8 *)(param_1 + 0x18));
  local_20 = L".p12";
  local_18 = L".pfx";
  iVar1 = FUN_00874bb0(local_10,&local_20,1,0);
  if (iVar1 == -1) {
    if (*(longlong *)PTR_DAT_020035b8 == 0) {
      iVar1 = FUN_00ccd170(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x18),1);
      local_21 = 0 < iVar1;
    }
    else {
      iVar1 = FUN_00ccd3a0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x18));
      local_21 = 0 < iVar1;
    }
  }
  else {
    iVar1 = FUN_00ccc0b0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x18));
    local_21 = 0 < iVar1;
  }
  FUN_00414480(&local_10);
  return local_21;
}

