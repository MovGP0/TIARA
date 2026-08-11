/* Ghidra address: 010b3a70 */
/* Ghidra symbol: FUN_010b3a70 */


undefined8 FUN_010b3a70(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((param_2 == 4) && (*(int *)(param_1 + 0x2a) == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

