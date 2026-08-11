/* Ghidra address: 008ff270 */
/* Ghidra symbol: FUN_008ff270 */


undefined8 FUN_008ff270(int param_1)

{
  undefined8 uVar1;
  
  if ((param_1 - 0x41U < 0x1a) || (param_1 - 0x61U < 0x1a)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

