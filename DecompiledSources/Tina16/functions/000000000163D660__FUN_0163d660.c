/* Ghidra address: 0163d660 */
/* Ghidra symbol: FUN_0163d660 */


void FUN_0163d660(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_res18 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40 [3];
  
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60[0] = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  uVar5 = FUN_016290e0(param_2);
  plVar1 = *(longlong **)(param_4 + 0x128);
  (**(code **)(*plVar1 + 0x2d0))(plVar1,0,&local_50);
  lVar2 = *(longlong *)(local_50 + 0x38);
  (**(code **)(*plVar1 + 0x288))(plVar1,local_60);
  FUN_00414ad0(param_1 + 0x13978,local_60[0]);
  FUN_00414b50(&local_48,&DAT_0163d94c);
  iVar4 = *(int *)(lVar2 + 0x44);
  iVar3 = 1;
  if (0 < iVar4) {
    do {
      FUN_0043f750(&local_68,iVar3 + -1);
      FUN_00b8fd60(&local_70,
                   *(undefined8 *)(*(longlong *)(lVar2 + 0x38) + (longlong)(iVar3 + -1) * 8),
                   *PTR_DAT_02005310,0,1);
      FUN_00416cd0(&local_48,5,local_48,&PTR_DAT_0163d960,local_68,&DAT_0163d974,local_70);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00b8fd60(&local_78,uVar5,*PTR_DAT_02005310,0,1);
  FUN_00b8fd60(&local_80,*(undefined8 *)(lVar2 + 0x18),*PTR_DAT_02005310,0,1);
  FUN_00416cd0(local_40,8,local_res18[0],L", Label: ",*(undefined8 *)(param_1 + 0x13978),L", Time: "
               ,local_78,L", f: ",local_80,local_48);
  FUN_0163d050(param_2,local_40[0]);
  FUN_00414560(&local_80,5);
  FUN_00414560(&local_48,2);
  FUN_00414480(local_res18);
  return;
}

