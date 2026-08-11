/* Ghidra address: 010b3a90 */
/* Ghidra symbol: FUN_010b3a90 */


undefined8 FUN_010b3a90(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((param_2 == 1) || ((param_2 == 8 && ((*(uint *)(param_1 + 0x2a) & 1) != 0)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

