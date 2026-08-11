/* Ghidra address: 015216f0 */
/* Ghidra symbol: FUN_015216f0 */


void FUN_015216f0(longlong param_1,undefined8 param_2,short *param_3)

{
  short sVar1;
  
  sVar1 = *param_3;
  FUN_015090e0(param_1);
  if ((sVar1 == 0xd) && (*(int *)(param_1 + 0xc10) == *(int *)(param_1 + 0xc0c))) {
    FUN_0151de90(param_1);
    FUN_01506c70(param_1);
    FUN_010f6920(param_1,1);
  }
  return;
}

