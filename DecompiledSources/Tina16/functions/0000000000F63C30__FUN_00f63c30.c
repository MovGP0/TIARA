/* Ghidra address: 00f63c30 */
/* Ghidra symbol: FUN_00f63c30 */


void FUN_00f63c30(longlong param_1,undefined8 param_2,short *param_3)

{
  int iVar1;
  
  if (*param_3 == 0x1b) {
    *(undefined1 *)(param_1 + 0x80) = 0;
    FUN_00f631a0(param_1);
    FUN_00f74f70(*(undefined8 *)(param_1 + 0x48),0x10);
  }
  else if (*param_3 == 0x2e) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x10);
    FUN_00f74f70(*(longlong *)(param_1 + 0x48),8);
    if (iVar1 != *(int *)(*(longlong *)(param_1 + 0x48) + 0x10)) {
      FUN_00f62990(param_1,1);
    }
    FUN_00f63b50(param_1);
  }
  return;
}

