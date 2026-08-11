/* Ghidra address: 01cfdcb0 */
/* Ghidra symbol: FUN_01cfdcb0 */


char * FUN_01cfdcb0(longlong param_1,int param_2,char *param_3)

{
  longlong lVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  char *unaff_R13;
  
  if ((param_2 < 1) || (iVar4 = FUN_01cfd2d0(param_1), iVar4 < param_2)) {
    *param_3 = '\0';
    return unaff_R13;
  }
  cVar3 = FUN_01cfd030(param_1,param_2 + -1);
  uVar5 = FUN_01cfd270(param_1,0,param_2 + -2);
  lVar1 = *(longlong *)(param_1 + 0xc0) + (uVar5 & 0xffff);
  if (cVar3 == '\x04') {
    pcVar2 = *(char **)(lVar1 + 0x26);
    *param_3 = *pcVar2 + '\x01';
    return pcVar2;
  }
  if (cVar3 != '\a') {
    return unaff_R13;
  }
  pcVar2 = *(char **)(lVar1 + 0x26);
  *param_3 = *pcVar2 + '\x01';
  return pcVar2;
}

