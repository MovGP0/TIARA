/* Ghidra address: 00ad1bd0 */
/* Ghidra symbol: FUN_00ad1bd0 */


void FUN_00ad1bd0(longlong param_1,longlong *param_2)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  
  *param_2 = 0;
  FUN_00414480(param_2);
  if (*(short *)(*(longlong *)(param_1 + 0x90) + 0x20) == 0x22) {
    FUN_00ad1af0(param_1);
  }
  while ((sVar1 = *(short *)(*(longlong *)(param_1 + 0x90) + 0x20), sVar1 != 0 && (sVar1 != 0x22)))
  {
    iVar2 = 0;
    if (*param_2 != 0) {
      iVar2 = *(int *)(*param_2 + -4);
    }
    FUN_004169f0(param_2,iVar2 + 1);
    lVar3 = FUN_00414de0(param_2);
    iVar2 = 0;
    if (*param_2 != 0) {
      iVar2 = *(int *)(*param_2 + -4);
    }
    *(short *)(lVar3 + -2 + (longlong)iVar2 * 2) = sVar1;
    FUN_00ad1af0(param_1);
  }
  return;
}

