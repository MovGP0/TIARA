/* Ghidra address: 0109ddd0 */
/* Ghidra symbol: FUN_0109ddd0 */


void FUN_0109ddd0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_006d8150(*(undefined8 *)(param_1 + 0x750));
  if (iVar1 == 0) {
    FUN_0109d690(param_1);
  }
  else {
    iVar1 = FUN_006d8150(*(undefined8 *)(param_1 + 0x750));
    if (iVar1 == 1) {
      FUN_0109dd80(param_1);
    }
    else {
      iVar1 = FUN_006d8150(*(undefined8 *)(param_1 + 0x750));
      if (iVar1 == 2) {
        FUN_0109d6a0(param_1);
      }
    }
  }
  return;
}

