/* Ghidra address: 00a392b0 */
/* Ghidra symbol: FUN_00a392b0 */


undefined8 FUN_00a392b0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 4) {
    uVar1 = FUN_00a32f80(**(undefined4 **)(param_1 + 8));
  }
  else {
    FUN_00a33eb0(param_1,4);
    uVar1 = 1;
  }
  return uVar1;
}

