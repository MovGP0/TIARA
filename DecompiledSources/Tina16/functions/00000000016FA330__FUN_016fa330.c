/* Ghidra address: 016fa330 */
/* Ghidra symbol: FUN_016fa330 */


void FUN_016fa330(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 local_res18 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50 [2];
  undefined1 local_3c [4];
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_68 = 0;
  local_90 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50[0] = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_016fa6c0(param_1,*param_2,local_30,&local_38);
  iVar1 = (**(code **)(*(longlong *)*param_2 + 0x28))();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,local_50,iVar5);
      iVar2 = FUN_004170c0(L"hash=",local_50[0],1);
      if (iVar2 == 1) {
        FUN_004156b0(&local_58,"hash=",local_38);
        FUN_00416880(&local_60,local_58);
        (**(code **)(*(longlong *)*param_2 + 0x40))((longlong *)*param_2,iVar5,local_60);
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*(longlong *)*param_2 + 0x38))((longlong *)*param_2,&local_80);
  FUN_00415dd0(&local_88,local_80,0);
  FUN_00b69630(&local_78,local_88);
  FUN_016f9bb0(param_1,&local_70,local_78);
  FUN_00b69630(&local_68,local_70);
  FUN_00416880(&local_90,local_68);
  (**(code **)(*plVar3 + 0x60))(plVar3,local_90);
  if (param_4 == (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x100))(plVar3,local_res18[0]);
  }
  else {
    iVar5 = (**(code **)*param_4)(param_4);
    (**(code **)(*plVar3 + 0x110))(plVar3,param_4);
    iVar1 = (**(code **)*param_4)(param_4);
    iVar1 = iVar1 - iVar5;
    iVar5 = 4;
    puVar4 = local_3c;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = 3;
    for (; 0 < iVar1; iVar1 = iVar1 / 0x100) {
      local_3c[iVar5] = (char)(iVar1 % 0x100);
      iVar5 = iVar5 + -1;
    }
    (**(code **)(*param_4 + 0x20))(param_4,local_3c,4);
  }
  FUN_00410f20(plVar3);
  FUN_00414480(&local_90);
  FUN_004144d0(&local_88);
  FUN_00414480(&local_80);
  FUN_00414590(&local_78,3);
  FUN_00414480(&local_60);
  FUN_004144d0(&local_58);
  FUN_00414480(local_50);
  FUN_00414590(&local_38,2);
  FUN_00414480(local_res18);
  return;
}

