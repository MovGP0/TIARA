/* Ghidra address: 01648ef0 */
/* Ghidra symbol: FUN_01648ef0 */


int FUN_01648ef0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 local_res10 [3];
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_3c = -1;
  iVar6 = 1;
  iVar3 = 0;
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x5f8) + 0x10);
  if (-1 < iVar7 + -1) {
    do {
      lVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x5f8),iVar3);
      if (*(char *)(lVar5 + 0x28) == 'f') {
        FUN_01637070(param_1,&local_30,iVar3);
        iVar4 = FUN_00416db0(local_30,local_res10[0]);
        iVar1 = iVar6;
        if (iVar4 == 0) goto LAB_01648ffd;
        iVar6 = iVar6 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x600) + 0x10);
  iVar3 = 0;
  iVar1 = local_3c;
  if (-1 < iVar7 + -1) {
    do {
      FUN_01648bf0(param_1,&local_30,iVar3);
      cVar2 = FUN_01648ca0(param_1,iVar3);
      if (cVar2 == '\0') {
        iVar4 = FUN_00416db0(local_30,local_res10[0]);
        iVar1 = iVar6;
        if (iVar4 == 0) break;
        iVar6 = iVar6 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar7 = iVar7 + -1;
      iVar1 = local_3c;
    } while (iVar7 != 0);
  }
LAB_01648ffd:
  local_3c = iVar1;
  FUN_00414560(&local_38,2);
  FUN_00414480(local_res10);
  return local_3c;
}

