/* Ghidra address: 017bcde0 */
/* Ghidra symbol: FUN_017bcde0 */


undefined2 FUN_017bcde0(longlong param_1)

{
  undefined2 uVar1;
  
  if (*(short *)(param_1 + 0x2d8) < 0) {
    uVar1 = 0x101;
  }
  else {
    uVar1 = 0x102;
  }
  return uVar1;
}

