/* Ghidra address: 00b41460 */
/* Ghidra symbol: FUN_00b41460 */


undefined8 FUN_00b41460(int param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0040c770(((double)param_1 * 256.0) / (double)param_2);
  }
  return uVar1;
}

