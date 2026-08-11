/* Ghidra address: 00f5ec80 */
/* Ghidra symbol: FUN_00f5ec80 */


void FUN_00f5ec80(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_5c = 1;
  iVar5 = 1;
  iVar6 = *(int *)(param_1 + 0x10);
  local_60 = 0;
  if (-1 < iVar6 + -1) {
    do {
      plVar3 = (longlong *)FUN_00b94e60(param_1,local_60);
      cVar1 = FUN_0198a580(plVar3);
      if (((cVar1 == '\x04') && (lVar4 = FUN_017ff620(plVar3), lVar4 == 0)) &&
         (*(char *)((longlong)plVar3 + 0x531) == '\0')) {
        sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        if (sVar2 == 0xf) {
          FUN_00414b50(&local_38,&DAT_00f5ef48);
          (**(code **)(*plVar3 + 0x288))(plVar3,&local_30);
          if (local_30 == 0) {
            FUN_0043f750(&local_40,local_5c);
            FUN_00416cd0(&local_30,3,local_38,L"_no_label_",local_40);
          }
          if ((param_3 != '\0') && (local_30 != 0)) {
            FUN_017ff4f0(plVar3,&local_48);
            FUN_00416cd0(&local_30,3,local_30,&DAT_00f5ef7c,local_48);
          }
          (**(code **)(*param_2 + 0x80))(param_2,local_30,plVar3);
          local_5c = local_5c + 1;
        }
        sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        if (((sVar2 == 0x10) || (sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3), sVar2 == 0xd9)) ||
           (sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3), sVar2 == 0xda)) {
          FUN_00414b50(&local_38,&DAT_00f5ef8c);
          (**(code **)(*plVar3 + 0x288))(plVar3,&local_30);
          if (local_30 == 0) {
            FUN_0043f750(&local_50,iVar5);
            FUN_00416cd0(&local_30,3,local_38,L"_no_label_",local_50);
          }
          if ((param_3 != '\0') && (local_30 != 0)) {
            FUN_017ff4f0(plVar3,&local_58);
            FUN_00416cd0(&local_30,3,local_30,&DAT_00f5ef7c,local_58);
          }
          (**(code **)(*param_2 + 0x80))(param_2,local_30,plVar3);
          iVar5 = iVar5 + 1;
        }
      }
      local_60 = local_60 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414560(&local_58,6);
  return;
}

