/* Ghidra address: 00fb6f10 */
/* Ghidra symbol: FUN_00fb6f10 */


void FUN_00fb6f10(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0));
  *(int *)(param_1 + 0xc04) = iVar2;
  if (iVar2 == 1) {
    *(undefined4 *)(param_1 + 0x818) = 0x100;
  }
  else if (iVar2 == 2) {
    *(undefined4 *)(param_1 + 0x818) = 0x200;
  }
  else if (iVar2 == 3) {
    *(undefined4 *)(param_1 + 0x818) = 0x400;
  }
  else {
    *(undefined4 *)(param_1 + 0x818) = 0x100;
  }
  uVar3 = FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x818),1.0 / *(double *)(param_1 + 0xd60),
                       (double)*(int *)(param_1 + 0x840));
  FUN_00b8fd60(local_20,uVar3,*PTR_DAT_02005310,0,1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 2000) + 0x4f0);
  (**(code **)(*plVar1 + 0x40))(plVar1,0,local_20[0]);
  uVar3 = FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x818),1.0 / *(double *)(param_1 + 0xd60),
                       (double)*(int *)(param_1 + 0x844));
  FUN_00b8fd60(&local_28,uVar3,*PTR_DAT_02005310,0,1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 2000) + 0x4f0);
  (**(code **)(*plVar1 + 0x40))(plVar1,1,local_28);
  uVar3 = FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x818),1.0 / *(double *)(param_1 + 0xd60),
                       (double)*(int *)(param_1 + 0x848));
  FUN_00b8fd60(&local_30,uVar3,*PTR_DAT_02005310,0,1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 2000) + 0x4f0);
  (**(code **)(*plVar1 + 0x40))(plVar1,2,local_30);
  uVar3 = FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x818),1.0 / *(double *)(param_1 + 0xd60),
                       (double)*(int *)(param_1 + 0x84c));
  FUN_00b8fd60(&local_38,uVar3,*PTR_DAT_02005310,0,1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 2000) + 0x4f0);
  (**(code **)(*plVar1 + 0x40))(plVar1,3,local_38);
  uVar3 = FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x818),1.0 / *(double *)(param_1 + 0xd60),
                       (double)*(int *)(param_1 + 0x850));
  FUN_00b8fd60(&local_40,uVar3,*PTR_DAT_02005310,0,1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 2000) + 0x4f0);
  (**(code **)(*plVar1 + 0x40))(plVar1,4,local_40);
  uVar3 = FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x818),1.0 / *(double *)(param_1 + 0xd60),
                       (double)*(int *)(param_1 + 0x854));
  FUN_00b8fd60(&local_48,uVar3,*PTR_DAT_02005310,0,1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 2000) + 0x4f0);
  (**(code **)(*plVar1 + 0x40))(plVar1,5,local_48);
  uVar3 = FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x824),1.0 / *(double *)(param_1 + 0xd60),
                       (double)*(int *)(param_1 + 0x820));
  FUN_00b8fd60(&local_58,uVar3,*PTR_DAT_02005310,0,1);
  FUN_00416ba0(&local_50,L"Max Period: ",local_58);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x758),local_50);
  uVar3 = FUN_00fb5530(param_1,(double)*(int *)(param_1 + 0x824),1.0 / *(double *)(param_1 + 0xd60),
                       (double)*(int *)(param_1 + 0x820));
  FUN_00b8fd60(&local_68,uVar3,*PTR_DAT_02005310,0,1);
  FUN_00416ba0(&local_60,L"Max Duty Cycle: ",local_68);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x760),local_60);
  FUN_00414560(&local_68,10);
  return;
}

