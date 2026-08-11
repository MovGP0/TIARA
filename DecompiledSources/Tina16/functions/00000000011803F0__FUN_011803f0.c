/* Ghidra address: 011803f0 */
/* Ghidra symbol: FUN_011803f0 */


void FUN_011803f0(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar1 = *(int *)(*param_1 + -4);
  }
  if ((iVar1 <= param_2) && (iVar1 <= param_2)) {
    iVar1 = (param_2 - iVar1) + 1;
    do {
      FUN_00416ba0(param_1,&LAB_01180448,*param_1);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

