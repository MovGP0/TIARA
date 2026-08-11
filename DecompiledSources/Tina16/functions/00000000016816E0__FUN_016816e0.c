/* Ghidra address: 016816e0 */
/* Ghidra symbol: FUN_016816e0 */


void FUN_016816e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + -8);
  }
  FUN_00db82b0(lVar1,lVar2 + -1,param_2,param_3,param_4,0,*(undefined4 *)(param_1 + 0x10));
  return;
}

