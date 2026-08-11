/* Ghidra address: 004e1b40 */
/* Ghidra symbol: FUN_004e1b40 */


void FUN_004e1b40(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + -8);
  }
  FUN_004f7270(lVar1,lVar2 + -1,*(undefined8 *)(param_1 + 0x38),0,*(undefined4 *)(param_1 + 0x10));
  return;
}

