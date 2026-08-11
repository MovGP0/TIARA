/* Ghidra address: 00c38600 */
/* Ghidra symbol: FUN_00c38600 */


undefined8 FUN_00c38600(int param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0040c840(((double)param_1 * 100.0) / (double)param_2);
  }
  return uVar1;
}

