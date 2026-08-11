/* Ghidra address: 0171fbd0 */
/* Ghidra symbol: FUN_0171fbd0 */


void FUN_0171fbd0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + -8);
  }
  FUN_01721350(lVar1,lVar2 + -1,*(undefined8 *)(param_1 + 0x38),0,*(undefined4 *)(param_1 + 0x10));
  return;
}

