/* Ghidra address: 00f37c00 */
/* Ghidra symbol: FUN_00f37c00 */


void FUN_00f37c00(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + -8);
  }
  FUN_00f3a760(lVar1,lVar2 - 1U & 0xffffffff,param_2,0,*(undefined4 *)(param_1 + 0x10));
  return;
}

