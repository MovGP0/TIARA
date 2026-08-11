/* Ghidra address: 015200c0 */
/* Ghidra symbol: FUN_015200c0 */


void FUN_015200c0(longlong param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(*(longlong *)(param_1 + 0xcd8) + 0x328) != '\0') &&
     (*(char *)(param_1 + 0xeba) == '\0')) {
    *(undefined1 *)(param_1 + 0xeba) = 1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xec8) + 0xa8))(*(longlong **)(param_1 + 0xec8));
    FUN_00f04fa0(*(undefined8 *)(param_1 + 0xcf0),uVar1);
  }
  return;
}

