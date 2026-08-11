/* Ghidra address: 008f96c0 */
/* Ghidra symbol: FUN_008f96c0 */


int FUN_008f96c0(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[3] + param_3;
  if ((int)param_1[2] < iVar1) {
    (**(code **)(*param_1 + 8))(param_1,iVar1 + 1U & 0xfffffffe);
  }
  FUN_00409a70(param_2,param_1[1] + (longlong)(int)param_1[3],(longlong)param_3);
  *(int *)(param_1 + 3) = iVar1;
  return param_3;
}

