/* Ghidra address: 0181aba0 */
/* Ghidra symbol: FUN_0181aba0 */


void FUN_0181aba0(longlong param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != *param_2) {
    iVar1 = FUN_0181a900(*(undefined8 *)(param_1 + 0x90));
    iVar1 = FUN_0040c770((double)(*param_2 * iVar1) / (double)*(int *)PTR_DAT_02001400);
    *param_2 = iVar1;
  }
  return;
}

