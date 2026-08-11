/* Ghidra address: 01980550 */
/* Ghidra symbol: FUN_01980550 */


void FUN_01980550(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x10) != 1) {
    FUN_00410f20(param_2);
    lVar1 = FUN_01980680(param_1);
    FUN_004aee30(*(undefined8 *)(param_1 + 0x10),param_2);
    if (param_2 == lVar1) {
      FUN_01980710(param_1,*(int *)(*(longlong *)(param_1 + 0x10) + 0x10) + -1);
    }
    else {
      *(int *)(param_1 + 0x18) = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10) + -1;
    }
  }
  return;
}

