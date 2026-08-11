/* Ghidra address: 0104a1b0 */
/* Ghidra symbol: FUN_0104a1b0 */


void FUN_0104a1b0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_90 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_70 = 0;
  local_80 = 0;
  local_78 = 0;
  local_58 = 0;
  local_68 = 0;
  local_60 = 0;
  local_40[0] = 0;
  local_50 = 0;
  local_48 = 0;
  local_30 = 0;
  iVar3 = *(int *)(param_1 + 0x6c);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                (*(longlong **)(param_1 + 0x18),&local_30,iVar2);
      FUN_00f60c30(&local_48,local_30,8);
      FUN_00416ad0(&local_48,&DAT_0104a58c);
      FUN_00f60c30(local_40,local_48,0x10);
      FUN_0043f750(&local_50,iVar3);
      FUN_00416ad0(local_40,local_50);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))
                (*(longlong **)(param_1 + 0x20),local_40[0]);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if ((*(int *)(param_1 + 0x95c) == 9) || (*(int *)(param_1 + 0x95c) == 8)) {
    FUN_00414b50(&local_30,L"CIKL1 ");
    FUN_00f60c30(&local_60,local_30,8);
    FUN_00416ad0(&local_60,&DAT_0104a58c);
    FUN_00f60c30(&local_58,local_60,0x10);
    FUN_0043f750(&local_68,iVar3);
    FUN_00416ad0(&local_58,local_68);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))(*(longlong **)(param_1 + 0x20),local_58);
    FUN_00414b50(&local_30,L"USART_FLAG ");
    FUN_00f60c30(&local_78,local_30,8);
    FUN_00416ad0(&local_78,&DAT_0104a58c);
    FUN_00f60c30(&local_70,local_78,0x10);
    FUN_0043f750(&local_80,iVar3 + 1);
    FUN_00416ad0(&local_70,local_80);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))(*(longlong **)(param_1 + 0x20),local_70);
    iVar3 = iVar3 + 2;
    if (*(int *)(param_1 + 0x95c) == 8) {
      *(undefined4 *)(param_1 + 0x940) = 0x14;
    }
    iVar1 = 0;
    if (-1 < *(int *)(param_1 + 0x940)) {
      iVar2 = *(int *)(param_1 + 0x940) + 1;
      do {
        FUN_0043f750(&local_88,iVar1);
        FUN_00416cd0(&local_30,3,L"USART",local_88,&LAB_0104a5f8);
        FUN_00f60c30(&local_98,local_30,8);
        FUN_00416ad0(&local_98,&DAT_0104a58c);
        FUN_00f60c30(&local_90,local_98,0x10);
        FUN_0043f750(&local_a0,iVar3);
        FUN_00416ad0(&local_90,local_a0);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))
                  (*(longlong **)(param_1 + 0x20),local_90);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00414560(&local_a0,0xd);
  FUN_00414480(&local_30);
  return;
}

