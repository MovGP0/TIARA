/* Ghidra address: 005ddf30 */
/* Ghidra symbol: FUN_005ddf30 */


void FUN_005ddf30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_005dc860(*(undefined8 *)(param_1 + 0x18),param_2);
  if (lVar2 == 0) {
    lVar2 = FUN_005dc900(*(undefined8 *)(param_1 + 0x18),param_2);
  }
  iVar1 = FUN_005dc4f0(lVar2,param_3);
  if (iVar1 < 0) {
    FUN_005dc590(lVar2,param_3,param_4);
  }
  else {
    FUN_005dc3f0(lVar2,iVar1,param_4);
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}

