/* Ghidra address: 009a1770 */
/* Ghidra symbol: FUN_009a1770 */


void FUN_009a1770(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + -8);
  }
  FUN_009ac430(lVar1,lVar2 - 1U & 0xffffffff,param_2,param_3,*(undefined8 *)(param_1 + 0x38),0,
               *(undefined4 *)(param_1 + 0x10));
  return;
}

