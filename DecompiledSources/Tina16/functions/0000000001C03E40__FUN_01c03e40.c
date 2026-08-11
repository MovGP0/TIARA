/* Ghidra address: 01c03e40 */
/* Ghidra symbol: FUN_01c03e40 */


longlong FUN_01c03e40(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x4b8);
  if (lVar1 == 0) {
    FUN_01c03420(param_1);
    lVar1 = *(longlong *)(param_1 + 0x528);
  }
  FUN_0064e030(param_1,*(undefined4 *)(lVar1 + 0x8c));
  return lVar1;
}

