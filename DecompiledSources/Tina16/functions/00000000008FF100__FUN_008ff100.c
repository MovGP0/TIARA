/* Ghidra address: 008ff100 */
/* Ghidra symbol: FUN_008ff100 */


undefined8 FUN_008ff100(int param_1)

{
  undefined8 uVar1;
  
  if ((param_1 < 0x30) || (0x39 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

