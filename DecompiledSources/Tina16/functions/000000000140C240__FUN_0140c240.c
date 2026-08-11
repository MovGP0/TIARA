/* Ghidra address: 0140c240 */
/* Ghidra symbol: FUN_0140c240 */


void FUN_0140c240(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar6;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  if (*(int *)(param_1 + 0x72c) == 0x20) {
    uVar2 = FUN_0140b550();
  }
  else {
    FUN_00c42670(0x4000000000000000,(double)*(int *)(param_1 + 0x72c));
    uVar2 = FUN_0040c840();
  }
  *(undefined4 *)(param_1 + 0x710) = *(undefined4 *)(*(longlong *)(param_1 + 0x6b0) + 0x4a8);
  bVar5 = *(char *)(param_1 + 0x734) == '\0';
  if (bVar5) {
    uVar4 = *(undefined4 *)(param_1 + 0x72c);
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x730);
  }
  uVar2 = FUN_0140af60(param_1 + 0x710,uVar4,uVar2,*(char *)(param_1 + 0x734));
  uVar3 = CONCAT44(uVar6,1);
  FUN_01408750(local_40,*(undefined4 *)(param_1 + 0x720),*(undefined4 *)(param_1 + 0x72c),
               *(undefined4 *)(param_1 + 0x728),uVar3);
  uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_40[0]);
  uVar3 = CONCAT44(uVar6,1);
  FUN_01408750(&local_48,*(undefined4 *)(param_1 + 0x724),*(undefined4 *)(param_1 + 0x72c),
               *(undefined4 *)(param_1 + 0x728),uVar3);
  uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6f8),local_48);
  iVar1 = *(int *)(param_1 + 0x710);
  if ((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) ||
     (((iVar1 == 4 || (iVar1 == 3)) || (iVar1 == 5)))) {
    FUN_01408750(local_30,uVar2,*(undefined4 *)(param_1 + 0x72c),!bVar5,CONCAT44(uVar6,(uint)!bVar5)
                );
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),local_30[0]);
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_60,PTR_PTR_020013c0);
    FUN_00b8e650(uVar3,&local_58,L"HDLStrings.Msg_NotAssigned",local_60);
    FUN_00416cd0(&local_50,3,&DAT_0140c74c,local_58,&LAB_0140c7a0);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_50);
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_78,PTR_PTR_020013c0);
    FUN_00b8e650(uVar3,&local_70,L"HDLStrings.Msg_NotAssigned",local_78);
    FUN_00416cd0(&local_68,3,&DAT_0140c74c,local_70,&LAB_0140c7a0);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6f8),local_68);
    (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x128))(*(longlong **)(param_1 + 0x6d8),0);
    FUN_0064dfb0(*(undefined8 *)(param_1 + 0x6d8),0);
    (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x128))(*(longlong **)(param_1 + 0x6b8),0);
    (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x128))(*(longlong **)(param_1 + 0x6e8),0);
    FUN_0064dfb0(*(undefined8 *)(param_1 + 0x6e8),0);
    (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),0);
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x128))(*(longlong **)(param_1 + 0x6f8),0);
    FUN_0064dfb0(*(undefined8 *)(param_1 + 0x6f8),0);
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x128))(*(longlong **)(param_1 + 0x6f0),0);
  }
  else {
    FUN_01408750(local_30,uVar2,*(undefined4 *)(param_1 + 0x72c),*(undefined4 *)(param_1 + 0x728),
                 CONCAT44(uVar6,(uint)!bVar5));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),local_30[0]);
    (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x128))(*(longlong **)(param_1 + 0x6d8),1);
    FUN_0064dfb0(*(undefined8 *)(param_1 + 0x6d8),1);
    (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x128))(*(longlong **)(param_1 + 0x6b8),1);
    (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x128))(*(longlong **)(param_1 + 0x6e8),1);
    FUN_0064dfb0(*(undefined8 *)(param_1 + 0x6e8),1);
    (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),1);
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x128))(*(longlong **)(param_1 + 0x6f8),1);
    FUN_0064dfb0(*(undefined8 *)(param_1 + 0x6f8),1);
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x128))(*(longlong **)(param_1 + 0x6f0),1);
  }
  FUN_00414560(&local_78,8);
  FUN_00414480(local_30);
  return;
}

