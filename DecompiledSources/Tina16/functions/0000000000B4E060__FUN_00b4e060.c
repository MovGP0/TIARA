/* Ghidra address: 00b4e060 */
/* Ghidra symbol: FUN_00b4e060 */


void FUN_00b4e060(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00b4dab0(param_1);
  lVar1 = FUN_00b23d20(**(undefined8 **)(param_1 + 0x18),uVar2);
  FUN_00b1bce0(*(undefined1 *)(lVar1 + 6));
  return;
}

