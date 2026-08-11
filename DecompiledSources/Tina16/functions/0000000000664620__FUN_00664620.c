/* Ghidra address: 00664620 */
/* Ghidra symbol: FUN_00664620 */


undefined8 FUN_00664620(undefined8 param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0040c770(((double)param_2 / (double)param_3) * 10000.0);
  }
  return uVar1;
}

