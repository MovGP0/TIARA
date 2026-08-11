/* Ghidra address: 01697b50 */
/* Ghidra symbol: FUN_01697b50 */


void FUN_01697b50(longlong param_1)

{
  longlong lVar1;
  
  FUN_00c53170(*(undefined8 *)(param_1 + 0x38));
  lVar1 = FUN_00b94e60(*(longlong *)(param_1 + 0x38),
                       *(int *)(*(longlong *)(param_1 + 0x38) + 0x10) + -1);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar1 + 0x240);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar1 + 0x248);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar1 + 0x250);
  return;
}

