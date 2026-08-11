/* Ghidra address: 00f4b5b0 */
/* Ghidra symbol: FUN_00f4b5b0 */


void FUN_00f4b5b0(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong **pplVar7;
  undefined8 local_res20;
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
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80 [11];
  
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_128 = 0;
  local_140 = 0;
  local_130 = 0;
  local_138 = 0;
  local_120 = 0;
  local_118 = 0;
  local_108 = 0;
  local_110 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_80[0] = (longlong *)0x0;
  local_88 = (longlong *)0x0;
  local_90 = (longlong *)0x0;
  local_98 = (longlong *)0x0;
  local_a0 = (longlong *)0x0;
  local_a8 = 0;
  pplVar7 = local_80;
  for (lVar4 = 10; pplVar7 = pplVar7 + 1, lVar4 != 0; lVar4 = lVar4 + -1) {
    *pplVar7 = (longlong *)*param_2;
    param_2 = param_2 + 1;
  }
  local_res20 = param_4;
  FUN_00414610(param_4);
  uVar1 = *(undefined1 *)(param_1 + 0x12f1);
  FUN_00bac3d0(local_80);
  (**(code **)(*local_80[0] + 0x148))(local_80[0],&local_b0,L"optimumvalues");
  (**(code **)(*local_80[0] + 0x108))(local_80[0],local_b0);
  (**(code **)(*local_80[0] + 0x100))(local_80[0],&local_88);
  FUN_00441920(&local_b8,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x360));
  (**(code **)(*local_88 + 0x108))(local_88,L"file",local_b8);
  FUN_0041ddd0(&local_c8,&LAB_00f4ada8);
  FUN_00de8a20(&local_c0,&DAT_00f4bf98,L"opend1_sTitle",*(undefined8 *)(param_1 + 0x1310),local_c8);
  FUN_004168b0(&local_d0,local_c0);
  (**(code **)(*local_88 + 0x108))(local_88,L"title",local_d0);
  (**(code **)(*local_80[0] + 0x148))(local_80[0],&local_90,L"table");
  (**(code **)(*local_88 + 0x98))(local_88,&local_d8,local_90);
  (**(code **)(*local_80[0] + 0x148))(local_80[0],&local_98,&DAT_00f4bfe8);
  (**(code **)(*local_90 + 0x98))(local_90,&local_e0,local_98);
  (**(code **)(*local_80[0] + 0x148))(local_80[0],&local_a0,&DAT_00f4bffc);
  (**(code **)(*local_98 + 0x98))(local_98,&local_e8,local_a0);
  FUN_00de8b50(&local_f0,L"TShapeEdit",L"mnDevice",*(undefined8 *)(param_1 + 0x1310),L"Caption");
  FUN_004168b0(&local_f8,local_f0);
  (**(code **)(*local_a0 + 0x108))(local_a0,L"value",local_f8);
  (**(code **)(*local_80[0] + 0x148))(local_80[0],&local_a0,&DAT_00f4bffc);
  (**(code **)(*local_98 + 0x98))(local_98,&local_100,local_a0);
  FUN_00de8b50(&local_108,L"TOptEndDlg1",L"Label1",*(undefined8 *)(param_1 + 0x1310),L"Caption");
  FUN_004168b0(&local_110,local_108);
  (**(code **)(*local_a0 + 0x108))(local_a0,L"value",local_110);
  iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x468) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      (**(code **)(*local_80[0] + 0x148))(local_80[0],&local_98,&DAT_00f4bfe8);
      (**(code **)(*local_90 + 0x98))(local_90,&local_118,local_98);
      (**(code **)(*local_80[0] + 0x148))(local_80[0],&local_a0,&DAT_00f4bffc);
      (**(code **)(*local_98 + 0x98))(local_98,&local_120,local_a0);
      uVar3 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x468),iVar5);
      FUN_00f4af00(&local_130,uVar3,*(undefined8 *)(param_1 + 0x1310));
      FUN_00415dd0(&local_138,*(undefined8 *)(param_1 + 0x1310),0);
      FUN_00b0d0c0(&local_128,local_130,local_138);
      FUN_004168b0(&local_140,local_128);
      (**(code **)(*local_a0 + 0x108))(local_a0,L"value",local_140);
      (**(code **)(*local_80[0] + 0x148))(local_80[0],&local_a0,&DAT_00f4bffc);
      (**(code **)(*local_98 + 0x98))(local_98,&local_148,local_a0);
      FUN_00b8fec0(&local_150,local_80[iVar5 + 1],uVar1,0,0x3cd203af9ee75616);
      (**(code **)(*local_a0 + 0x108))(local_a0,L"value",local_150);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (param_3 != 0) {
    FUN_00441640(&local_158,*(undefined8 *)(param_3 + 8));
    FUN_00416cd0(&local_a8,3,local_158,local_res20,L"_optimumvalues.xml");
    FUN_00441640(&local_160,local_a8);
    cVar2 = FUN_00440b00(local_160,1);
    if (cVar2 != '\0') {
      (**(code **)(*local_80[0] + 0x180))(local_80[0],local_a8,0);
    }
  }
  FUN_00414560(&local_160,3);
  FUN_0041b800(&local_148);
  FUN_00414480(&local_140);
  FUN_004144d0(&local_138);
  FUN_00414480(&local_130);
  FUN_00414520(&local_128);
  FUN_00417840(&local_120,&DAT_00b9f8e0,2);
  FUN_00414480(&local_110);
  FUN_00414520(&local_108);
  FUN_0041b800(&local_100);
  FUN_00414480(&local_f8);
  FUN_00414520(&local_f0);
  FUN_00417840(&local_e8,&DAT_00b9f8e0,3);
  FUN_00414560(&local_d0,2);
  FUN_00414520(&local_c0);
  FUN_00414480(&local_b8);
  FUN_0041b800(&local_b0);
  FUN_00414480(&local_a8);
  FUN_00417840(&local_a0,&LAB_00b9fca0,4);
  FUN_0041b800(local_80);
  FUN_00414480(&local_res20);
  return;
}

