/* Ghidra address: 00571d50 */
/* Ghidra symbol: FUN_00571d50 */


void FUN_00571d50(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + -8);
  }
  FUN_00574310(lVar1,lVar2 - 1U & 0xffffffff,param_2,0,*(undefined4 *)(param_1 + 0x10));
  return;
}

