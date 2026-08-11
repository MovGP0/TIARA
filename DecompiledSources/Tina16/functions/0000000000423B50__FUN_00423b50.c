/* Ghidra address: 00423b50 */
/* Ghidra symbol: FUN_00423b50 */


undefined8 FUN_00423b50(int *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    *param_1 = *param_1 + param_2;
    param_1[2] = param_1[2] + param_2;
    param_1[1] = param_1[1] + param_3;
    param_1 = param_1 + 3;
    *param_1 = *param_1 + param_3;
    uVar1 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  return uVar1;
}

