/* Ghidra address: 0125b8a0 */
/* Ghidra symbol: FUN_0125b8a0 */


void FUN_0125b8a0(longlong param_1,longlong param_2,undefined4 param_3,longlong *param_4,
                 undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong *local_d8;
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
  undefined8 local_40;
  undefined4 local_34;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_d8 = (longlong *)0x0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_40 = 0;
  local_48 = 0;
  local_20 = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_30 = 0;
  FUN_00414610(param_7);
  cVar1 = FUN_0199c7c0(param_2);
  if (cVar1 == '\0') goto code_r0x0125be57;
  cVar1 = FUN_01d07fe0(param_2,*(undefined8 *)(param_1 + 0x478),&local_34);
  if (cVar1 == '\0') {
LAB_0125ba18:
    cVar1 = '\0';
  }
  else {
    plVar2 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x478),local_34);
    if (*plVar2 != param_2) goto LAB_0125ba18;
    cVar1 = '\x01';
  }
  if (cVar1 != '\0') {
    lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x478),local_34);
    if (*(char *)(lVar3 + 8) != '\0') {
      (**(code **)(*param_4 + 0x100))(param_4,&local_d8);
      (**(code **)(*local_d8 + 0x108))(local_d8,L"runonly",&DAT_0125c124);
      goto code_r0x0125be57;
    }
  }
  FUN_00de88c0(&local_40,0x5a8,param_7);
  FUN_00de88c0(&local_48,0x5a9,param_7);
  FUN_00416310(&local_30,4,local_40,&DAT_0125c050,local_48,&DAT_0125c05c);
  FUN_00de8b50(&local_50,L"TAnalModeRangeDlg",L"GroupBox3",param_7,L"Caption");
  FUN_004168b0(&local_58,local_50);
  FUN_0043f750(&local_60,param_3);
  FUN_004168b0(&local_68,local_30);
  FUN_01250bc0(&local_20,param_4,param_5,param_6,local_58,local_60,local_68,cVar1);
  if (cVar1 == '\0') {
    puVar4 = (undefined1 *)FUN_004095c0(0x29);
    *puVar4 = 1;
    *(undefined8 *)(puVar4 + 1) = 0;
    *(undefined8 *)(puVar4 + 9) = 0x4014000000000000;
  }
  else {
    lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x478),local_34);
    puVar4 = (undefined1 *)FUN_004aeac0(*(undefined8 *)(lVar3 + 0x23),0);
  }
  (**(code **)(*param_4 + 0x148))(param_4,&local_28,L"detail");
  (**(code **)(*local_20 + 0x98))(local_20,&local_70,local_28);
  FUN_00de88c0(&local_78,0x5a9,param_7);
  FUN_004168b0(&local_80,local_78);
  (**(code **)(*local_28 + 0x108))(local_28,L"type",local_80);
  (**(code **)(*local_28 + 0x108))(local_28,&DAT_0125c110,&DAT_0125c124);
  uVar5 = 0;
  FUN_00de8fd0(&local_30,L"TDCGoalFunctionsDlg",L"rgDCGoalFuncs",L"Items",param_7,&DAT_0125c1a8,1,1)
  ;
  FUN_00de8b50(&local_90,L"TFrequencySpectrumDlg",L"rgMode",param_7,L"Caption");
  FUN_004168b0(&local_98,local_90);
  FUN_004168b0(&local_a0,local_30);
  uVar6 = CONCAT31((int3)((uint)uVar5 >> 8),*puVar4);
  FUN_01250bc0(&local_88,param_4,local_28,param_6,local_98,0,local_a0,uVar6);
  FUN_00de88c0(&local_b0,0x479,param_7);
  FUN_004168b0(&local_b8,local_b0);
  uVar6 = uVar6 & 0xffffff00;
  FUN_01250840(&local_a8,param_4,local_28,param_6,local_b8,0,*(undefined8 *)(puVar4 + 1),uVar6);
  FUN_00de8b50(&local_c8,L"TTlrRealEditorDlg",L"Label1",param_7,L"Caption");
  FUN_004168b0(&local_d0,local_c8);
  FUN_01250840(&local_c0,param_4,local_28,param_6,local_d0,0,*(undefined8 *)(puVar4 + 9),
               uVar6 & 0xffffff00);
code_r0x0125be57:
  FUN_0041b800(&local_d8);
  FUN_00414480(&local_d0);
  FUN_00414520(&local_c8);
  FUN_0041b800(&local_c0);
  FUN_00414480(&local_b8);
  FUN_00414520(&local_b0);
  FUN_0041b800(&local_a8);
  FUN_00414560(&local_a0,2);
  FUN_00414520(&local_90);
  FUN_0041b800(&local_88);
  FUN_00414480(&local_80);
  FUN_00414520(&local_78);
  FUN_0041b800(&local_70);
  FUN_00414560(&local_68,3);
  FUN_004145c0(&local_50,3);
  FUN_00414520(&local_30);
  FUN_00417840(&local_28,&LAB_00b9fca0,2);
  FUN_00414480(&param_7);
  return;
}

