/* Ghidra address: 01520160 */
/* Ghidra symbol: FUN_01520160 */


void FUN_01520160(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xeba) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xec8) + 0xc0))(*(longlong **)(param_1 + 0xec8));
    FUN_00f04fa0(*(undefined8 *)(param_1 + 0xcf0),uVar1);
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xec8) + 0xa8))(*(longlong **)(param_1 + 0xec8));
    FUN_00f04fa0(*(undefined8 *)(param_1 + 0xcf0),uVar1);
  }
  return;
}

