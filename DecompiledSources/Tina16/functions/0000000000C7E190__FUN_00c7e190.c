/* Ghidra address: 00c7e190 */
/* Ghidra symbol: FUN_00c7e190 */


longlong FUN_00c7e190(longlong param_1,char param_2,int param_3,undefined8 param_4,longlong *param_5
                     )

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  bool bVar10;
  longlong local_res8;
  int local_res18;
  undefined1 auStack_178 [32];
  undefined *local_158;
  undefined8 local_150;
  undefined *local_148;
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
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 *local_60;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  int local_40;
  int local_3c;
  longlong *local_38;
  undefined8 local_30;
  
  local_70 = auStack_178;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_118 = 0;
  local_120 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_b0 = (longlong *)0x0;
  local_b8 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_res8 = param_1;
  puVar1 = auStack_178;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_70;
  }
  local_70 = puVar1;
  FUN_0043f750(&local_80,param_3);
  local_158 = &DAT_00c7ed1c;
  local_148 = &DAT_00c7ed30;
  local_150 = param_4;
  FUN_00416cd0(&local_78,5,L"TImageDB.Create(",local_80);
  FUN_01d42920(local_78,0);
  FUN_00410e60(local_res8,0);
  plVar8 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(longlong **)(local_res8 + 8) = plVar8;
  (**(code **)(*plVar8 + 0xa8))(plVar8,param_4);
  plVar8 = (longlong *)FUN_00609e10(*(undefined8 *)(local_res8 + 8));
  local_54 = (**(code **)(*plVar8 + 0x30))(plVar8,0,0);
  FUN_01d42920(L"TImageDB.Create: FImage.LoadFromFile",0);
  iVar2 = (**(code **)(**(longlong **)(local_res8 + 8) + 0x48))(*(longlong **)(local_res8 + 8));
  *(int *)(local_res8 + 0x14) = iVar2;
  local_res18 = param_3;
  if (param_3 == -1) {
    local_res18 = iVar2;
  }
  *(int *)(local_res8 + 0x18) = local_res18;
  iVar2 = (**(code **)(**(longlong **)(local_res8 + 8) + 0x60))(*(longlong **)(local_res8 + 8));
  *(int *)(local_res8 + 0x10) = iVar2 / local_res18;
  uVar9 = FUN_007d5160(&PTR_FUN_006441f8,
                       CONCAT71((uint7)((ulonglong)((longlong)iVar2 % (longlong)local_res18) >> 8) &
                                0xffffff,1),*(undefined4 *)(local_res8 + 0x14),
                       *(undefined4 *)(local_res8 + 0x18));
  *(undefined8 *)(local_res8 + 0x20) = uVar9;
  FUN_007d5ad0(uVar9,*(undefined8 *)(local_res8 + 8),local_54);
  FUN_01d42920(L"TImageDB.Create: FIList.FileLoad",0);
  FUN_007d5cb0(*(undefined8 *)(local_res8 + 0x20),0,*(undefined8 *)(local_res8 + 8));
  uVar9 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x28) = uVar9;
  iVar2 = (**(code **)(**(longlong **)(local_res8 + 0x20) + 0x90))();
  local_3c = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_0043f750(&local_88,local_3c + -1);
      (**(code **)(**(longlong **)(local_res8 + 0x28) + 0x78))
                (*(longlong **)(local_res8 + 0x28),local_88);
      local_3c = local_3c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_01d42920(L"TImageDB.Create: Scanning Buttons...",0);
  *(undefined4 *)(*(longlong *)(local_res8 + 0x20) + 0x98) = 10;
  local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_30 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00416ba0(&local_90,*(undefined8 *)PTR_DAT_020049a0,L"\\Buttons");
  FUN_00c7df70(auStack_178,local_90,L"<TINADIR>\\Buttons");
  FUN_00416ba0(&local_98,*(undefined8 *)PTR_DAT_02001340,L"\\Buttons");
  FUN_00c7df70(auStack_178,local_98,L"<COMMONCATDIR>\\Buttons");
  FUN_00416ba0(&local_a0,*(undefined8 *)PTR_DAT_02004438,L"\\Buttons");
  FUN_00c7df70(auStack_178,local_a0,L"<CATALOGDIR>\\Buttons");
  FUN_01d42920(L"TImageDB.Create: Reading Buttons...",0);
  uVar9 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar9;
  local_50 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  local_48 = (longlong *)
             FUN_007d5160(&PTR_FUN_006441f8,1,*(undefined4 *)(local_res8 + 0x14),
                          *(undefined4 *)(local_res8 + 0x18));
  iVar2 = (**(code **)(*param_5 + 0x28))();
  local_3c = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_5 + 0x18))(param_5,&local_a8,local_3c);
      (**(code **)(*local_50 + 0xa8))(local_50,local_a8);
      FUN_007d6450(local_48);
      FUN_007d5ad0(local_48,local_50,local_54);
      FUN_007d7690(*(undefined8 *)(local_res8 + 0x20),local_48);
      iVar3 = (**(code **)(*local_48 + 0x90))();
      local_40 = 0;
      if (-1 < iVar3 + -1) {
        do {
          (**(code **)(*param_5 + 0x18))(param_5,&local_c8,local_3c);
          FUN_00441920(&local_c0,local_c8);
          FUN_004414c0(&local_b8,local_c0,0);
          FUN_0043f750(&local_d0,local_40);
          local_158 = &DAT_00c7ef68;
          local_150 = local_d0;
          FUN_00416cd0(&local_b0,4,&DAT_00c7ef58,local_b8);
          (**(code **)(**(longlong **)(local_res8 + 0x28) + 0x78))
                    (*(longlong **)(local_res8 + 0x28),local_b0);
          local_40 = local_40 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_60 = (undefined8 *)FUN_004095c0(0x10);
      uVar4 = (**(code **)(*local_50 + 0x48))(local_50);
      uVar5 = (**(code **)(*local_50 + 0x48))(local_50);
      uVar9 = FUN_007d5160(&PTR_FUN_006441f8,1,uVar4,uVar5);
      *local_60 = uVar9;
      FUN_007d5ad0(uVar9,local_50);
      uVar9 = FUN_004b6930(&PTR_FUN_00478280,1);
      local_60[1] = uVar9;
      iVar3 = (**(code **)(*local_50 + 0x60))(local_50);
      iVar6 = (**(code **)(*local_50 + 0x48))(local_50);
      local_40 = 0;
      if (-1 < iVar3 / iVar6) {
        iVar3 = iVar3 / iVar6 + 1;
        do {
          (**(code **)(*param_5 + 0x18))(param_5,&local_f0,local_3c);
          FUN_00441920(&local_e8,local_f0);
          FUN_004414c0(&local_e0,local_e8,0);
          FUN_0043f750(&local_f8,local_40);
          local_158 = &DAT_00c7ef68;
          local_150 = local_f8;
          FUN_00416cd0(&local_d8,4,&DAT_00c7ef58,local_e0);
          (**(code **)(*(longlong *)local_60[1] + 0x78))((longlong *)local_60[1],local_d8);
          local_40 = local_40 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      (**(code **)(*param_5 + 0x18))(param_5,&local_110,local_3c);
      FUN_00441920(&local_108,local_110);
      FUN_004414c0(&local_100,local_108,0);
      (**(code **)(**(longlong **)(local_res8 + 0x30) + 0x80))
                (*(longlong **)(local_res8 + 0x30),local_100,local_60);
      local_3c = local_3c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = (**(code **)(*local_38 + 0x28))();
  local_3c = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*local_38 + 0x18))(local_38,&local_120,local_3c);
      FUN_00b928f0(&local_118,local_120,0);
      (**(code **)(*local_50 + 0xa8))(local_50,local_118);
      FUN_007d6450(local_48);
      plVar8 = local_50;
      FUN_007d5ad0(local_48,local_50,local_54);
      uVar7 = (**(code **)(*local_48 + 0x90))(local_48);
      if (uVar7 < 8) {
        bVar10 = ((int)CONCAT71((int7)((ulonglong)plVar8 >> 8),1) << ((byte)uVar7 & 0x1f) & 6U) != 0
        ;
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        iVar3 = (**(code **)(*local_48 + 0x90))(local_48);
        if (iVar3 == 2) {
          if (*PTR_DAT_02002480 == '\0') {
            FUN_007d6390(local_48,0);
          }
          else {
            FUN_007d6390(local_48,1);
          }
        }
        FUN_007d7690(*(undefined8 *)(local_res8 + 0x20),local_48);
        (**(code **)(*local_38 + 0x18))(local_38,&local_138,local_3c);
        FUN_004414c0(&local_130,local_138,0);
        FUN_00416ba0(&local_128,&DAT_00c7ef58,local_130);
        (**(code **)(**(longlong **)(local_res8 + 0x28) + 0x78))
                  (*(longlong **)(local_res8 + 0x28),local_128);
      }
      local_3c = local_3c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(local_48);
  FUN_00410f20(local_50);
  uVar4 = (**(code **)(**(longlong **)(local_res8 + 0x20) + 0x90))
                    (*(longlong **)(local_res8 + 0x20));
  *(undefined4 *)(local_res8 + 0x10) = uVar4;
  FUN_00410f20(local_38);
  FUN_00410f20(local_30);
  FUN_01d42920(L"TImageDB.Create: End",0);
  FUN_00414560(&local_138,0x19);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

