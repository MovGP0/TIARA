/* Ghidra address: 012e60d0 */
/* Ghidra symbol: FUN_012e60d0 */


void FUN_012e60d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)(param_1 + 0x38) + 0x10) != 0) {
    uVar1 = FUN_004aeac0(*(longlong *)(param_1 + 0x38));
    FUN_012e5310(uVar1,param_3);
  }
  return;
}

