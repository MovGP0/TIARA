/* Ghidra address: 01614c70 */
/* Ghidra symbol: FUN_01614c70 */


double FUN_01614c70(longlong param_1)

{
  int iVar1;
  byte local_15;
  int local_14;
  double local_10;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 8) {
    FUN_00409a70(*(undefined8 *)(param_1 + 8),&local_10,8);
  }
  else if (iVar1 == 4) {
    FUN_00409a70(*(undefined8 *)(param_1 + 8),&local_14,4);
    local_10 = (double)local_14;
  }
  else if (iVar1 == 1) {
    FUN_00409a70(*(undefined8 *)(param_1 + 8),&local_15,1);
    local_10 = (double)local_15;
  }
  else {
    FUN_01613110(L"No real data");
  }
  return local_10;
}

