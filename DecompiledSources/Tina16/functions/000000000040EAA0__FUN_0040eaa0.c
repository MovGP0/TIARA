/* Ghidra address: 0040eaa0 */
/* Ghidra symbol: FUN_0040eaa0 */


longlong FUN_0040eaa0(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  
  if ((*(short *)(param_1 + 8) != -0x284e) && (cVar1 = FUN_0040ea40(param_1), cVar1 == '\0')) {
    return param_1;
  }
  lVar2 = *(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0xc) - *(uint *)(param_1 + 0x10);
  if (iVar3 <= param_3) {
    do {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar3;
      param_3 = param_3 - iVar3;
      FUN_00409a70(param_2,lVar2,(longlong)iVar3);
      param_2 = param_2 + iVar3;
      iVar3 = (**(code **)(param_1 + 0x28))(param_1);
      if (iVar3 != 0) {
        FUN_00409930(iVar3);
        return param_1;
      }
      lVar2 = *(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x10);
      iVar3 = *(int *)(param_1 + 0xc) - *(uint *)(param_1 + 0x10);
    } while (iVar3 <= param_3);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
  FUN_00409a70(param_2,lVar2,(longlong)param_3);
  return param_1;
}

