/* Ghidra address: 00c26940 */
/* Ghidra symbol: FUN_00c26940 */


ulonglong FUN_00c26940(longlong param_1)

{
  ulonglong uVar1;
  
  if (param_1 + 0x80f0U < *(ulonglong *)(param_1 + 0xe8)) {
    *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + -4;
    uVar1 = (ulonglong)**(uint **)(param_1 + 0xe8);
  }
  else {
    uVar1 = FUN_00c26710();
  }
  return uVar1;
}

