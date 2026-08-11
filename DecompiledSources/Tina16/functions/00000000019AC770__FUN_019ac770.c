/* Ghidra address: 019ac770 */
/* Ghidra symbol: FUN_019ac770 */


longlong *
FUN_019ac770(longlong param_1,longlong *param_2,int param_3,longlong *param_4,longlong param_5)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_34 [4];
  undefined8 local_30 [2];
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30[0] = 0;
  FUN_00414610(param_5);
  FUN_00414480(param_2);
  iVar8 = 0;
  bVar1 = false;
  iVar4 = FUN_019954e0(param_1);
  if (iVar4 < param_3) {
    while ((iVar8 < *(int *)(param_1 + 0x10) && (!bVar1))) {
      uVar5 = FUN_0198d420(param_1,iVar8);
      cVar2 = FUN_0198a580(uVar5);
      if (cVar2 == '\x04') {
        plVar6 = (longlong *)FUN_0198d420(param_1,iVar8);
        sVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (sVar3 == 0x39) {
          lVar7 = FUN_0198d420(param_1,iVar8);
          lVar7 = *(longlong *)(lVar7 + 0x1a8);
          if ((param_3 < *(int *)(lVar7 + 100)) ||
             (iVar4 = FUN_0176a490(lVar7), *(int *)(lVar7 + 100) + iVar4 <= param_3)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            if (param_5 == 0) {
              plVar6 = (longlong *)FUN_0198d420(param_1,iVar8);
              (**(code **)(*plVar6 + 0x288))(plVar6,param_2);
            }
            else {
              plVar6 = (longlong *)FUN_0198d420(param_1,iVar8);
              (**(code **)(*plVar6 + 0x288))(plVar6,&local_40);
              FUN_00416cd0(param_2,3,param_5,&DAT_019acb48,local_40);
            }
            lVar7 = FUN_0198d420(param_1,iVar8);
            if (*(char *)(*(longlong *)(lVar7 + 0x1a8) + 0x70) == '\x02') {
              cVar2 = FUN_019ae9f0(param_1,param_3,local_30,local_34);
              if (cVar2 != '\0') {
                FUN_00416cd0(param_2,3,*param_2,&LAB_019acb58,local_30[0]);
              }
            }
            else {
              lVar7 = FUN_0198d420(param_1,iVar8);
              if ((*(char *)(*(longlong *)(lVar7 + 0x1a8) + 0x70) == '\x01') &&
                 (lVar7 = FUN_0198d420(param_1,iVar8),
                 *(longlong *)(*(longlong *)(lVar7 + 0x1a8) + 8) != 0)) {
                lVar7 = FUN_0198d420(param_1,iVar8);
                FUN_019ac770(*(undefined8 *)(*(longlong *)(lVar7 + 0x1a8) + 8),&local_48,param_3,
                             param_4,*param_2);
                FUN_00414ad0(param_2,local_48);
              }
            }
          }
        }
      }
      iVar8 = iVar8 + 1;
    }
  }
  if (*param_2 == 0) {
    iVar4 = (**(code **)(*param_4 + 0x28))(param_4);
    if (((param_3 < iVar4) && (0 < param_3)) &&
       ((**(code **)(*param_4 + 0x18))(param_4,&local_50,param_3), local_50 != 0)) {
      if (param_5 == 0) {
        (**(code **)(*param_4 + 0x18))(param_4,param_2,param_3);
      }
      else {
        (**(code **)(*param_4 + 0x18))(param_4,&local_58,param_3);
        FUN_00416cd0(param_2,3,param_5,&DAT_019acb48,local_58);
      }
    }
    else if (param_5 == 0) {
      FUN_0043f750(param_2,param_3);
    }
    else {
      FUN_0043f750(&local_60,param_3);
      FUN_00416cd0(param_2,3,param_5,&DAT_019acb48,local_60);
    }
  }
  FUN_00414560(&local_60,5);
  FUN_00414480(local_30);
  FUN_00414480(&param_5);
  return param_2;
}

