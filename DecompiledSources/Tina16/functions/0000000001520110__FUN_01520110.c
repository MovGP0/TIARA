/* Ghidra address: 01520110 */
/* Ghidra symbol: FUN_01520110 */


void FUN_01520110(longlong param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(*(longlong *)(param_1 + 0xce0) + 0x328) != '\0') &&
     (*(char *)(param_1 + 0xeba) != '\0')) {
    *(undefined1 *)(param_1 + 0xeba) = 0;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xec8) + 0xc0))(*(longlong **)(param_1 + 0xec8));
    FUN_00f04fa0(*(undefined8 *)(param_1 + 0xcf0),uVar1);
  }
  return;
}

