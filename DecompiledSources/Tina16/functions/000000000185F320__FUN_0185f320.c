/* Ghidra address: 0185f320 */
/* Ghidra symbol: FUN_0185f320 */


undefined8 FUN_0185f320(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_0185f2e0(param_1);
  if (*(longlong *)(lVar1 + 0x40) == 0) {
    FUN_0185f640(param_1);
  }
  return *(undefined8 *)(lVar1 + 0x40);
}

