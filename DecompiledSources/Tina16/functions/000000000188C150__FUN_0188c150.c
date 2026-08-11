/* Ghidra address: 0188c150 */
/* Ghidra symbol: FUN_0188c150 */


void FUN_0188c150(longlong param_1)

{
  int iVar1;
  undefined4 local_40 [2];
  wchar_t *local_38;
  undefined8 local_30;
  
  *(undefined1 *)(param_1 + 0xb8) = 1;
  FUN_0040d200(local_40,0x28,0);
  local_40[0] = 0x28;
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    local_38 = L"Fast Report Document";
  }
  else {
    local_38 = (wchar_t *)FUN_00416740(*(undefined8 *)(param_1 + 0xc0));
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    local_30 = FUN_00416740(*(undefined8 *)(param_1 + 0x48));
  }
  FUN_0188c570(param_1);
  iVar1 = thunk_FUN_04049bf8(*(undefined8 *)(param_1 + 0xd0),local_40);
  *(bool *)(param_1 + 0xb8) = 0 < iVar1;
  return;
}

