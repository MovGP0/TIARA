/* Ghidra address: 010a05c0 */
/* Ghidra symbol: FUN_010a05c0 */


void FUN_010a05c0(longlong param_1)

{
  undefined8 local_18;
  longlong local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b0),&local_10);
  *(bool *)(param_1 + 0x6e8) = local_10 == 0;
  if (local_10 == 0) {
    FUN_016fd940(L"Empty name");
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b0),&local_18);
  FUN_00414ad0(param_1 + 0x6e0,local_18);
  FUN_00414560(&local_18,2);
  return;
}

