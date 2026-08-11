/* Ghidra address: 008ff0e0 */
/* Ghidra symbol: FUN_008ff0e0 */


undefined8 FUN_008ff0e0(int param_1)

{
  undefined8 uVar1;
  
  if (((param_1 - 0x30U < 10) || (param_1 - 0x41U < 6)) || (param_1 - 0x61U < 6)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

