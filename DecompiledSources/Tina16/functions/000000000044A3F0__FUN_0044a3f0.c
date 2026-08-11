/* Ghidra address: 0044a3f0 */
/* Ghidra symbol: FUN_0044a3f0 */


bool FUN_0044a3f0(longlong param_1,int *param_2,ushort *param_3,char *param_4)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  bool bVar5;
  
  *param_4 = '\0';
  FUN_0044a3c0();
  iVar1 = *param_2;
  uVar4 = 0;
  while( true ) {
    iVar3 = 0;
    if (param_1 != 0) {
      iVar3 = *(int *)(param_1 + -4);
    }
    if (iVar3 < iVar1) break;
    uVar2 = *(short *)(param_1 + -2 + (longlong)iVar1 * 2) - 0x30;
    if (uVar2 < 0x10) {
      bVar5 = ((int)CONCAT62((int6)((ulonglong)param_1 >> 0x10),1) << ((byte)uVar2 & 0x1f) & 0x3ffU)
              != 0;
    }
    else {
      bVar5 = false;
    }
    if ((!bVar5) || (999 < uVar4)) break;
    uVar4 = (uVar4 * 10 + *(short *)(param_1 + -2 + (longlong)iVar1 * 2)) - 0x30;
    iVar1 = iVar1 + 1;
  }
  iVar3 = *param_2;
  if (iVar3 < iVar1) {
    *param_4 = (char)iVar1 - (char)*param_2;
    *param_2 = iVar1;
    *param_3 = uVar4;
  }
  return iVar3 < iVar1;
}

