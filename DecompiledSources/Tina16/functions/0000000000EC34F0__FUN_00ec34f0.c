/* Ghidra address: 00ec34f0 */
/* Ghidra symbol: FUN_00ec34f0 */


undefined8 *
FUN_00ec34f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4,char param_5,
            int *param_6,longlong *param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 local_res10 [3];
  int local_f4;
  int local_f0;
  int local_ec;
  longlong local_e8;
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
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  plVar7 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar2 = FUN_004170c0(&DAT_00ec403c,local_res10[0],1);
  FUN_00416dc0(local_60,local_res10[0],1,iVar2 + -1);
  FUN_0043ea00(&local_38,local_60[0]);
  iVar2 = FUN_004170c0(&DAT_00ec403c,local_res10[0],1);
  iVar3 = FUN_004170c0(&DAT_00ec404c,local_res10[0],1);
  iVar4 = FUN_004170c0(&DAT_00ec403c,local_res10[0],1);
  FUN_00416dc0(&local_68,local_res10[0],iVar2 + 1,(iVar3 - iVar4) + -1);
  FUN_0043ea00(&local_40,local_68);
  iVar2 = FUN_004170c0(&DAT_00ec405c,local_40,1);
  if (iVar2 < 1) {
    FUN_00414b50(&local_50,L"TINA");
  }
  else {
    iVar2 = FUN_004170c0(&DAT_00ec405c,local_40,1);
    FUN_00416dc0(&local_70,local_40,1,iVar2 + -1);
    FUN_00ea9ef0(&local_50,local_70);
    iVar2 = FUN_004170c0(&DAT_00ec405c,local_40,1);
    uVar5 = 0;
    if (local_40 != 0) {
      uVar5 = *(undefined4 *)(local_40 + -4);
    }
    FUN_00416dc0(&local_40,local_40,iVar2 + 1,uVar5);
  }
  if (DAT_01ef6a40 == '\0') {
    FUN_00ec0240();
  }
  plVar8 = (longlong *)FUN_00eae5f0(local_50,*(undefined8 *)PTR_DAT_02004008);
  FUN_00414480(param_1);
  if ((plVar8 != (longlong *)0x0) && (local_38 != 0)) {
    FUN_00ea9ca0(&local_80,local_38);
    FUN_0043ea00(&local_78,local_80);
    FUN_00414b50(&local_38,local_78);
    FUN_00ea9ca0(&local_90,local_40);
    FUN_0043ea00(&local_88,local_90);
    FUN_00414b50(&local_40,local_88);
    (**(code **)(*plVar8 + 0x10))(plVar8,&local_48,L"DigitalICs",local_40,0);
    if (local_48 != 0) {
      local_f4 = FUN_004170c0(local_38,local_48,1);
      if (local_f4 == 0) {
        local_f4 = 1;
      }
      iVar2 = FUN_004170c0(&DAT_00ec403c,local_48,local_f4);
      iVar3 = FUN_004170c0(&DAT_00ec40a8,local_48,local_f4);
      iVar4 = FUN_004170c0(&DAT_00ec403c,local_48,local_f4);
      FUN_00416dc0(&local_48,local_48,iVar2 + 1,(iVar3 - iVar4) + -1);
    }
    if (param_5 != '\0') {
      *param_6 = 1;
    }
    if (local_48 != 0) {
      do {
        FUN_00ea9ab0(&local_30,&local_48);
        uVar5 = FUN_004170c0(&DAT_00ec40bc,local_30,1);
        FUN_00416dc0(&local_98,local_30,uVar5,3);
        iVar2 = FUN_00416db0(local_98,&DAT_00ec40cc);
        if (iVar2 == 0) {
          if (param_4 == '\0') {
            (**(code **)(*plVar6 + 0x78))(plVar6,&DAT_00ec40f4);
          }
          else {
            (**(code **)(*plVar6 + 0x78))(plVar6,&PTR_DAT_00ec40e0);
          }
          if (param_5 != '\0') {
            (**(code **)(*plVar7 + 0x78))(plVar7,&PTR_DAT_00ec40e0);
          }
        }
        else {
          if (param_4 == '\0') {
            iVar2 = FUN_004170c0(&DAT_00ec40bc,local_30,1);
            FUN_00416dc0(&local_a8,local_30,1,iVar2 + -1);
            (**(code **)(*plVar6 + 0x78))(plVar6,local_a8);
          }
          else {
            iVar2 = FUN_004170c0(&DAT_00ec40bc,local_30,1);
            uVar5 = 0;
            if (local_30 != 0) {
              uVar5 = *(undefined4 *)(local_30 + -4);
            }
            FUN_00416dc0(&local_a0,local_30,iVar2 + 1,uVar5);
            (**(code **)(*plVar6 + 0x78))(plVar6,local_a0);
          }
          if (param_5 != '\0') {
            iVar2 = FUN_004170c0(&DAT_00ec40bc,local_30,1);
            uVar5 = 0;
            if (local_30 != 0) {
              uVar5 = *(undefined4 *)(local_30 + -4);
            }
            FUN_00416dc0(&local_30,local_30,iVar2 + 1,uVar5);
            local_f4 = 2;
            do {
              FUN_0043f750(&local_b8,local_f4);
              FUN_00416ba0(&local_b0,&DAT_00ec4104,local_b8);
              iVar2 = FUN_004170c0(local_b0,local_30,1);
              if ((0 < iVar2) && (*param_6 < local_f4)) {
                *param_6 = local_f4;
              }
              local_f4 = local_f4 + 1;
            } while (local_f4 != 9);
            iVar2 = FUN_004170c0(&DAT_00ec4104,local_30,1);
            if (0 < iVar2) {
              iVar2 = FUN_004170c0(&DAT_00ec4104,local_30,1);
              FUN_00416dc0(&local_30,local_30,1,iVar2 + -1);
            }
            (**(code **)(*plVar7 + 0x78))(plVar7,local_30);
          }
        }
      } while (local_48 != 0);
      FUN_00eaa4b0(plVar6,param_3);
      FUN_00414480(param_1);
      iVar2 = (**(code **)(*plVar6 + 0x28))();
      local_f4 = 0;
      if (-1 < iVar2 + -1) {
        do {
          (**(code **)(*plVar6 + 0x18))(plVar6,&local_c0,local_f4);
          FUN_00416cd0(param_1,3,*param_1,local_c0,&LAB_00ec4114);
          local_f4 = local_f4 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      if ((param_5 != '\0') && (1 < *param_6)) {
        (**(code **)(*param_7 + 0x90))(param_7);
        (**(code **)(*plVar6 + 0x90))(plVar6);
        iVar2 = (**(code **)(*plVar7 + 0x28))();
        local_f4 = 0;
        if (-1 < iVar2 + -1) {
          do {
            (**(code **)(*plVar7 + 0x18))(plVar7,&local_48,local_f4);
            iVar3 = FUN_00416db0(local_48,&PTR_DAT_00ec40e0);
            if ((iVar3 != 0) &&
               (cVar1 = (**(code **)(*plVar7 + 0x30))(plVar7,local_f4), cVar1 == '\0')) {
              FUN_0043f750(&local_c8,local_f4 + 1);
              FUN_00416ba0(&local_30,local_c8,&LAB_00ec4114);
              (**(code **)(*plVar7 + 0x48))(plVar7,local_f4,1);
              local_ec = 1;
              iVar3 = (**(code **)(*plVar7 + 0x28))(plVar7);
              local_f0 = local_f4 + 1;
              if (local_f0 <= iVar3 + -1) {
                iVar3 = ((iVar3 + -1) - local_f0) + 1;
                do {
                  (**(code **)(*plVar7 + 0x18))(plVar7,&local_d0,local_f0);
                  iVar4 = FUN_00416db0(local_d0,local_48);
                  if (iVar4 == 0) {
                    FUN_0043f750(&local_d8,local_f0 + 1);
                    FUN_00416cd0(&local_30,3,local_30,local_d8,&LAB_00ec4114);
                    (**(code **)(*plVar7 + 0x48))(plVar7,local_f0,1);
                    local_ec = local_ec + 1;
                  }
                  local_f0 = local_f0 + 1;
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
              if (local_ec == *param_6) {
                (**(code **)(*plVar6 + 0x78))(plVar6,local_30);
              }
            }
            local_f4 = local_f4 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        while ((**(code **)(*plVar6 + 0x18))(plVar6,&local_e8,0), local_e8 != 0) {
          FUN_00414480(&local_30);
          iVar2 = (**(code **)(*plVar6 + 0x28))();
          local_f4 = 0;
          if (-1 < iVar2 + -1) {
            do {
              (**(code **)(*plVar6 + 0x18))(plVar6,&local_48,local_f4);
              FUN_00ea9ab0(&local_e0,&local_48);
              FUN_00416cd0(&local_30,3,local_30,local_e0,&LAB_00ec4114);
              (**(code **)(*plVar6 + 0x40))(plVar6,local_f4);
              local_f4 = local_f4 + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          (**(code **)(*param_7 + 0x78))(param_7,local_30);
        }
      }
    }
  }
  FUN_00410f20(plVar6);
  FUN_00410f20(plVar7);
  FUN_00414560(&local_e8,0x12);
  FUN_00414560(&local_50,5);
  FUN_00414480(local_res10);
  return param_1;
}

