/* Ghidra address: 0173cbb0 */
/* Ghidra symbol: FUN_0173cbb0 */


undefined8 FUN_0173cbb0(int param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 2) {
    if ((param_1 == 0xaa) || (param_1 == 0xab)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else if (((param_1 == 0xaa) || (param_1 == 0xab)) || (param_1 == 0xac)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

