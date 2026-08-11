/* Ghidra address: 0151fd00 */
/* Ghidra symbol: FUN_0151fd00 */


void FUN_0151fd00(longlong param_1)

{
  undefined2 uVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0xd50) + 0x328) != '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xec8) + 0x128))(*(longlong **)(param_1 + 0xec8))
    ;
    FUN_00f04fa0(*(undefined8 *)(param_1 + 0xcf8),uVar1);
  }
  if (*(char *)(*(longlong *)(param_1 + 0xd98) + 0x328) != '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xec8) + 0x140))(*(longlong **)(param_1 + 0xec8))
    ;
    FUN_00f04fa0(*(undefined8 *)(param_1 + 0xcf8),uVar1);
  }
  return;
}

