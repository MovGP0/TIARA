/* Ghidra address: 013ac660 */
/* Ghidra symbol: FUN_013ac660 */


int FUN_013ac660(undefined8 param_1,longlong param_2,undefined8 param_3,int param_4,char param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong local_res10 [3];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_50 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar5 = 0;
  if (local_res10[0] != 0) {
    iVar5 = *(int *)(local_res10[0] + -4);
  }
  iVar4 = -1;
  iVar6 = iVar5;
  if ((param_5 == '\0') && (param_4 == 0)) {
    iVar6 = 1;
  }
  iVar1 = FUN_006decb0(param_3);
  if (0 < iVar5) {
    for (; param_4 <= iVar1 + -1; param_4 = param_4 + 1) {
      lVar3 = FUN_006df500(param_3,param_4);
      FUN_00416dc0(local_40,*(undefined8 *)(lVar3 + 0x10),1,iVar6);
      FUN_00416dc0(&local_48,local_res10[0],1,iVar6);
      iVar2 = FUN_0043e6d0(local_40[0],local_48);
      if (iVar2 == 0) {
        iVar4 = param_4;
        if (iVar6 == iVar5) break;
        lVar3 = FUN_006df500(param_3,param_4);
        FUN_00416dc0(&local_50,*(undefined8 *)(lVar3 + 0x10),1,iVar5);
        iVar2 = FUN_0043e6d0(local_50,local_res10[0]);
        if (iVar2 == 0) break;
        param_4 = param_4 + -1;
        iVar6 = iVar6 + 1;
        if (iVar5 < iVar6) break;
      }
    }
  }
  FUN_00414560(&local_50,3);
  FUN_00414480(local_res10);
  return iVar4;
}

