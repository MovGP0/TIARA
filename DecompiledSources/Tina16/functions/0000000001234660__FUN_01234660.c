/* Ghidra address: 01234660 */
/* Ghidra symbol: FUN_01234660 */


void FUN_01234660(longlong param_1)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x918),&local_10);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x928),&local_18);
  iVar1 = FUN_00416db0(local_10,local_18);
  if (iVar1 == 0) {
    FUN_0080d2f0(*(undefined8 *)PTR_DAT_02004030,L"V+ = V- ",L"error",0x10);
  }
  FUN_00414560(&local_18,2);
  return;
}

