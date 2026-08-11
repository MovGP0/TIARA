/* Ghidra address: 01c45000 */
/* Ghidra symbol: FUN_01c45000 */


void FUN_01c45000(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 *local_30;
  
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_30 = (undefined8 *)0x0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0));
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x298))(*(longlong **)(param_1 + 0x6c0));
  if (iVar4 == iVar5 + -1) {
    do {
      do {
        cVar2 = FUN_00b96980(0,0,&local_30,8,0);
        if (cVar2 == '\0') goto LAB_01c4510e;
        FUN_00416ba0(&local_50,local_30,L"\\tina.exe");
        cVar3 = FUN_00440a20();
      } while (cVar3 == '\0');
      iVar4 = FUN_01c46f50();
    } while (iVar4 < 8);
LAB_01c4510e:
    if (cVar2 != '\0') {
      FUN_00416ba0(&local_58,local_30,L"\\setup.ini");
      plVar6 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_58);
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_38,L"Setup Settings",L"Program Folder",0);
      FUN_00410f20(plVar6);
      if (*(undefined8 **)PTR_DAT_020049a0 == local_30) {
        bVar8 = true;
      }
      else if ((*(longlong *)PTR_DAT_020049a0 == 0) || (local_30 == (undefined8 *)0x0)) {
        bVar8 = false;
      }
      else {
        iVar4 = FUN_0043e420(*(undefined8 *)PTR_DAT_020049a0,local_30);
        bVar8 = iVar4 == 0;
      }
      if (!bVar8) {
        plVar6 = *(longlong **)(param_1 + 0x6c0);
        iVar4 = (**(code **)(*plVar6 + 0x298))(plVar6);
        (**(code **)(*(longlong *)plVar6[0x94] + 0x40))
                  ((longlong *)plVar6[0x94],iVar4 + -1,local_30);
        plVar6 = *(longlong **)(param_1 + 0x6e0);
        iVar4 = (**(code **)(*plVar6 + 0x28))(plVar6);
        FUN_00416cd0(&local_60,3,local_30,&DAT_01c45458,local_30);
        (**(code **)(*plVar6 + 0x40))(plVar6,iVar4 + -1,local_60);
      }
      uVar7 = FUN_005ea470(&DAT_005e7878,1,0x20019);
      FUN_005ea670(uVar7,0xffffffff80000001);
      if (!bVar8) {
        FUN_00416ba0(&local_68,L"\\SOFTWARE\\DesignSoft\\",local_38);
        cVar2 = FUN_005eaa60(uVar7,local_68);
        if (cVar2 != '\0') {
          FUN_005eb6d0(uVar7,&local_40,L"SettingsDir");
          FUN_005eb6d0(uVar7,&local_48,L"CatalogDir");
          plVar6 = *(longlong **)(param_1 + 0x6e0);
          iVar4 = (**(code **)(*plVar6 + 0x28))(plVar6);
          plVar1 = *(longlong **)(param_1 + 0x6e0);
          iVar5 = (**(code **)(*plVar1 + 0x28))(plVar1);
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_78,iVar5 + -1);
          FUN_00416cd0(&local_70,5,local_78,&DAT_01c454e8,local_40,&DAT_01c454e8,local_48);
          (**(code **)(*plVar6 + 0x40))(plVar6,iVar4 + -1,local_70);
          FUN_005ea630(uVar7);
        }
      }
    }
  }
  FUN_00414560(&local_78,10);
  return;
}

