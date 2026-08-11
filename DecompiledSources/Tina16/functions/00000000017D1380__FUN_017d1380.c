/* Ghidra address: 017d1380 */
/* Ghidra symbol: FUN_017d1380 */


undefined4 FUN_017d1380(longlong param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar1;
}

