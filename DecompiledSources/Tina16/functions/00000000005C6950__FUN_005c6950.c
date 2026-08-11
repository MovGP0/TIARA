/* Ghidra address: 005c6950 */
/* Ghidra symbol: FUN_005c6950 */


void FUN_005c6950(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + -8);
  }
  FUN_005c8520(lVar1,lVar2 - 1U & 0xffffffff,param_2,0,*(undefined4 *)(param_1 + 0x10));
  return;
}

