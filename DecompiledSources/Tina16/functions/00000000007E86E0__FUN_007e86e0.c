/* Ghidra address: 007e86e0 */
/* Ghidra symbol: FUN_007e86e0 */


void FUN_007e86e0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *local_28;
  longlong local_20;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    local_28 = FUN_007e7e70;
    local_20 = param_1;
    uVar1 = FUN_004d6440(&local_28);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  FUN_004ae7e0(param_1,param_2);
  return;
}

