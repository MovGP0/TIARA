/* Ghidra address: 00a37e30 */
/* Ghidra symbol: FUN_00a37e30 */


void FUN_00a37e30(longlong param_1,byte *param_2,ushort *param_3,byte *param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < iVar1) {
    do {
      *param_3 = (ushort)*(byte *)(*(longlong *)(param_1 + 0x18) + 0x48 + (ulonglong)param_2[2]);
      param_3[1] = (ushort)*(byte *)(*(longlong *)(param_1 + 0x18) + 0x48 + (ulonglong)param_2[1]);
      param_3[2] = (ushort)*(byte *)(*(longlong *)(param_1 + 0x18) + 0x48 + (ulonglong)*param_2);
      param_3[3] = (ushort)*param_4;
      param_3 = param_3 + 4;
      param_2 = param_2 + 3;
      param_4 = param_4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

