/* Ghidra address: 01c9c3b0 */
/* Ghidra symbol: FUN_01c9c3b0 */


void FUN_01c9c3b0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
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
  undefined8 local_38;
  undefined8 local_30;
  
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_30 = 0;
  plVar3 = (longlong *)FUN_0177ce70(&PTR_FUN_0177c458,1,*(undefined8 *)PTR_DAT_02004030);
  (**(code **)(*plVar3 + 0x50))(plVar3,L"OpenExamplesDlg");
  FUN_00414ad0(plVar3 + 0x20,&DAT_01c9c708);
  FUN_00416ba0(&local_30,*(undefined8 *)PTR_DAT_020049a0,L"\\Examples");
  FUN_0177d560(plVar3,local_30);
  FUN_00414ad0(plVar3 + 0x1c,L"Schematics (*.TSC;*.SCH)|*.TSC;*.SCH");
  FUN_00c78ad0(plVar3,L"Open Schematic");
  FUN_00416cd0(&local_58,3,L"User Examples|",*(undefined8 *)PTR_DAT_02005010,L"\\User Examples");
  local_50 = local_58;
  FUN_00416cd0(&local_60,3,L"Infineon Examples|",*(undefined8 *)PTR_DAT_020049a0,
               L"\\Examples\\Infineon");
  local_48 = local_60;
  FUN_00416cd0(&local_68,3,L"TI Examples|",*(undefined8 *)PTR_DAT_020049a0,
               L"\\Examples\\Texas Instruments");
  local_40 = local_68;
  FUN_00416cd0(&local_70,3,L"Tina Examples|",*(undefined8 *)PTR_DAT_020049a0,L"\\Examples");
  local_38 = local_70;
  (**(code **)(*plVar3 + 0x130))(plVar3,&local_50,3);
  *(undefined4 *)((longlong)plVar3 + 0x7c) = 0x3ec;
  *(uint *)(plVar3 + 0x1b) = *(uint *)(plVar3 + 0x1b) | 0x250;
  FUN_0177d6b0(plVar3,1);
  cVar1 = (**(code **)(*plVar3 + 0xa8))(plVar3);
  if (cVar1 != '\0') {
    plVar4 = (longlong *)FUN_007241d0(plVar3);
    iVar2 = (**(code **)(*plVar4 + 0x28))();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        plVar4 = (longlong *)FUN_007241d0(plVar3);
        (**(code **)(*plVar4 + 0x18))(plVar4,&local_78,iVar5);
        FUN_01c681b0(param_1,local_78,0,0,0,0,1);
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    plVar4 = (longlong *)FUN_007241d0(plVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_88,0);
    FUN_00441640(&local_80,local_88);
    FUN_0177d560(*(undefined8 *)(param_1 + 0x18f0),local_80);
  }
  FUN_00410f20(plVar3);
  FUN_00414560(&local_88,7);
  FUN_00414480(&local_30);
  return;
}

