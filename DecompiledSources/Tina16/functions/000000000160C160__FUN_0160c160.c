/* Ghidra address: 0160c160 */
/* Ghidra symbol: FUN_0160c160 */


bool FUN_0160c160(longlong param_1)

{
  char cVar1;
  int iVar2;
  bool local_19;
  undefined8 local_10;
  
  local_10 = 0;
  local_19 = false;
  cVar1 = FUN_01d3f2a0(param_1);
  if (cVar1 != '\0') {
    FUN_00414b50(&local_10,*(undefined8 *)(*(longlong *)(param_1 + 0x1a8) + 0x38));
    iVar2 = FUN_004170c0(L"Arduino",local_10,1);
    local_19 = iVar2 == 1;
  }
  FUN_00414480(&local_10);
  return local_19;
}

