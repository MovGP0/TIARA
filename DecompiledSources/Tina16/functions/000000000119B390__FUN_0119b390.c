/* Ghidra address: 0119b390 */
/* Ghidra symbol: FUN_0119b390 */


void FUN_0119b390(undefined8 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined8 local_res8 [4];
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar5 = 0;
  piVar4 = param_3;
  iVar6 = param_2;
  if (-1 < param_2 + -1) {
    do {
      iVar1 = FUN_0119aee0(local_res8[0],iVar5);
      iVar2 = FUN_0119aee0(local_res8[0],iVar5 + 1);
      if (iVar5 == param_2 + -1) {
        iVar2 = FUN_0119af40(local_res8[0],1,0x28);
      }
      FUN_00416dc0(&local_38,local_res8[0],iVar1 + 1,iVar2 - (iVar1 + 1));
      FUN_0043ea00(&local_30,local_38);
      iVar1 = FUN_0043fc00(local_30);
      *piVar4 = iVar1;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
      piVar4 = piVar4 + 1;
    } while (iVar6 != 0);
  }
  iVar6 = 0;
  if (-1 < param_2 + -2) {
    iVar5 = param_2 + -1;
    piVar4 = param_3;
    do {
      iVar1 = iVar6 + 1;
      if (iVar1 <= param_2 + -1) {
        iVar2 = ((param_2 + -1) - iVar1) + 1;
        piVar3 = param_3 + iVar1;
        do {
          iVar1 = *piVar3;
          if (iVar1 < *piVar4) {
            *piVar3 = *piVar4;
            *piVar4 = iVar1;
          }
          piVar3 = piVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(local_res8);
  return;
}

