/* Ghidra address: 0106ca50 */
/* Ghidra symbol: FUN_0106ca50 */


void FUN_0106ca50(longlong param_1)

{
  undefined1 uVar1;
  longlong local_18;
  longlong local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b0),&local_10);
  if (local_10 != 0) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c8),&local_18);
    if (local_18 != 0) {
      uVar1 = 1;
      goto LAB_0106caa9;
    }
  }
  uVar1 = 0;
LAB_0106caa9:
  *(undefined1 *)(param_1 + 0x700) = uVar1;
  FUN_00414560(&local_18,2);
  return;
}

