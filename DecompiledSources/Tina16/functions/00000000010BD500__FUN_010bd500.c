/* Ghidra address: 010bd500 */
/* Ghidra symbol: FUN_010bd500 */


void FUN_010bd500(longlong param_1,longlong *param_2,char param_3,char param_4,char param_5)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
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
  longlong local_30;
  
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_8c = 1;
  local_88 = 1;
  local_84 = 1;
  iVar5 = 1;
  iVar6 = *(int *)(param_1 + 0x10);
  local_90 = 0;
  if (-1 < iVar6 + -1) {
    do {
      plVar3 = (longlong *)FUN_00b94e60(param_1,local_90);
      cVar1 = FUN_0198a580(plVar3);
      if (((cVar1 == '\x04') && (lVar4 = FUN_017ff620(plVar3), lVar4 == 0)) &&
         (*(char *)((longlong)plVar3 + 0x531) == '\0')) {
        sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        if ((((sVar2 == 9) || (sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3), sVar2 == 0x6b)) ||
            ((sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3), sVar2 == 200 ||
             ((sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3), sVar2 == 0xd2 ||
              (sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3), sVar2 == 0xdc)))))) &&
           (param_5 == '\0')) {
          FUN_00414b50(&local_38,&DAT_010bdbb8);
          (**(code **)(*plVar3 + 0x288))(plVar3,&local_30);
          if (local_30 == 0) {
            FUN_0043f750(&local_40,local_8c);
            FUN_00416cd0(&local_30,3,local_38,L"_no_label_",local_40);
          }
          if ((param_4 != '\0') && (local_30 != 0)) {
            FUN_017ff4f0(plVar3,&local_48);
            FUN_00416cd0(&local_30,3,local_30,&DAT_010bdbec,local_48);
          }
          (**(code **)(*param_2 + 0x80))(param_2,local_30,plVar3);
          local_8c = local_8c + 1;
        }
        sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        if ((sVar2 == 0xf) || (sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3), sVar2 == 0xd)) {
          FUN_00414b50(&local_38,&DAT_010bdbfc);
          (**(code **)(*plVar3 + 0x288))(plVar3,&local_30);
          if (local_30 == 0) {
            FUN_0043f750(&local_50,local_88);
            FUN_00416cd0(&local_30,3,local_38,L"_no_label_",local_50);
          }
          if ((param_4 != '\0') && (local_30 != 0)) {
            FUN_017ff4f0(plVar3,&local_58);
            FUN_00416cd0(&local_30,3,local_30,&DAT_010bdbec,local_58);
          }
          (**(code **)(*param_2 + 0x80))(param_2,local_30,plVar3);
          local_88 = local_88 + 1;
        }
        sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        if ((((sVar2 == 0x10) || (sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3), sVar2 == 0xe)) ||
            (sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3), sVar2 == 0x43)) ||
           (((sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3), sVar2 == 0xd9 ||
             (sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3), sVar2 == 0xda)) && (param_5 == '\0'))))
        {
          FUN_00414b50(&local_38,&DAT_010bdc0c);
          (**(code **)(*plVar3 + 0x288))(plVar3,&local_30);
          if (local_30 == 0) {
            FUN_0043f750(&local_60,local_84);
            FUN_00416cd0(&local_30,3,local_38,L"_no_label_",local_60);
          }
          if ((param_4 != '\0') && (local_30 != 0)) {
            FUN_017ff4f0(plVar3,&local_68);
            FUN_00416cd0(&local_30,3,local_30,&DAT_010bdbec,local_68);
          }
          (**(code **)(*param_2 + 0x80))(param_2,local_30,plVar3);
          local_84 = local_84 + 1;
        }
        sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        if (((sVar2 == 0x24) || (sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3), sVar2 == 0x6c)) &&
           (param_5 == '\0')) {
          FUN_00414b50(&local_38,&PTR_DAT_010bdc1c);
          (**(code **)(*plVar3 + 0x288))(plVar3,&local_30);
          if (local_30 == 0) {
            FUN_0043f750(&local_70,iVar5);
            FUN_00416cd0(&local_30,3,local_38,L"no_label_",local_70);
          }
          if ((param_4 != '\0') && (local_30 != 0)) {
            FUN_017ff4f0(plVar3,&local_78);
            FUN_00416cd0(&local_30,3,local_30,&DAT_010bdbec,local_78);
          }
          (**(code **)(*param_2 + 0x80))(param_2,local_30,plVar3);
          iVar5 = iVar5 + 1;
        }
      }
      local_90 = local_90 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (param_3 != '\0') {
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x438) + 0x28))();
    local_8c = 0;
    if (-1 < iVar6 + -1) {
      do {
        FUN_004b3cf0(*(undefined8 *)(param_1 + 0x438),&local_80,local_8c);
        FUN_0043ea00(&local_30,local_80);
        if (param_4 != '\0') {
          FUN_00416cd0(&local_30,3,local_30,&DAT_010bdbec,local_30);
        }
        (**(code **)(*param_2 + 0x80))(param_2,local_30,0);
        local_8c = local_8c + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  FUN_00414560(&local_80,0xb);
  return;
}

