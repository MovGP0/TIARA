/* Ghidra address: 00bd4010 */
/* Ghidra symbol: FUN_00bd4010 */


undefined8 FUN_00bd4010(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = thunk_FUN_040ef593(0);
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return *(undefined8 *)(param_1 + 8);
}

