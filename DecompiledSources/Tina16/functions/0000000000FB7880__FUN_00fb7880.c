/* Ghidra address: 00fb7880 */
/* Ghidra symbol: FUN_00fb7880 */


void FUN_00fb7880(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  FUN_0064de00(*(undefined8 *)(param_1 + 0x768),0);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0));
  iVar1 = *(int *)(param_1 + 0x840 + (longlong)iVar1 * 4);
  *(int *)(param_1 + 0x820) = iVar1;
  uVar3 = FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x824),1.0 / *(double *)(param_1 + 0xd60),
                       (double)iVar1);
  FUN_00b8fd60(&local_28,uVar3,*PTR_DAT_02005310,0,1);
  FUN_00416ba0(local_20,L"Max Period: ",local_28);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x758),local_20[0]);
  uVar3 = FUN_00fb5530(param_1,(double)*(int *)(param_1 + 0x824),1.0 / *(double *)(param_1 + 0xd60),
                       (double)*(int *)(param_1 + 0x820));
  FUN_00b8fd60(&local_38,uVar3,*PTR_DAT_02005310,0,1);
  FUN_00416ba0(&local_30,L"Max Duty Cycle: ",local_38);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x760),local_30);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0));
  (**(code **)(**(longlong **)(param_1 + 2000) + 0x268))(*(longlong **)(param_1 + 2000),uVar2);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0));
  *(undefined4 *)(param_1 + 0x814) = uVar2;
  FUN_00fb69a0(param_1,param_2);
  FUN_00fb8770(param_1,param_2);
  FUN_00fb7bc0(param_1,param_2);
  FUN_00414560(&local_38,4);
  return;
}

