/* Ghidra address: 01ca8790 */
/* Ghidra symbol: FUN_01ca8790 */


void FUN_01ca8790(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + -8);
  }
  FUN_01caa110(lVar1,lVar2 + -1,*(undefined8 *)(param_1 + 0x38),0,*(undefined4 *)(param_1 + 0x10));
  return;
}

