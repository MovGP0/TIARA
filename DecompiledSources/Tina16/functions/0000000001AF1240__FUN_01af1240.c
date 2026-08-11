/* Ghidra address: 01af1240 */
/* Ghidra symbol: FUN_01af1240 */


void FUN_01af1240(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x7a0) == '\0') {
    if (*(char *)(param_1 + 0x7b1) == '\0') {
      *(undefined1 *)(param_1 + 0x7b1) = 1;
      FUN_0064e140(param_1,0xfff5);
    }
  }
  else if (*(longlong *)PTR_DAT_02004e40 != 0) {
    uVar1 = FUN_0065b870(*(undefined8 *)PTR_DAT_02004e40);
    thunk_FUN_0413e052(uVar1,0x123b,2,0);
  }
  return;
}

