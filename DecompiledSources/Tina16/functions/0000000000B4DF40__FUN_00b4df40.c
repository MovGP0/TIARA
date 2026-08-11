/* Ghidra address: 00b4df40 */
/* Ghidra symbol: FUN_00b4df40 */


undefined1 FUN_00b4df40(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_00b4dab0(param_1);
  lVar2 = FUN_00b23d20(**(undefined8 **)(param_1 + 0x18),uVar1);
  return *(undefined1 *)(lVar2 + 1);
}

