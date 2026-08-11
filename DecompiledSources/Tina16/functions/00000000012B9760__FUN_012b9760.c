/* Ghidra address: 012b9760 */
/* Ghidra symbol: FUN_012b9760 */


void FUN_012b9760(char param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 local_res20;
  undefined1 auStack_218 [32];
  wchar_t *local_1f8;
  undefined *local_1f0;
  undefined8 local_1e8;
  undefined *local_1e0;
  undefined8 local_1d8;
  char local_1c1;
  longlong local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
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
  undefined8 local_80 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30 [2];
  
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_168 = 0;
  local_170 = 0;
  local_160 = 0;
  local_150 = 0;
  local_158 = 0;
  local_148 = 0;
  local_138 = 0;
  local_140 = 0;
  local_130 = 0;
  local_120 = 0;
  local_128 = 0;
  local_118 = 0;
  local_108 = 0;
  local_110 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80[0] = 0;
  local_30[0] = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_50 = (longlong *)0x0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_res20 = param_4;
  local_1c1 = param_1;
  local_1c0 = param_2;
  local_1b8 = param_3;
  FUN_00414610(param_4);
  uVar1 = *(undefined1 *)(local_1c0 + 0x12f1);
  FUN_00bac3d0(local_30);
  if (local_1c1 == '\0') {
    (**(code **)(*local_30[0] + 0x148))(local_30[0],&local_88,L"actable");
    (**(code **)(*local_30[0] + 0x108))(local_30[0],local_88);
  }
  else {
    (**(code **)(*local_30[0] + 0x148))(local_30[0],local_80,L"dctable");
    (**(code **)(*local_30[0] + 0x108))(local_30[0],local_80[0]);
  }
  (**(code **)(*local_30[0] + 0x100))(local_30[0],&local_38);
  FUN_00441920(&local_90,*(undefined8 *)(*(longlong *)(local_1c0 + 0xa8) + 0x360));
  (**(code **)(*local_38 + 0x108))(local_38,L"file",local_90);
  FUN_0041ddd0(&local_a0,&LAB_012b5dc8);
  local_1f8 = (wchar_t *)local_a0;
  FUN_00de8a20(&local_98,L"TAskRes",L"sTitle",*(undefined8 *)(local_1c0 + 0x1310));
  FUN_004168b0(&local_a8,local_98);
  (**(code **)(*local_38 + 0x108))(local_38,L"title",local_a8);
  (**(code **)(*local_30[0] + 0x148))(local_30[0],&local_40,L"table");
  (**(code **)(*local_38 + 0x98))(local_38,&local_b0,local_40);
  local_1f8 = L"Caption";
  FUN_00de8b50(&local_b8,L"TTinaAskVoltagesDlg",L"VoltagesCB",*(undefined8 *)(local_1c0 + 0x1310));
  local_1f8 = L"Caption";
  FUN_00de8b50(&local_c0,L"TTinaAskVoltagesDlg",L"OtherVCB",*(undefined8 *)(local_1c0 + 0x1310));
  local_1f8 = L"Caption";
  FUN_00de8b50(&local_c8,L"TTinaAskVoltagesDlg",L"CurrentsCB",*(undefined8 *)(local_1c0 + 0x1310));
  local_1f8 = L"Caption";
  FUN_00de8b50(&local_d0,L"TTinaAskVoltagesDlg",L"OutputsCB",*(undefined8 *)(local_1c0 + 0x1310));
  local_1f8 = (wchar_t *)local_c0;
  local_1f0 = &DAT_012ba940;
  local_1e8 = local_c8;
  local_1e0 = &DAT_012ba940;
  local_1d8 = local_d0;
  FUN_00416310(&local_70,7,local_b8,&DAT_012ba940);
  FUN_004168b0(&local_d8,local_70);
  (**(code **)(*local_40 + 0x108))(local_40,L"types",local_d8);
  (**(code **)(*local_30[0] + 0x148))(local_30[0],&local_48,&DAT_012ba9cc);
  (**(code **)(*local_40 + 0x98))(local_40,&local_e0,local_48);
  (**(code **)(*local_48 + 0x108))(local_48,L"type",L"header");
  (**(code **)(*local_30[0] + 0x148))(local_30[0],&local_50,&DAT_012baa14);
  (**(code **)(*local_48 + 0x98))(local_48,&local_e8,local_50);
  local_1f8 = L"Caption";
  FUN_00de8b50(&local_f0,L"TShapeEdit",L"mnDevice",*(undefined8 *)(local_1c0 + 0x1310));
  FUN_004168b0(&local_f8,local_f0);
  (**(code **)(*local_50 + 0x108))(local_50,L"value",local_f8);
  (**(code **)(*local_30[0] + 0x148))(local_30[0],&local_50,&DAT_012baa14);
  (**(code **)(*local_48 + 0x98))(local_48,&local_100,local_50);
  local_1f8 = L"Caption";
  FUN_00de8b50(&local_108,L"TTinaAskVoltagesDlg",0,*(undefined8 *)(local_1c0 + 0x1310));
  FUN_004168b0(&local_110,local_108);
  (**(code **)(*local_50 + 0x108))(local_50,L"value",local_110);
  local_1a8 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_1b0 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b67b0(local_1b0,1);
  local_1f8 = (wchar_t *)CONCAT71(local_1f8._1_7_,uVar1);
  local_1f0 = (undefined *)CONCAT71(local_1f0._1_7_,1);
  FUN_012b6b60(local_1c1,local_1c0,local_1b0,local_1a8);
  iVar3 = (**(code **)(*local_1b0 + 0x28))();
  iVar6 = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(*local_1b0 + 0x18))(local_1b0,&local_58,iVar6);
      (**(code **)(*local_30[0] + 0x148))(local_30[0],&local_48,&DAT_012ba9cc);
      (**(code **)(*local_40 + 0x98))(local_40,&local_118,local_48);
      iVar4 = FUN_004170c0(&DAT_012baa84,local_58,1);
      if (iVar4 == 1) {
        local_1f8 = L"Caption";
        FUN_00de8b50(&local_120,L"TTinaAskVoltagesDlg",L"VoltagesCB",
                     *(undefined8 *)(local_1c0 + 0x1310));
        FUN_004168b0(&local_128,local_120);
        (**(code **)(*local_48 + 0x108))(local_48,L"type",local_128);
      }
      else {
        iVar4 = FUN_004170c0(&PTR_u_laFloralwhite_012baa98,local_58,1);
        if (iVar4 == 1) {
          FUN_012b9670(auStack_218,&local_130,&local_58);
          FUN_00414b50(&local_68,local_130);
          local_1f8 = L"Caption";
          FUN_00de8b50(&local_138,L"TTinaAskVoltagesDlg",L"OtherVCB",
                       *(undefined8 *)(local_1c0 + 0x1310));
          FUN_004168b0(&local_140,local_138);
          (**(code **)(*local_48 + 0x108))(local_48,L"type",local_140);
          (**(code **)(*local_48 + 0x108))(local_48,L"compid",local_68);
        }
        else {
          iVar4 = FUN_004170c0(&PTR_DAT_012baac8,local_58,1);
          if (iVar4 == 1) {
            FUN_012b9670(auStack_218,&local_148,&local_58);
            FUN_00414b50(&local_68,local_148);
            local_1f8 = L"Caption";
            FUN_00de8b50(&local_150,L"TTinaAskVoltagesDlg",L"CurrentsCB",
                         *(undefined8 *)(local_1c0 + 0x1310));
            FUN_004168b0(&local_158,local_150);
            (**(code **)(*local_48 + 0x108))(local_48,L"type",local_158);
            (**(code **)(*local_48 + 0x108))(local_48,L"compid",local_68);
          }
          else {
            FUN_012b9670(auStack_218,&local_160,&local_58);
            FUN_00414b50(&local_68,local_160);
            local_1f8 = L"Caption";
            FUN_00de8b50(&local_168,L"TTinaAskVoltagesDlg",L"OutputsCB",
                         *(undefined8 *)(local_1c0 + 0x1310));
            FUN_004168b0(&local_170,local_168);
            (**(code **)(*local_48 + 0x108))(local_48,L"type",local_170);
            (**(code **)(*local_48 + 0x108))(local_48,L"compid",local_68);
          }
        }
      }
      (**(code **)(*local_30[0] + 0x148))(local_30[0],&local_50,&DAT_012baa14);
      (**(code **)(*local_48 + 0x98))(local_48,&local_178,local_50);
      iVar4 = FUN_004170c0(&DAT_012baadc,local_58,1);
      FUN_00416dc0(&local_180,local_58,1,iVar4 + -1);
      (**(code **)(*local_50 + 0x108))(local_50,L"value",local_180);
      (**(code **)(*local_30[0] + 0x148))(local_30[0],&local_50,&DAT_012baa14);
      (**(code **)(*local_48 + 0x98))(local_48,&local_188,local_50);
      iVar4 = FUN_004170c0(&DAT_012baadc,local_58,1);
      uVar5 = 0;
      if (local_58 != 0) {
        uVar5 = *(undefined4 *)(local_58 + -4);
      }
      FUN_00416dc0(&local_190,local_58,iVar4 + 1,uVar5);
      (**(code **)(*local_50 + 0x108))(local_50,L"value",local_190);
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(local_1b0);
  FUN_00410f20(local_1a8);
  FUN_00441640(&local_198,*(undefined8 *)(local_1b8 + 8));
  FUN_00416ba0(&local_60,local_198,local_res20);
  if (local_1c1 == '\0') {
    FUN_00416ad0(&local_60,L"_actable.xml");
  }
  else {
    FUN_00416ad0(&local_60,L"_dctable.xml");
  }
  FUN_00441640(&local_1a0,local_60);
  cVar2 = FUN_00440b00(local_1a0,1);
  if (cVar2 != '\0') {
    (**(code **)(*local_30[0] + 0x180))(local_30[0],local_60,0);
  }
  FUN_00414560(&local_1a0,3);
  FUN_0041b800(&local_188);
  FUN_00414480(&local_180);
  FUN_0041b800(&local_178);
  FUN_00414480(&local_170);
  FUN_00414520(&local_168);
  FUN_00414560(&local_160,2);
  FUN_00414520(&local_150);
  FUN_00414560(&local_148,2);
  FUN_00414520(&local_138);
  FUN_00414560(&local_130,2);
  FUN_00414520(&local_120);
  FUN_0041b800(&local_118);
  FUN_00414480(&local_110);
  FUN_00414520(&local_108);
  FUN_0041b800(&local_100);
  FUN_00414480(&local_f8);
  FUN_00414520(&local_f0);
  FUN_00417840(&local_e8,&DAT_00b9f8e0,2);
  FUN_00414480(&local_d8);
  FUN_004145c0(&local_d0,4);
  FUN_0041b800(&local_b0);
  FUN_00414560(&local_a8,2);
  FUN_00414520(&local_98);
  FUN_00414480(&local_90);
  FUN_00417840(&local_88,&LAB_00b9fca0,2);
  FUN_00414520(&local_70);
  FUN_00414560(&local_68,3);
  FUN_00417840(&local_50,&LAB_00b9fca0,4);
  FUN_0041b800(local_30);
  FUN_00414480(&local_res20);
  return;
}

