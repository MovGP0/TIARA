/* Ghidra address: 007461c0 */
/* Ghidra symbol: FUN_007461c0 */


void FUN_007461c0(longlong param_1,double param_2)

{
  int iVar1;
  
  if (param_2 != *(double *)(param_1 + 0x20)) {
    if (*(char *)(param_1 + 0x18) == '\0') {
      iVar1 = FUN_0040c840(param_2);
      *(int *)(param_1 + 0x28) = iVar1;
      *(double *)(param_1 + 0x20) = (double)iVar1;
    }
    else {
      *(double *)(param_1 + 0x20) = param_2;
    }
    FUN_004b1830(param_1,0);
  }
  return;
}

