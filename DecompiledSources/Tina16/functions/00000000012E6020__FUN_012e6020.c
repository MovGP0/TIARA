/* Ghidra address: 012e6020 */
/* Ghidra symbol: FUN_012e6020 */


undefined8 FUN_012e6020(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(int *)(*(longlong *)(param_1 + 0x38) + 0x10) != 0) {
    uVar1 = FUN_004aeac0();
    uVar1 = FUN_012e52e0(uVar1);
  }
  return uVar1;
}

