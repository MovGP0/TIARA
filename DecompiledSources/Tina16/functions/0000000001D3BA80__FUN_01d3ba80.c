/* Ghidra address: 01d3ba80 */
/* Ghidra symbol: FUN_01d3ba80 */


undefined8 FUN_01d3ba80(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x10) < 1) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_00b94e60(param_1,*(int *)(param_1 + 0x10) + -1);
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  return uVar2;
}

