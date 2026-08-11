/* Ghidra address: 016e2ea0 */
/* Ghidra symbol: FUN_016e2ea0 */


void FUN_016e2ea0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x3c) < -1) {
    uVar1 = FUN_016eebb0(*(undefined8 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x38),0);
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
  }
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  return;
}

