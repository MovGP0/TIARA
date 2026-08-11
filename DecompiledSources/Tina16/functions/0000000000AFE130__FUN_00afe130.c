/* Ghidra address: 00afe130 */
/* Ghidra symbol: FUN_00afe130 */


void FUN_00afe130(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[0x116];
  if (param_2 < 0) {
    *(int *)(lVar1 + 0xa0) = (int)param_1[0x11d];
    *(int *)(lVar1 + 0x9c) = (int)param_1[0x11d] + param_2;
  }
  else {
    *(int *)(lVar1 + 0x9c) = (int)param_1[0x11d];
    *(int *)(lVar1 + 0xa0) = (int)param_1[0x11d] + param_2;
  }
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

