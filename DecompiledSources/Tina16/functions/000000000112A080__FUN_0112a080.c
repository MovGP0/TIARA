/* Ghidra address: 0112a080 */
/* Ghidra symbol: FUN_0112a080 */


void FUN_0112a080(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = FUN_0112a2a0(param_1);
  while ((*(ushort *)(param_1 + 0xc) == 0 || (iVar1 < (int)(uint)*(ushort *)(param_1 + 0xc)))) {
    *(short *)(param_1 + 10) =
         *(short *)(param_1 + 10) + *(short *)(&DAT_01f240d0 + (param_2 & 0xff) * 4);
    if ((char)(param_2 & 0xffffffff) == '\0') {
      *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + (short)iVar1;
    }
    else {
      *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) - (short)iVar1;
    }
    thunk_FUN_0112a06e(param_1,param_2 & 0xffffffff);
    iVar1 = FUN_0112a2a0(param_1);
  }
  return;
}

