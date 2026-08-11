/* Ghidra address: 017c5170 */
/* Ghidra symbol: FUN_017c5170 */


undefined8 FUN_017c5170(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(short *)(param_1 + 8) == -1) {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_017c5170(*(longlong *)(param_1 + 0x10));
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

