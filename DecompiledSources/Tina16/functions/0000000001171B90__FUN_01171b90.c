/* Ghidra address: 01171b90 */
/* Ghidra symbol: FUN_01171b90 */


void FUN_01171b90(longlong param_1)

{
  int iVar1;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c0),&local_10);
  iVar1 = 0;
  if (local_10 != 0) {
    iVar1 = *(int *)(local_10 + -4);
  }
  if (0 < iVar1) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c0),&local_18);
    DAT_0203a514 = FUN_0043fc00(local_18);
  }
  FUN_00414560(&local_18,2);
  return;
}

