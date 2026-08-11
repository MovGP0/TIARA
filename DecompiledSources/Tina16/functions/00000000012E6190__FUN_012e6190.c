/* Ghidra address: 012e6190 */
/* Ghidra symbol: FUN_012e6190 */


void FUN_012e6190(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)(param_1 + 0x38) + 0x10) != 0) {
    uVar1 = FUN_004aeac0(*(longlong *)(param_1 + 0x38));
    FUN_012e5340(uVar1);
  }
  return;
}

