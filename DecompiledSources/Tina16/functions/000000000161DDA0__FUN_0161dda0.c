/* Ghidra address: 0161dda0 */
/* Ghidra symbol: FUN_0161dda0 */


undefined8 FUN_0161dda0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x4c) != 0x2a)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

