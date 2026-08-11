/* Ghidra address: 01639510 */
/* Ghidra symbol: FUN_01639510 */


void FUN_01639510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *param_4 = 1;
  FUN_0161db10(param_2,lVar1);
  iVar4 = *(int *)(lVar1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      piVar2 = (int *)FUN_004aeac0(lVar1,iVar3);
      if ((*piVar2 == 3) || (*piVar2 == 0x15)) {
        *param_4 = 0;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00410f20(lVar1);
  return;
}

