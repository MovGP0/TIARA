/* Ghidra address: 00cd0ce0 */
/* Ghidra symbol: FUN_00cd0ce0 */


bool FUN_00cd0ce0(longlong param_1)

{
  int iVar1;
  bool local_21;
  wchar_t *local_20;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00441a10(&local_10,*(undefined8 *)(param_1 + 0x20));
  local_20 = L".p12";
  local_18 = L".pfx";
  iVar1 = FUN_00874bb0(local_10,&local_20,1,0);
  if (iVar1 == -1) {
    iVar1 = FUN_00cccf40(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x20),1);
  }
  else {
    iVar1 = FUN_00ccbcf0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x20));
  }
  local_21 = 0 < iVar1;
  if (local_21) {
    iVar1 = (**(code **)PTR_DAT_02002450)(*(undefined8 *)(param_1 + 0x48));
    local_21 = 0 < iVar1;
  }
  FUN_00414480(&local_10);
  return local_21;
}

