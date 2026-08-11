/* Ghidra address: 01b10c50 */
/* Ghidra symbol: FUN_01b10c50 */


void FUN_01b10c50(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    if (*(int *)(param_1 + 0x14) <= *(int *)(param_1 + 0x10)) {
      iVar1 = 1000;
      if (1000 < *(int *)(param_1 + 0x18)) {
        iVar1 = *(int *)(param_1 + 0x18);
      }
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar1;
      FUN_00409620(param_1 + 8,(longlong)(*(int *)(param_1 + 0x14) * 8));
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) * 2;
    }
    *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_1 + 0x10) * 8) = param_2;
  }
  return;
}

