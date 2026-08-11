/* Ghidra address: 00fb6220 */
/* Ghidra symbol: FUN_00fb6220 */


void FUN_00fb6220(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x260))(*(longlong **)(param_1 + 0x7a8));
  if ((((iVar3 == 8) || (iVar3 == 10)) || (iVar3 == 0xc)) || (iVar3 == 0xe)) {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7f8),1);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x730),0);
    *(undefined1 *)(param_1 + 0x812) = 1;
    *(undefined1 *)(param_1 + 0x813) = 0;
    *(undefined4 *)(param_1 + 0x824) = *(undefined4 *)(param_1 + 0xc00);
  }
  else if (((iVar3 == 4) || (iVar3 == 9)) || ((iVar3 == 0xb || (iVar3 == 0xf)))) {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7f8),1);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x730),0);
    *(undefined1 *)(param_1 + 0x812) = 0;
    *(undefined1 *)(param_1 + 0x813) = 1;
    *(undefined4 *)(param_1 + 0x824) = *(undefined4 *)(param_1 + 0xbf4);
  }
  else {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7f8),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x730),1);
    *(undefined1 *)(param_1 + 0x812) = 0;
    *(undefined1 *)(param_1 + 0x813) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x778) + 0x128))(*(longlong **)(param_1 + 0x778),1);
    if ((iVar3 == 1) || (iVar3 == 5)) {
      *(undefined4 *)(param_1 + 0x824) = 0x100;
      (**(code **)(**(longlong **)(param_1 + 0x778) + 0x128))(*(longlong **)(param_1 + 0x778),0);
      FUN_00b8fd60(&local_20,
                   (double)(*(int *)(param_1 + 0x824) * *(int *)(param_1 + 0x820)) /
                   *(double *)(param_1 + 0xd60),*PTR_DAT_02005310,0,1);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x778),local_20);
    }
    else if ((iVar3 == 2) || (iVar3 == 6)) {
      *(undefined4 *)(param_1 + 0x824) = 0x200;
      (**(code **)(**(longlong **)(param_1 + 0x778) + 0x128))(*(longlong **)(param_1 + 0x778),0);
      FUN_00b8fd60(&local_28,
                   (double)(*(int *)(param_1 + 0x824) * *(int *)(param_1 + 0x820)) /
                   *(double *)(param_1 + 0xd60),*PTR_DAT_02005310,0,1);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x778),local_28);
    }
    else if ((iVar3 == 3) || (iVar3 == 7)) {
      *(undefined4 *)(param_1 + 0x824) = 0x400;
      (**(code **)(**(longlong **)(param_1 + 0x778) + 0x128))(*(longlong **)(param_1 + 0x778),0);
      FUN_00b8fd60(&local_30,
                   (double)(*(int *)(param_1 + 0x824) * *(int *)(param_1 + 0x820)) /
                   *(double *)(param_1 + 0xd60),*PTR_DAT_02005310,0,1);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x778),local_30);
    }
  }
  if ((((iVar3 == 1) || (iVar3 == 2)) || (iVar3 == 3)) || ((iVar3 == 10 || (iVar3 == 0xb)))) {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x798),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7a0),1);
    (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x268))
              (*(longlong **)(param_1 + 0x7a0),*(undefined4 *)(param_1 + 0xc08));
    lVar1 = *(longlong *)(param_1 + 0x7a0);
    plVar2 = *(longlong **)(lVar1 + 0x4f0);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_38,*(undefined4 *)(param_1 + 0xc08));
    FUN_0064de00(lVar1,local_38);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7c8),0);
    *(undefined1 *)(param_1 + 0x811) = 0;
  }
  else if ((iVar3 == 8) || (iVar3 == 9)) {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x798),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7a0),1);
    (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x268))
              (*(longlong **)(param_1 + 0x7a0),*(undefined4 *)(param_1 + 0xc08));
    lVar1 = *(longlong *)(param_1 + 0x7a0);
    plVar2 = *(longlong **)(lVar1 + 0x4f0);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40,*(undefined4 *)(param_1 + 0xc08));
    FUN_0064de00(lVar1,local_40);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7c8),0);
    *(undefined1 *)(param_1 + 0x811) = 0;
  }
  else if ((((iVar3 == 5) || (iVar3 == 6)) || (iVar3 == 7)) || ((iVar3 == 0xe || (iVar3 == 0xf)))) {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x798),1);
    (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))
              (*(longlong **)(param_1 + 0x798),*(undefined4 *)(param_1 + 0xc08));
    lVar1 = *(longlong *)(param_1 + 0x798);
    plVar2 = *(longlong **)(lVar1 + 0x4f0);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_48,*(undefined4 *)(param_1 + 0xc08));
    FUN_0064de00(lVar1,local_48);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7a0),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7c8),0);
    *(undefined1 *)(param_1 + 0x811) = 1;
  }
  else {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x798),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7a0),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7c8),1);
    (**(code **)(**(longlong **)(param_1 + 0x7c8) + 0x268))
              (*(longlong **)(param_1 + 0x7c8),*(undefined4 *)(param_1 + 0xc08));
    lVar1 = *(longlong *)(param_1 + 0x7c8);
    plVar2 = *(longlong **)(lVar1 + 0x4f0);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_50,*(undefined4 *)(param_1 + 0xc08));
    FUN_0064de00(lVar1,local_50);
    *(undefined1 *)(param_1 + 0x811) = 0;
  }
  uVar4 = FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x824),1.0 / *(double *)(param_1 + 0xd60),
                       (double)*(int *)(param_1 + 0x820));
  FUN_00b8fd60(&local_60,uVar4,*PTR_DAT_02005310,0,1);
  FUN_00416ba0(&local_58,L"Max Period: ",local_60);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x758),local_58);
  uVar4 = FUN_00fb5530(param_1,(double)*(int *)(param_1 + 0x824),1.0 / *(double *)(param_1 + 0xd60),
                       (double)*(int *)(param_1 + 0x820));
  FUN_00b8fd60(&local_70,uVar4,*PTR_DAT_02005310,0,1);
  FUN_00416ba0(&local_68,L"Max Duty Cycle: ",local_70);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x760),local_68);
  FUN_00414560(&local_70,0xb);
  return;
}

