/* Ghidra address: 00f90b00 */
/* Ghidra symbol: FUN_00f90b00 */


undefined8 FUN_00f90b00(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x3548) == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}

