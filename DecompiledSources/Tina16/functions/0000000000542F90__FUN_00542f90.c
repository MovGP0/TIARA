/* Ghidra address: 00542f90 */
/* Ghidra symbol: FUN_00542f90 */


byte * FUN_00542f90(longlong param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = FUN_0053c520(param_1 + 0x2d8);
  *param_2 = bVar1;
  FUN_00409a70(*(undefined8 *)(param_1 + 0x2d8),param_2 + 1,*param_2);
  *(longlong *)(param_1 + 0x2d8) = *(longlong *)(param_1 + 0x2d8) + (ulonglong)*param_2;
  *(int *)(param_1 + 0x2e0) = (*(int *)(param_1 + 0x2e0) - (uint)*param_2) + -1;
  return param_2;
}

