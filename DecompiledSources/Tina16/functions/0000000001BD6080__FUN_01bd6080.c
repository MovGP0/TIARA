/* Ghidra address: 01bd6080 */
/* Ghidra symbol: FUN_01bd6080 */


void FUN_01bd6080(longlong *param_1,int param_2)

{
  if ((int)param_1[0xaa] != param_2) {
    *(int *)(param_1 + 0xaa) = param_2;
    FUN_00654320(param_1,0);
    (**(code **)(*param_1 + 0x390))(param_1);
  }
  return;
}

