/* Ghidra address: 013c0f20 */
/* Ghidra symbol: FUN_013c0f20 */


void FUN_013c0f20(int param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong local_res18;
  undefined8 local_res20;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00416dc0(&local_40,*param_2,1,param_1 + -1);
  uVar3 = 0;
  if (*param_2 != 0) {
    uVar3 = *(undefined4 *)(*param_2 + -4);
  }
  FUN_00416dc0(&local_48,*param_2,param_1,uVar3);
  iVar4 = FUN_004170c0(local_res18,local_48,1);
  lVar2 = local_48;
  lVar1 = local_res18;
  if (iVar4 != 0) {
    FUN_00416dc0(local_30,local_48,1,iVar4 + -1);
    iVar5 = 0;
    if (lVar1 != 0) {
      iVar5 = *(int *)(lVar1 + -4);
    }
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = *(undefined4 *)(lVar2 + -4);
    }
    FUN_00416dc0(&local_38,local_48,iVar4 + iVar5,uVar3);
    FUN_00416cd0(&local_48,3,local_30[0],local_res20,local_38);
  }
  FUN_00416ba0(param_2,local_40,local_48);
  FUN_00414560(&local_48,4);
  FUN_00414560(&local_res18,2);
  return;
}

