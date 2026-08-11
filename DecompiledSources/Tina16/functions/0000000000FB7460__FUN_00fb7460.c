/* Ghidra address: 00fb7460 */
/* Ghidra symbol: FUN_00fb7460 */


void FUN_00fb7460(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708));
  *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(param_1 + 0x860 + (longlong)iVar1 * 4);
  uVar2 = FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x818),1.0 / *(double *)(param_1 + 0xd60),
                       (double)*(int *)(param_1 + 0x81c));
  FUN_00b8fd60(&local_18,uVar2,*PTR_DAT_02005310,0,1);
  FUN_00416ba0(&local_10,L"Max Period: ",local_18);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x758),local_10);
  uVar2 = FUN_00fb5530(param_1,(double)*(int *)(param_1 + 0x818),1.0 / *(double *)(param_1 + 0xd60),
                       (double)*(int *)(param_1 + 0x81c));
  FUN_00b8fd60(&local_28,uVar2,*PTR_DAT_02005310,0,1);
  FUN_00416ba0(&local_20,L"Max Duty Cycle: ",local_28);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x760),local_20);
  FUN_00fb69a0(param_1,param_2);
  FUN_00fb7bc0(param_1,param_2);
  FUN_00414560(&local_28,4);
  return;
}

