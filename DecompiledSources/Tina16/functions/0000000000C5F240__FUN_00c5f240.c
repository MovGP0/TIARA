/* Ghidra address: 00c5f240 */
/* Ghidra symbol: FUN_00c5f240 */


void FUN_00c5f240(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) != '\0')) {
    uVar1 = FUN_0065b870(*(longlong *)(param_1 + 0x10));
    thunk_FUN_040dee27(uVar1,0x7d6f);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}

