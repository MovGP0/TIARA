/* Ghidra address: 01be70e0 */
/* Ghidra symbol: FUN_01be70e0 */


void FUN_01be70e0(undefined8 param_1)

{
  longlong lVar1;
  
  FUN_01c03340(param_1);
  lVar1 = FUN_01c03e40(param_1);
  if (lVar1 != 0) {
    lVar1 = FUN_01c03e40(param_1);
    FUN_0064e030(param_1,*(undefined4 *)(lVar1 + 0xc0));
  }
  return;
}

