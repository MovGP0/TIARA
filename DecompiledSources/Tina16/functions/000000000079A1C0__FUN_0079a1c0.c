/* Ghidra address: 0079a1c0 */
/* Ghidra symbol: FUN_0079a1c0 */


void FUN_0079a1c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + -8);
  }
  FUN_007ac360(lVar1,lVar2 - 1U & 0xffffffff,param_2,0,*(undefined4 *)(param_1 + 0x10));
  return;
}

