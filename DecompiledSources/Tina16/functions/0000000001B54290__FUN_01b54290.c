/* Ghidra address: 01b54290 */
/* Ghidra symbol: FUN_01b54290 */


void FUN_01b54290(longlong param_1)

{
  double dVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_70 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  FUN_00414b50(&local_58,L"\r\n\r\n\r\n\r\n");
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708));
  FUN_01b51760(uVar3,&local_40,&local_48,&local_50,&PTR_DAT_01b54668);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6c8),0,0,local_40);
  FUN_00416cd0(&local_58,3,local_58,local_40,&DAT_01b5467c);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6c8),1,0,local_48);
  FUN_00416cd0(&local_58,3,local_58,local_48,&DAT_01b5467c);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6c8),2,0,local_50);
  puVar7 = &DAT_01b5467c;
  FUN_00416cd0(&local_58,4,local_58,local_50,&DAT_01b5467c,&DAT_01b5468c);
  iVar5 = 1;
  FUN_00848a70(*(undefined8 *)(param_1 + 0x6c8),
               *(int *)(*(longlong *)(param_1 + 0x5580) + 0x1490) + 2);
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x5580) + 0x1490);
  local_74 = 0;
  if (-1 < iVar6 + -1) {
    do {
      dVar1 = *(double *)
               (*(longlong *)(*(longlong *)(param_1 + 0x5580) + 0x1480) + (longlong)local_74 * 0x10)
      ;
      if (0.0 <= dVar1) {
        puVar2 = *(undefined8 **)
                  (*(longlong *)(*(longlong *)(param_1 + 0x5580) + 0x1480) + 8 +
                  (longlong)local_74 * 0x10);
        local_38 = *puVar2;
        uStack_30 = puVar2[1];
        FUN_00b8fd60(&local_70,dVar1,4,0,(ulonglong)puVar7 & 0xffffffffffffff00);
        local_68 = local_70;
        local_60 = 0x11;
        FUN_00442f70(&local_40,&LAB_01b546a0,&local_68,0);
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))
                          (*(longlong **)(param_1 + 0x708));
        FUN_01b51ac0(uVar3,&local_38,4,&local_48,&local_50);
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6c8),0,iVar5,local_40);
        FUN_00416cd0(&local_58,3,local_58,local_40,&DAT_01b5467c);
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6c8),1,iVar5,local_48);
        FUN_00416cd0(&local_58,3,local_58,local_48,&DAT_01b5467c);
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6c8),2,iVar5,local_50);
        puVar7 = &DAT_01b5467c;
        FUN_00416cd0(&local_58,4,local_58,local_50,&DAT_01b5467c,&DAT_01b5468c);
        iVar5 = iVar5 + 1;
      }
      local_74 = local_74 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  uVar4 = FUN_006a6030();
  FUN_006a58e0(uVar4,local_58);
  FUN_00414480(&local_70);
  FUN_00414560(&local_58,4);
  return;
}

