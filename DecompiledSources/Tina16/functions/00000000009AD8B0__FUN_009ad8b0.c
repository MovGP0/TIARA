/* Ghidra address: 009ad8b0 */
/* Ghidra symbol: FUN_009ad8b0 */


void FUN_009ad8b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + -8);
  }
  FUN_009b5100(lVar1,lVar2 - 1U & 0xffffffff,param_2,0,*(undefined4 *)(param_1 + 0x10));
  return;
}

