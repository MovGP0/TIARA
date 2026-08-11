/* Ghidra address: 00a93280 */
/* Ghidra symbol: FUN_00a93280 */


undefined8 FUN_00a93280(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    uVar1 = FUN_00a54270();
  }
  return uVar1;
}

