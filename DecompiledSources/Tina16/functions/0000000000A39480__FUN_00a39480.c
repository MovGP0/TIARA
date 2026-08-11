/* Ghidra address: 00a39480 */
/* Ghidra symbol: FUN_00a39480 */


void FUN_00a39480(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x10) != 4) {
    FUN_00a33eb0(param_1,4);
  }
  uVar1 = FUN_00a32f80(param_2);
  **(undefined4 **)(param_1 + 8) = uVar1;
  return;
}

