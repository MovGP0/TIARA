/* Ghidra address: 01639450 */
/* Ghidra symbol: FUN_01639450 */


void FUN_01639450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                 undefined1 *param_5)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  lVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *param_4 = 0;
  *param_5 = 1;
  FUN_0161db10(param_2,lVar2);
  iVar5 = *(int *)(lVar2 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      piVar3 = (int *)FUN_004aeac0(lVar2,iVar4);
      if (*(char *)((longlong)piVar3 + 0x51) != '\0') {
        *param_4 = 1;
      }
      iVar1 = *piVar3;
      if ((iVar1 == 3) || (iVar1 == 0x15)) {
        *param_5 = 0;
      }
      if (iVar1 == 0x15) {
        FUN_01639400(param_1,piVar3,param_3);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00410f20(lVar2);
  return;
}

