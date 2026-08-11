/* Ghidra address: 00b12500 */
/* Ghidra symbol: FUN_00b12500 */


ulonglong FUN_00b12500(longlong *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong unaff_R13;
  
  if (param_3 != *(int *)((longlong)param_1 + 0x4ac)) {
    plVar3 = (longlong *)FUN_00b11070(param_1);
    iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (0 < iVar2) {
      cVar1 = FUN_00b10a60(param_1);
      if ((cVar1 != '\0') && ((char)param_1[0xc3] == '\0')) {
        iVar2 = *(int *)((longlong)param_1 + 0x4ac);
        uVar4 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),param_3 < iVar2);
        (**(code **)(*param_1 + 0x2b8))(param_1,iVar2);
        if (param_3 >= iVar2) {
          FUN_00843e20(param_1,param_2,param_3 + -1,1);
        }
        goto LAB_00b125cb;
      }
    }
  }
  if ((char)param_1[0xc3] == '\0') {
    unaff_R13 = *param_1;
    (**(code **)(unaff_R13 + 0x2d0))(param_1);
  }
  cVar1 = FUN_0084a020(param_1,param_2,param_3);
  if (cVar1 != '\0') {
    uVar4 = FUN_00b12890(param_1);
    if ((((uVar4 & 0x1000) != 0) || ((*(byte *)(param_1 + 0xc1) & 1) != 0)) || (0 < param_2)) {
      uVar4 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
      goto LAB_00b125cb;
    }
  }
  uVar4 = 0;
LAB_00b125cb:
  return uVar4 & 0xffffffff;
}

