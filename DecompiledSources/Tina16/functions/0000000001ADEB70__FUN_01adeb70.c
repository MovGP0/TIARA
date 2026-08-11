/* Ghidra address: 01adeb70 */
/* Ghidra symbol: FUN_01adeb70 */


void FUN_01adeb70(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_res10;
  longlong local_res18;
  undefined1 auStack_58 [36];
  int local_34;
  undefined8 local_30;
  
  local_30 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00415dd0(&local_30,local_res10,0);
  FUN_00d309d0(local_30,uVar3,&LAB_01adec94);
  local_34 = *(int *)(local_res18 + 0x10) + -2;
  if (-1 < local_34) {
    do {
      iVar2 = 0;
      if (-1 < local_34) {
        iVar4 = local_34 + 1;
        do {
          cVar1 = FUN_01adea10(auStack_58,iVar2,iVar2 + 1);
          if (cVar1 != '\0') {
            FUN_004aea00(local_res18,iVar2,iVar2 + 1);
          }
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      local_34 = local_34 + -1;
    } while (local_34 != -1);
  }
  FUN_00410f20(uVar3);
  FUN_004144d0(&local_30);
  FUN_00414480(&local_res10);
  return;
}

