/* Ghidra address: 017e28e0 */
/* Ghidra symbol: FUN_017e28e0 */


undefined8 FUN_017e28e0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(short *)(param_1 + 0x2d8) == 0) && (*(longlong *)(param_1 + 0x620) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

