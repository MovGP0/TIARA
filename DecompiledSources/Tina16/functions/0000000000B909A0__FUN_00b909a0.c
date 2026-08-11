/* Ghidra address: 00b909a0 */
/* Ghidra symbol: FUN_00b909a0 */


void FUN_00b909a0(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    *param_1 = &DAT_01e9473e;
  }
  else {
    uVar1 = FUN_004095c0((longlong)param_2);
    *param_1 = uVar1;
  }
  return;
}

