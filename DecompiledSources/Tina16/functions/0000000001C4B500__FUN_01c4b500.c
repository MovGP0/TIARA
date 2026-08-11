/* Ghidra address: 01c4b500 */
/* Ghidra symbol: FUN_01c4b500 */


void FUN_01c4b500(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong *local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_90 [15];
  
  local_1e0 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1a8 = 0;
  local_1c0 = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_158 = 0;
  local_180 = 0;
  local_188 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = (longlong *)0x0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = (longlong *)0x0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_90[0] = 0;
  local_98 = 0;
  local_a0 = (longlong *)0x0;
  local_a8 = (longlong *)0x0;
  local_b0 = 0;
  local_b8 = (longlong *)0x0;
  local_c0 = (longlong *)0x0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  FUN_00409da0(&local_f0,0);
  FUN_00441640(&local_d0,local_f0);
  FUN_00416ba0(&local_f8,local_d0,L"\\converters.ext.xml");
  cVar2 = FUN_00440a20(local_f8,1);
  if (cVar2 == '\0') {
    FUN_00416ba0(local_90,local_d0,L"\\converters.xml");
  }
  else {
    FUN_00416ba0(local_90,local_d0,L"\\converters.ext.xml");
  }
  FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0xfff5);
  FUN_0064fca0(*(undefined8 *)(param_1 + 0x6b0),0xb,0,0);
  FUN_00848a70(*(undefined8 *)(param_1 + 0x6b0),1);
  FUN_00848460(*(undefined8 *)(param_1 + 0x6b0),0,0);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),0,0,L"File");
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),1,0,L"Manufacturer");
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),2,0,L"Name");
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),3,0,L"Topology");
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),4,0,&DAT_01c4c39c);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),5,0,L"Vout");
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),6,0,L"Iout");
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),7,0,L"Frequency");
  FUN_00bac3d0(&local_a0);
  cVar2 = (**(code **)(*local_a0 + 0x170))(local_a0,local_90[0]);
  if ((cVar2 != '\0') && ((**(code **)(*local_a0 + 0x100))(local_a0,&local_100), local_100 != 0)) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x780) + 0x4f0);
    iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (iVar3 == 1) {
      (**(code **)(*local_a0 + 0x100))(local_a0,&local_108);
      (**(code **)(*local_108 + 0xe8))(local_108,&local_c0,L"manufacturer");
      (**(code **)(*local_c0 + 0x68))(local_c0);
      (**(code **)(*local_c0 + 0x70))(local_c0,&local_110);
      FUN_0041b890(&local_b0,local_110,&DAT_01c4c41a);
      while (local_b0 != 0) {
        FUN_00c7c5b0(&local_118,local_b0,L"name",0);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x780) + 0x4f0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_118);
        (**(code **)(*local_c0 + 0x70))(local_c0,&local_120);
        FUN_0041b890(&local_b0,local_120,&DAT_01c4c41a);
      }
    }
    FUN_01c4a760(param_1,&local_98);
    (**(code **)(*local_a0 + 0x100))(local_a0,&local_128);
    (**(code **)(*local_128 + 0xe8))(local_128,&local_b8,local_98);
    (**(code **)(*local_b8 + 0x68))(local_b8);
    (**(code **)(*local_b8 + 0x70))(local_b8,&local_130);
    FUN_0041b890(&local_a8,local_130,&DAT_01c4c41a);
    while (local_a8 != (longlong *)0x0) {
      cVar2 = FUN_01c4a8f0(param_1,local_a8);
      if (cVar2 != '\0') {
        (**(code **)(*local_a8 + 0x60))(local_a8,&local_138);
        FUN_00c7c5b0(&local_c8,local_138,L"name",0);
        FUN_00c7c5b0(&local_d8,local_a8,L"name",0);
        FUN_00c7c5b0(&local_e0,local_a8,L"topology",0);
        uVar5 = FUN_01c4a5e0(local_a8,L"vinmin");
        uVar6 = FUN_01c4a5e0(local_a8,L"vinmax");
        uVar7 = FUN_01c4a5e0(local_a8,L"voutmin");
        uVar8 = FUN_01c4a5e0(local_a8,L"voutmax");
        uVar9 = FUN_01c4a5e0(local_a8,L"iout");
        uVar10 = FUN_01c4a5e0(local_a8,L"freqmin");
        uVar11 = FUN_01c4a5e0(local_a8,L"freqmax");
        FUN_00c7c340(&local_140,local_a8);
        FUN_00415dd0(&local_e8,local_140,0);
        FUN_00848a70(*(longlong *)(param_1 + 0x6b0),
                     *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x4e0) + 1);
        uVar4 = FUN_01c4b330(param_1,local_c8,local_d8);
        FUN_01c4b490(param_1,uVar4);
        FUN_00416880(&local_148,local_e8);
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),0,uVar4,local_148);
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),1,uVar4,local_c8);
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),2,uVar4,local_d8);
        iVar3 = FUN_0043fc00(local_e0);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x4a0);
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_150,iVar3 + -1);
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),3,uVar4,local_150);
        FUN_00b8fd60(&local_180,uVar5,*PTR_DAT_02005310,0,0);
        local_178 = local_180;
        local_170 = 0x11;
        FUN_00b8fd60(&local_188,uVar6,2,0,0);
        local_168 = local_188;
        local_160 = 0x11;
        FUN_00442f70(&local_158,L"%sV - %sV",&local_178,1);
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),4,uVar4,local_158);
        FUN_00b8fd60(&local_198,uVar7,*PTR_DAT_02005310,0,0);
        local_178 = local_198;
        local_170 = 0x11;
        FUN_00b8fd60(&local_1a0,uVar8,2,0,0);
        local_168 = local_1a0;
        local_160 = 0x11;
        FUN_00442f70(&local_190,L"%sV - %sV",&local_178,1);
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),5,uVar4,local_190);
        FUN_00b8fd60(&local_1c0,uVar9,*PTR_DAT_02005310,0,0);
        local_1b8 = local_1c0;
        local_1b0 = 0x11;
        FUN_00442f70(&local_1a8,&DAT_01c4c550,&local_1b8,0);
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),6,uVar4,local_1a8);
        FUN_00b8fd60(&local_1d0,uVar10,*PTR_DAT_02005310,0,0);
        local_178 = local_1d0;
        local_170 = 0x11;
        FUN_00b8fd60(&local_1d8,uVar11,2,0,0);
        local_168 = local_1d8;
        local_160 = 0x11;
        FUN_00442f70(&local_1c8,L"%sHz - %sHz",&local_178,1);
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),7,uVar4);
      }
      (**(code **)(*local_b8 + 0x70))(local_b8,&local_1e0);
      FUN_0041b890(&local_a8,local_1e0,&DAT_01c4c41a);
    }
  }
  FUN_0064fca0(*(undefined8 *)(param_1 + 0x6b0),0xb,1,0);
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x180))(*(longlong **)(param_1 + 0x6b0));
  FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0);
  if (1 < *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x4e0)) {
    FUN_00848790(*(longlong *)(param_1 + 0x6b0),1);
  }
  FUN_0041b800(&local_1e0);
  FUN_00414560(&local_1d8,4);
  FUN_00414560(&local_1a8,6);
  FUN_00414560(&local_158,4);
  FUN_00417840(&local_138,&DAT_00b9f8e0,2);
  FUN_0041b800(&local_128);
  FUN_0041b800(&local_120);
  FUN_00414480(&local_118);
  FUN_0041b800(&local_110);
  FUN_00417840(&local_108,&LAB_00b9fca0,2);
  FUN_00414560(&local_f8,2);
  FUN_004144d0(&local_e8);
  FUN_00414560(&local_e0,4);
  FUN_00417840(&local_c0,&DAT_00b9f960,2);
  FUN_00417840(&local_b0,&LAB_00b9fca0,2);
  FUN_0041b800(&local_a0);
  FUN_00414560(&local_98,2);
  return;
}

