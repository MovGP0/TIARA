/* Ghidra address: 01d07fe0 */
/* Ghidra symbol: FUN_01d07fe0 */


undefined4 FUN_01d07fe0(longlong param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  
  *param_3 = 0;
  while (*param_3 < *(int *)(param_2 + 0x10)) {
    plVar1 = (longlong *)FUN_004aeac0(param_2,*param_3);
    if (*plVar1 == param_1) break;
    *param_3 = *param_3 + 1;
  }
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_3 < *(int *)(param_2 + 0x10));
}

