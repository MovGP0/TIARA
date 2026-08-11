/* Ghidra address: 017cd4e0 */
/* Ghidra symbol: FUN_017cd4e0 */


longlong *
FUN_017cd4e0(longlong *param_1,longlong param_2,int param_3,longlong *param_4,undefined8 param_5)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_00414610(param_5);
  FUN_00414480(param_1);
  iVar7 = 0;
  bVar2 = false;
  iVar5 = FUN_019954e0(param_2);
  if (iVar5 < param_3) {
    while ((iVar7 < *(int *)(param_2 + 0x10) && (!bVar2))) {
      plVar6 = (longlong *)FUN_0198d420(param_2,iVar7);
      cVar3 = FUN_0198a580(plVar6);
      if ((cVar3 == '\x04') && (sVar4 = (**(code **)(*plVar6 + 0xf8))(plVar6), sVar4 == 0x39)) {
        lVar1 = plVar6[0x35];
        if ((param_3 < *(int *)(lVar1 + 100)) ||
           (iVar5 = FUN_0176a490(lVar1), *(int *)(lVar1 + 100) + iVar5 <= param_3)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          (**(code **)(*plVar6 + 0x288))(plVar6,&local_30);
          FUN_00416cd0(param_1,3,param_5,local_30,&DAT_017cd7ec);
          if (*(char *)(plVar6[0x35] + 0x70) == '\x02') {
            FUN_017cd460(&local_38,*(undefined8 *)(plVar6[0x35] + 0xe0),param_3);
            FUN_00416ad0(param_1,local_38);
          }
          else {
            lVar1 = plVar6[0x35];
            if ((*(char *)(lVar1 + 0x70) == '\x01') && (*(longlong *)(lVar1 + 8) != 0)) {
              FUN_017cd4e0(&local_40,*(undefined8 *)(lVar1 + 8),param_3,param_4,*param_1);
              FUN_00414ad0(param_1,local_40);
            }
            else {
              FUN_0043f750(&local_48,param_3);
              FUN_00416ba0(param_1,param_5,local_48);
            }
          }
        }
      }
      iVar7 = iVar7 + 1;
    }
  }
  if (*param_1 == 0) {
    iVar5 = (**(code **)(*param_4 + 0x28))(param_4);
    if (((param_3 < iVar5) && (0 < param_3)) &&
       ((**(code **)(*param_4 + 0x18))(param_4,&local_50,param_3), local_50 != 0)) {
      (**(code **)(*param_4 + 0x18))(param_4,&local_58,param_3);
      FUN_00416ba0(param_1,param_5,local_58);
    }
    else {
      FUN_0043f750(&local_60,param_3);
      FUN_00416ba0(param_1,param_5,local_60);
    }
  }
  FUN_00414560(&local_60,7);
  FUN_00414480(&param_5);
  return param_1;
}

