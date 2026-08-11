/* Ghidra address: 01038eb0 */
/* Ghidra symbol: FUN_01038eb0 */


void FUN_01038eb0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
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
  
  local_b0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_98 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_78 = 0;
  local_88 = 0;
  local_80 = 0;
  local_60 = 0;
  local_70 = 0;
  local_68 = 0;
  local_48 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_30 = 0;
  if (*(int *)(param_1 + 0x6c) == 0) {
    *(undefined4 *)(param_1 + 0x6c) = 0x60;
  }
  iVar3 = *(int *)(param_1 + 0x6c);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                (*(longlong **)(param_1 + 0x18),local_40,iVar2);
      FUN_00416ba0(&local_30,local_40[0],&DAT_0103936c);
      FUN_00f60c30(&local_50,L".equ",0x10);
      FUN_00416ad0(&local_50,local_30);
      FUN_00f60c30(&local_48,local_50,8);
      FUN_0043f750(&local_58,iVar3);
      FUN_00416ad0(&local_48,local_58);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))(*(longlong **)(param_1 + 0x20),local_48)
      ;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if ((*(int *)(param_1 + 0xbf0) == 0xd) || (*(int *)(param_1 + 0xbf0) == 0xb)) {
    FUN_00414b50(&local_30,L"CIKL1  = ");
    FUN_00f60c30(&local_68,L".equ",0x10);
    FUN_00416ad0(&local_68,local_30);
    FUN_00f60c30(&local_60,local_68,8);
    FUN_0043f750(&local_70,iVar3);
    FUN_00416ad0(&local_60,local_70);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))(*(longlong **)(param_1 + 0x20),local_60);
    FUN_00414b50(&local_30,L"USART_FLAG  = ");
    FUN_00f60c30(&local_80,L".equ",0x10);
    FUN_00416ad0(&local_80,local_30);
    FUN_00f60c30(&local_78,local_80,8);
    FUN_0043f750(&local_88,iVar3 + 1);
    FUN_00416ad0(&local_78,local_88);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))(*(longlong **)(param_1 + 0x20),local_78);
    iVar3 = iVar3 + 2;
    if (*(int *)(param_1 + 0xbf0) == 0xb) {
      *(undefined4 *)(param_1 + 0xc38) = 0x14;
    }
    iVar1 = 0;
    if (-1 < *(int *)(param_1 + 0xc38)) {
      iVar2 = *(int *)(param_1 + 0xc38) + 1;
      do {
        FUN_0043f750(&local_90,iVar1);
        FUN_00416cd0(&local_30,3,L"USART",local_90,&DAT_0103936c);
        FUN_00f60c30(&local_a0,L".equ",0x10);
        FUN_00416ad0(&local_a0,local_30);
        FUN_00f60c30(&local_98,local_a0,8);
        FUN_0043f750(&local_a8,iVar3);
        FUN_00416ad0(&local_98,local_a8);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))
                  (*(longlong **)(param_1 + 0x20),local_98);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00414b50(&local_30,L"status_temp = ");
  FUN_00f60c30(&local_b8,L".equ",0x10);
  FUN_00416ad0(&local_b8,local_30);
  FUN_00f60c30(&local_b0,local_b8,8);
  FUN_0043f750(&local_c0,iVar3);
  FUN_00416ad0(&local_b0,local_c0);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))(*(longlong **)(param_1 + 0x20),local_b0);
  FUN_00414560(&local_c0,0x11);
  FUN_00414480(&local_30);
  return;
}

