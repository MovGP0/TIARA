/* Ghidra address: 0065cd90 */
/* Ghidra symbol: FUN_0065cd90 */


void FUN_0065cd90(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_28 [32];
  
  if (*(longlong *)(param_1 + 0x488) != 0) {
    lVar1 = FUN_0065cca0(auStack_28);
    while (lVar1 != 0) {
      FUN_004dc430(lVar1);
      lVar1 = FUN_0065cca0(auStack_28);
    }
  }
  return;
}

