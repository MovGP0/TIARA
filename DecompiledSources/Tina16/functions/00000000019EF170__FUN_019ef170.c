/* Ghidra address: 019ef170 */
/* Ghidra symbol: FUN_019ef170 */


void FUN_019ef170(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  int local_94;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  longlong local_40 [2];
  
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50[0] = 0;
  local_40[0] = 0;
  if (param_3 == 0) {
    local_94 = 0;
  }
  else {
    local_94 = *(int *)(*(longlong *)(param_3 + 0x1a8) + 100);
  }
  iVar3 = 0;
  iVar8 = *(int *)(param_2 + 0x10);
  if (-1 < iVar8 + -1) {
    do {
      plVar7 = (longlong *)FUN_0198d420(param_2,iVar3);
      cVar1 = FUN_0198a580(plVar7);
      if (cVar1 == '\x03') {
        (**(code **)(*plVar7 + 0x288))(plVar7,local_50);
        FUN_0043ea00(local_40,local_50[0]);
        iVar4 = (**(code **)(*plVar7 + 0x210))(plVar7,0);
        FUN_017ff5f0(plVar7,param_3);
        if (((local_40[0] != 0) && (local_94 <= iVar4)) &&
           ((iVar5 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x28))
                               (*(longlong **)(param_1 + 0xc0)), iVar4 < iVar5 &&
            (iVar5 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x30))
                               (*(longlong **)(param_1 + 0xc0),iVar4), iVar5 < 2)))) {
          FUN_019ef040(param_1,&local_60,local_40[0]);
          FUN_019eecc0(*(undefined8 *)(param_1 + 0xb0),&local_58,local_60);
          (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x40))
                    (*(longlong **)(param_1 + 0xc0),iVar4,local_58);
          (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x48))
                    (*(longlong **)(param_1 + 0xc0),iVar4,2);
        }
      }
      else {
        cVar1 = FUN_0198a580(plVar7);
        if (cVar1 == '\x04') {
          sVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
          FUN_017ff5f0(plVar7,param_3);
          if ((sVar2 == 0x3a) || (sVar2 == 4)) {
            if (sVar2 == 0x3a) {
              iVar4 = 4;
            }
            else {
              iVar4 = 1;
            }
            (**(code **)(*plVar7 + 0x288))(plVar7,&local_68);
            FUN_0043ea00(local_40,local_68);
            iVar5 = (**(code **)(*plVar7 + 0x210))(plVar7,0);
            if (((local_40[0] != 0) && (-1 < iVar5)) &&
               ((iVar6 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x28))
                                   (*(longlong **)(param_1 + 0xc0)), iVar5 < iVar6 &&
                (iVar6 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x30))
                                   (*(longlong **)(param_1 + 0xc0),iVar5), iVar6 < iVar4)))) {
              FUN_019ef040(param_1,&local_78,local_40[0]);
              FUN_019eecc0(*(undefined8 *)(param_1 + 0xb0),&local_70,local_78);
              (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x40))
                        (*(longlong **)(param_1 + 0xc0),iVar5,local_70);
              (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x48))
                        (*(longlong **)(param_1 + 0xc0),iVar5,iVar4);
            }
          }
          if (((sVar2 == 0x39) && (*(char *)(plVar7[0x35] + 0x70) == '\x01')) &&
             (*(longlong *)(plVar7[0x35] + 8) != 0)) {
            FUN_019ef170(param_1,*(undefined8 *)(plVar7[0x35] + 8),plVar7);
          }
        }
        else {
          cVar1 = FUN_0198a580(plVar7);
          if (cVar1 == '\x05') {
            FUN_004169a0(&local_80,plVar7 + 0x5b);
            FUN_0043ea00(local_40,local_80);
            iVar4 = (**(code **)(*plVar7 + 0x210))(plVar7,0);
            FUN_017ff5f0(plVar7,param_3);
            if ((((local_40[0] != 0) && (local_94 <= iVar4)) &&
                (iVar5 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x28))
                                   (*(longlong **)(param_1 + 0xc0)), iVar4 < iVar5)) &&
               (iVar5 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x30))
                                  (*(longlong **)(param_1 + 0xc0),iVar4), iVar5 < 3)) {
              FUN_019eecc0(*(undefined8 *)(param_1 + 0xb0),&local_88,local_40[0]);
              (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x40))
                        (*(longlong **)(param_1 + 0xc0),iVar4,local_88);
              (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x48))
                        (*(longlong **)(param_1 + 0xc0),iVar4,3);
            }
          }
        }
      }
      iVar3 = iVar3 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_00414560(&local_88,8);
  FUN_00414480(local_40);
  return;
}

