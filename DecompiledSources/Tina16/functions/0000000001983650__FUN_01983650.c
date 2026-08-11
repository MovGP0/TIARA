/* Ghidra address: 01983650 */
/* Ghidra symbol: FUN_01983650 */


void FUN_01983650(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined1 local_110;
  undefined1 local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined1 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  longlong local_b8;
  undefined1 local_ae;
  undefined1 local_ad;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined1 local_aa;
  undefined1 local_a9;
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
  
  local_a8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  local_b8 = param_1;
  local_aa = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))
                       (*(longlong **)(param_1 + 0x6c0));
  local_a9 = (**(code **)(**(longlong **)(local_b8 + 0x748) + 0x260))
                       (*(longlong **)(local_b8 + 0x748));
  uVar4 = (**(code **)(**(longlong **)(local_b8 + 0x6d0) + 0x260))(*(longlong **)(local_b8 + 0x6d0))
  ;
  local_ae = (**(code **)(**(longlong **)(local_b8 + 0x6d8) + 0x260))
                       (*(longlong **)(local_b8 + 0x6d8));
  local_ad = (**(code **)(**(longlong **)(local_b8 + 0x6e0) + 0x260))
                       (*(longlong **)(local_b8 + 0x6e0));
  local_ac = (**(code **)(**(longlong **)(local_b8 + 0x6e8) + 0x260))
                       (*(longlong **)(local_b8 + 0x6e8));
  local_ab = (**(code **)(**(longlong **)(local_b8 + 0x6f0) + 0x260))
                       (*(longlong **)(local_b8 + 0x6f0));
  uVar1 = (**(code **)(**(longlong **)(local_b8 + 0x6f8) + 0x260))(*(longlong **)(local_b8 + 0x6f8))
  ;
  uVar2 = (**(code **)(**(longlong **)(local_b8 + 0x700) + 0x260))(*(longlong **)(local_b8 + 0x700))
  ;
  local_e8 = (**(code **)(**(longlong **)(local_b8 + 0x720) + 0x260))
                       (*(longlong **)(local_b8 + 0x720));
  local_118 = local_ae;
  local_110 = local_ad;
  local_108 = local_ac;
  local_100 = local_ab;
  local_e0 = *(undefined8 *)(local_b8 + 0x750);
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_f8 = uVar1;
  local_f0 = uVar2;
  FUN_019a63f0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),local_aa,local_a9,uVar4);
  iVar5 = (**(code **)(**(longlong **)(local_b8 + 0x750) + 0x28))(*(longlong **)(local_b8 + 0x750));
  iVar5 = iVar5 + 1;
  if (iVar5 < 2) {
    iVar5 = 2;
  }
  FUN_00848a70(*(undefined8 *)(local_b8 + 0x728),iVar5);
  iVar5 = 2;
  cVar3 = (**(code **)(**(longlong **)(local_b8 + 0x6d0) + 0x260))(*(longlong **)(local_b8 + 0x6d0))
  ;
  if (cVar3 != '\0') {
    iVar5 = 3;
  }
  cVar3 = (**(code **)(**(longlong **)(local_b8 + 0x6d8) + 0x260))(*(longlong **)(local_b8 + 0x6d8))
  ;
  if (cVar3 != '\0') {
    iVar5 = iVar5 + 1;
  }
  cVar3 = (**(code **)(**(longlong **)(local_b8 + 0x6e0) + 0x260))(*(longlong **)(local_b8 + 0x6e0))
  ;
  if (cVar3 != '\0') {
    iVar5 = iVar5 + 1;
  }
  cVar3 = (**(code **)(**(longlong **)(local_b8 + 0x6e8) + 0x260))(*(longlong **)(local_b8 + 0x6e8))
  ;
  if (cVar3 != '\0') {
    iVar5 = iVar5 + 1;
  }
  cVar3 = (**(code **)(**(longlong **)(local_b8 + 0x6f0) + 0x260))(*(longlong **)(local_b8 + 0x6f0))
  ;
  if (cVar3 != '\0') {
    iVar5 = iVar5 + 1;
  }
  cVar3 = (**(code **)(**(longlong **)(local_b8 + 0x6f8) + 0x260))(*(longlong **)(local_b8 + 0x6f8))
  ;
  if (cVar3 != '\0') {
    iVar5 = iVar5 + 1;
  }
  cVar3 = (**(code **)(**(longlong **)(local_b8 + 0x700) + 0x260))(*(longlong **)(local_b8 + 0x700))
  ;
  if (cVar3 != '\0') {
    iVar5 = iVar5 + 1;
  }
  FUN_008483e0(*(undefined8 *)(local_b8 + 0x728),iVar5);
  FUN_0084e3e0(*(undefined8 *)(local_b8 + 0x728),0,0,&DAT_01983f7c);
  uVar6 = FUN_00b89270();
  FUN_00b8e520(uVar6,local_40,0x830);
  FUN_0084e3e0(*(undefined8 *)(local_b8 + 0x728),1,0,local_40[0]);
  iVar5 = 2;
  cVar3 = (**(code **)(**(longlong **)(local_b8 + 0x6d0) + 0x260))(*(longlong **)(local_b8 + 0x6d0))
  ;
  if (cVar3 != '\0') {
    uVar6 = FUN_00b89270();
    FUN_00b8e520(uVar6,&local_48,0x831);
    FUN_0084e3e0(*(undefined8 *)(local_b8 + 0x728),2,0,local_48);
    iVar5 = 3;
  }
  cVar3 = (**(code **)(**(longlong **)(local_b8 + 0x6d8) + 0x260))(*(longlong **)(local_b8 + 0x6d8))
  ;
  if (cVar3 != '\0') {
    uVar6 = FUN_00b89270();
    FUN_00b8e520(uVar6,&local_50,0x832);
    FUN_0084e3e0(*(undefined8 *)(local_b8 + 0x728),iVar5,0,local_50);
    iVar5 = iVar5 + 1;
  }
  cVar3 = (**(code **)(**(longlong **)(local_b8 + 0x6e0) + 0x260))(*(longlong **)(local_b8 + 0x6e0))
  ;
  if (cVar3 != '\0') {
    uVar6 = FUN_00b89270();
    FUN_0041ddd0(&local_60,&LAB_01983558);
    FUN_00b8e650(uVar6,&local_58,L"d.LOM_LOM_Footprint",local_60);
    FUN_0084e3e0(*(undefined8 *)(local_b8 + 0x728),iVar5,0,local_58);
    iVar5 = iVar5 + 1;
  }
  cVar3 = (**(code **)(**(longlong **)(local_b8 + 0x6e8) + 0x260))(*(longlong **)(local_b8 + 0x6e8))
  ;
  if (cVar3 != '\0') {
    FUN_01d43710(&local_68,1);
    FUN_0084e3e0(*(undefined8 *)(local_b8 + 0x728),iVar5,0,local_68);
    iVar5 = iVar5 + 1;
  }
  cVar3 = (**(code **)(**(longlong **)(local_b8 + 0x6f0) + 0x260))(*(longlong **)(local_b8 + 0x6f0))
  ;
  if (cVar3 != '\0') {
    FUN_01d43710(&local_70,2);
    FUN_0084e3e0(*(undefined8 *)(local_b8 + 0x728),iVar5,0,local_70);
    iVar5 = iVar5 + 1;
  }
  cVar3 = (**(code **)(**(longlong **)(local_b8 + 0x6f8) + 0x260))(*(longlong **)(local_b8 + 0x6f8))
  ;
  if (cVar3 != '\0') {
    FUN_01d43710(&local_78,3);
    FUN_0084e3e0(*(undefined8 *)(local_b8 + 0x728),iVar5,0,local_78);
    iVar5 = iVar5 + 1;
  }
  cVar3 = (**(code **)(**(longlong **)(local_b8 + 0x700) + 0x260))(*(longlong **)(local_b8 + 0x700))
  ;
  if (cVar3 != '\0') {
    FUN_01d43710(&local_80,4);
    FUN_0084e3e0(*(undefined8 *)(local_b8 + 0x728),iVar5,0,local_80);
  }
  iVar5 = *(int *)(*(longlong *)(local_b8 + 0x728) + 0x4a4);
  iVar8 = 0;
  if (-1 < iVar5 + -1) {
    do {
      FUN_0084e3e0(*(undefined8 *)(local_b8 + 0x728),iVar8,1,0);
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = (**(code **)(**(longlong **)(local_b8 + 0x750) + 0x28))();
  iVar8 = 0;
  if (-1 < iVar5 + -1) {
    do {
      (**(code **)(**(longlong **)(local_b8 + 0x750) + 0x18))
                (*(longlong **)(local_b8 + 0x750),&local_30,iVar8);
      iVar9 = iVar8 + 1;
      FUN_0043f750(&local_88,iVar9);
      FUN_0084e3e0(*(undefined8 *)(local_b8 + 0x728),0,iVar9,local_88);
      FUN_01983580(auStack_138,&local_90,&local_30);
      FUN_0084e3e0(*(undefined8 *)(local_b8 + 0x728),1,iVar9,local_90);
      iVar10 = 2;
      iVar9 = 2;
      do {
        FUN_0043f750(&local_a0,iVar9 + -1);
        FUN_00416ba0(&local_98,L"CheckBox",local_a0);
        plVar7 = (longlong *)FUN_004d3a80(local_b8,local_98);
        cVar3 = (**(code **)(*plVar7 + 0x260))(plVar7);
        if (cVar3 != '\0') {
          FUN_01983580(auStack_138,&local_a8,&local_30);
          FUN_0084e3e0(*(undefined8 *)(local_b8 + 0x728),iVar10,iVar8 + 1,local_a8);
          iVar10 = iVar10 + 1;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 != 8);
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar6 = (**(code **)(**(longlong **)(local_b8 + 0x750) + 0x28))(*(longlong **)(local_b8 + 0x750));
  (**(code **)(**(longlong **)(local_b8 + 0x710) + 0x128))
            (*(longlong **)(local_b8 + 0x710),
             CONCAT71((int7)((ulonglong)uVar6 >> 8),0 < (int)uVar6) & 0xffffffff);
  uVar4 = (**(code **)(**(longlong **)(local_b8 + 0x710) + 0xf0))(*(longlong **)(local_b8 + 0x710));
  (**(code **)(**(longlong **)(local_b8 + 0x730) + 0x128))(*(longlong **)(local_b8 + 0x730),uVar4);
  FUN_00414560(&local_a8,0xe);
  FUN_00414480(&local_30);
  return;
}

