/* Ghidra address: 005383e0 */
/* Ghidra symbol: FUN_005383e0 */


longlong FUN_005383e0(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  int *piVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  lVar3 = FUN_00536180(param_1);
  if (lVar3 != 0) {
    pcVar4 = (char *)FUN_00536180(param_1);
    if (*pcVar4 == '\r') {
      piVar5 = (int *)FUN_005361b0(param_1);
      iVar1 = *piVar5;
      iVar2 = piVar5[1];
      lVar3 = FUN_00538390(param_1,(longlong)iVar1 % (longlong)iVar2 & 0xffffffff);
      return lVar3 + param_2 * (iVar1 / iVar2);
    }
    pcVar4 = (char *)FUN_00536180(param_1);
    if (*pcVar4 == '\x11') {
      piVar5 = (int *)FUN_005361b0(param_1);
      iVar1 = *piVar5;
      plVar6 = (longlong *)FUN_00538390(param_1);
      return *plVar6 + (longlong)(param_2 * iVar1);
    }
  }
  uVar7 = FUN_0044d710(&PTR_FUN_00435f50,1,PTR_PTR_02005920);
  lVar3 = FUN_004134c0(uVar7);
  return lVar3;
}

