/* Ghidra address: 00ff19f0 */
/* Ghidra symbol: FUN_00ff19f0 */


void FUN_00ff19f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
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
  
  local_170 = 0;
  local_180 = 0;
  local_178 = 0;
  local_158 = 0;
  local_168 = 0;
  local_160 = 0;
  local_140 = 0;
  local_150 = 0;
  local_148 = 0;
  local_128 = 0;
  local_138 = 0;
  local_130 = 0;
  local_110 = 0;
  local_120 = 0;
  local_118 = 0;
  local_f8 = 0;
  local_108 = 0;
  local_100 = 0;
  local_e0 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_c8 = 0;
  local_d8 = 0;
  local_d0 = 0;
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
  local_40[0] = 0;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_30 = 0;
  iVar3 = *(int *)(param_1 + 0x6c);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                (*(longlong **)(param_1 + 0x18),&local_30,iVar2);
      FUN_0043e130(&local_50,local_30);
      FUN_00f60c30(&local_48,local_50,8);
      FUN_00416ad0(&local_48,&DAT_00ff245c);
      FUN_00f60c30(local_40,local_48,0x10);
      FUN_00f61040(&local_58,iVar3);
      FUN_00416ad0(local_40,local_58);
      FUN_00f788b0(param_1,param_2,local_40[0]);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if ((*(int *)(param_1 + 0x950) == 7) || (*(int *)(param_1 + 0x950) == 6)) {
    FUN_00414b50(&local_30,L"CIKL1 ");
    FUN_00f60c30(&local_68,local_30,8);
    FUN_00416ad0(&local_68,&DAT_00ff245c);
    FUN_00f60c30(&local_60,local_68,0x10);
    FUN_00f61040(&local_70,iVar3);
    FUN_00416ad0(&local_60,local_70);
    FUN_00f788b0(param_1,param_2,local_60);
    FUN_00414b50(&local_30,L"USART_FLAG ");
    FUN_00f60c30(&local_80,local_30,8);
    FUN_00416ad0(&local_80,&DAT_00ff245c);
    FUN_00f60c30(&local_78,local_80,0x10);
    FUN_00f61040(&local_88,iVar3 + 1);
    FUN_00416ad0(&local_78,local_88);
    FUN_00f788b0(param_1,param_2,local_78);
    iVar3 = iVar3 + 2;
    if (*(int *)(param_1 + 0x950) == 6) {
      *(undefined4 *)(param_1 + 0x994) = 0x14;
    }
    iVar1 = 0;
    if (-1 < *(int *)(param_1 + 0x994)) {
      iVar2 = *(int *)(param_1 + 0x994) + 1;
      do {
        FUN_0043f750(&local_90,iVar1);
        FUN_00416cd0(&local_30,3,L"USART",local_90,&DAT_00ff24c8);
        FUN_00f60c30(&local_a0,local_30,8);
        FUN_00416ad0(&local_a0,&DAT_00ff245c);
        FUN_00f60c30(&local_98,local_a0,0x10);
        FUN_00f61040(&local_a8,iVar3);
        FUN_00416ad0(&local_98,local_a8);
        FUN_00f788b0(param_1,param_2,local_98);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  if ((*(int *)(param_1 + 0x954) == 0xd) || (*(int *)(param_1 + 0x954) == 0xc)) {
    FUN_00414b50(&local_30,L"PORT_NEW ");
    FUN_00f60c30(&local_b8,local_30,8);
    FUN_00416ad0(&local_b8,&DAT_00ff245c);
    FUN_00f60c30(&local_b0,local_b8,0x10);
    FUN_00f61040(&local_c0,iVar3);
    FUN_00416ad0(&local_b0,local_c0);
    FUN_00f788b0(param_1,param_2,local_b0);
    FUN_00414b50(&local_30,L"PORT_OLD ");
    FUN_00f60c30(&local_d0,local_30,8);
    FUN_00416ad0(&local_d0,&DAT_00ff245c);
    FUN_00f60c30(&local_c8,local_d0,0x10);
    FUN_00f61040(&local_d8,iVar3 + 1);
    FUN_00416ad0(&local_c8,local_d8);
    FUN_00f788b0(param_1,param_2,local_c8);
    FUN_00414b50(&local_30,L"PORT_CHG ");
    FUN_00f60c30(&local_e8,local_30,8);
    FUN_00416ad0(&local_e8,&DAT_00ff245c);
    FUN_00f60c30(&local_e0,local_e8,0x10);
    FUN_00f61040(&local_f0,iVar3 + 2);
    FUN_00416ad0(&local_e0,local_f0);
    FUN_00f788b0(param_1,param_2,local_e0);
    iVar3 = iVar3 + 3;
  }
  if ((*(char *)(param_1 + 0x95d) != '\0') || (*(char *)(param_1 + 0x95f) != '\0')) {
    FUN_00414b50(&local_30,L"CCP_V ");
    FUN_00f60c30(&local_100,local_30,8);
    FUN_00416ad0(&local_100,&DAT_00ff245c);
    FUN_00f60c30(&local_f8,local_100,0x10);
    FUN_00f61040(&local_108,iVar3);
    FUN_00416ad0(&local_f8,local_108);
    FUN_00f788b0(param_1,param_2,local_f8);
    FUN_00414b50(&local_30,L"CCP_C ");
    FUN_00f60c30(&local_118,local_30,8);
    FUN_00416ad0(&local_118,&DAT_00ff245c);
    FUN_00f60c30(&local_110,local_118,0x10);
    FUN_00f61040(&local_120,iVar3 + 1);
    FUN_00416ad0(&local_110,local_120);
    FUN_00f788b0(param_1,param_2,local_110);
  }
  FUN_00414b50(&local_30,L"W_TEMP ");
  FUN_00f60c30(&local_130,local_30,8);
  FUN_00416ad0(&local_130,&DAT_00ff245c);
  FUN_00f60c30(&local_128,local_130,0x10);
  FUN_00f61040(&local_138,0x70);
  FUN_00416ad0(&local_128,local_138);
  FUN_00f788b0(param_1,param_2,local_128);
  FUN_00414b50(&local_30,L"STATUS_TEMP ");
  FUN_00f60c30(&local_148,local_30,8);
  FUN_00416ad0(&local_148,&DAT_00ff245c);
  FUN_00f60c30(&local_140,local_148,0x10);
  FUN_00f61040(&local_150,0x71);
  FUN_00416ad0(&local_140,local_150);
  FUN_00f788b0(param_1,param_2,local_140);
  FUN_00414b50(&local_30,L"S_TEMP0 ");
  FUN_00f60c30(&local_160,local_30,8);
  FUN_00416ad0(&local_160,&DAT_00ff245c);
  FUN_00f60c30(&local_158,local_160,0x10);
  FUN_00f61040(&local_168,0x72);
  FUN_00416ad0(&local_158,local_168);
  FUN_00f788b0(param_1,param_2,local_158);
  FUN_00414b50(&local_30,L"S_TEMP1 ");
  FUN_00f60c30(&local_178,local_30,8);
  FUN_00416ad0(&local_178,&DAT_00ff245c);
  FUN_00f60c30(&local_170,local_178,0x10);
  FUN_00f61040(&local_180,0x73);
  FUN_00416ad0(&local_170,local_180);
  FUN_00f788b0(param_1,param_2,local_170);
  FUN_00414560(&local_180,0x29);
  FUN_00414480(&local_30);
  return;
}

