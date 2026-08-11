/* Ghidra address: 00bfb100 */
/* Ghidra symbol: FUN_00bfb100 */


void FUN_00bfb100(longlong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if (param_2 < 1) {
    param_2 = 0;
  }
  if ((int)param_1[0x122] != param_2) {
    *(int *)(param_1 + 0x122) = param_2;
    *(int *)(param_1 + 0xa6) =
         (param_2 - (*(int *)((longlong)param_1 + 0x50c) + -1) * *(int *)((longlong)param_1 + 0x4d4)
         ) + 2;
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      iVar2 = FUN_0064d0b0(param_1);
      iVar2 = (iVar2 - (int)param_1[0x122]) + -2;
      if (iVar2 < 1) {
        iVar2 = 0;
      }
      *(int *)(param_1 + 0x9a) = iVar2 / *(int *)((longlong)param_1 + 0x4d4);
      cVar1 = FUN_00c10e70(param_1,iVar2 % *(int *)((longlong)param_1 + 0x4d4));
      if (cVar1 != '\0') {
        (**(code **)(*(longlong *)param_1[0xbf] + 0x50))((longlong *)param_1[0xbf]);
      }
      FUN_00bfd160(param_1);
      (**(code **)(*param_1 + 0x180))(param_1);
    }
  }
  return;
}

