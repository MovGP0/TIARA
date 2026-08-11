/* Ghidra address: 00834f90 */
/* Ghidra symbol: FUN_00834f90 */


void FUN_00834f90(longlong param_1,longlong param_2)

{
  char cVar1;
  int local_20;
  int local_1c;
  
  FUN_00650f70(param_1,param_2);
  cVar1 = FUN_008355d0(param_1);
  if (cVar1 != '\0') {
    FUN_00835860(param_1,&local_1c,&local_20);
    *(int *)(param_1 + 0x4ec) = local_1c;
    if ((local_1c != local_20) && (*(int *)(param_1 + 0x4f0) < (int)*(short *)(param_2 + 0x10))) {
      *(int *)(param_1 + 0x4ec) = local_20;
    }
    FUN_00835cc0(param_1);
  }
  return;
}

