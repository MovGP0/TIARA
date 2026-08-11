/* Ghidra address: 005a3220 */
/* Ghidra symbol: FUN_005a3220 */


void FUN_005a3220(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + -8);
  }
  FUN_005a5aa0(lVar1,lVar2 - 1U & 0xffffffff,param_2,param_3,*(undefined8 *)(param_1 + 0x38),0,
               *(undefined4 *)(param_1 + 0x10));
  return;
}

