/* Ghidra address: 00b22030 */
/* Ghidra symbol: FUN_00b22030 */


void FUN_00b22030(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),param_2);
  if (lVar1 != 0) {
    uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),param_2);
    FUN_004095f0(uVar2);
  }
  FUN_004ae870(*(undefined8 *)(param_1 + 8),param_2);
  return;
}

