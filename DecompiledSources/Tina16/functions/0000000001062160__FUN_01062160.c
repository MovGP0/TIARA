/* Ghidra address: 01062160 */
/* Ghidra symbol: FUN_01062160 */


void FUN_01062160(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,int param_5,
                 uint param_6,longlong param_7)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  undefined8 local_b0 [2];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
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
  
  local_b8 = 0;
  local_b0[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  FUN_00414610(param_7);
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  plVar5 = (longlong *)0x0;
  FUN_0105ceb0(param_3,&local_50,param_5,0);
  FUN_0105ceb0(param_3,&local_58,param_5,1);
  FUN_0105cf90(param_3,&local_98,1,param_5);
  FUN_0105cf90(param_3,&local_a0,1,0);
  cVar2 = FUN_00440a20(local_a0,1);
  if (((cVar2 == '\0') || (param_5 != 1)) || (param_7 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  cVar2 = FUN_00440a20(local_98,1);
  if (((cVar2 == '\0') && (param_5 == 0)) || (param_5 != 0)) {
    if (((param_6 & 1) != 0) && (!bVar1)) {
      if (param_5 == 0) {
        plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
        FUN_010604e0(param_3,param_2,1);
        FUN_010604e0(param_3,param_2,2);
      }
      else if (param_5 == 1) {
        local_bc = 0;
        if (param_7 == 0) {
          plVar5 = (longlong *)FUN_01b21480(*(undefined8 *)(param_4 + 0x78));
          iVar3 = (**(code **)(*plVar5 + 0xb0))(plVar5,L"LiquidCrystal");
          if (-1 < iVar3) {
            (**(code **)(*plVar5 + 0x98))(plVar5,iVar3);
          }
        }
        else {
          plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
          (**(code **)(*plVar5 + 0x78))(plVar5,param_7);
        }
        iVar3 = (**(code **)(*plVar5 + 0x28))();
        local_c0 = 0;
        if (-1 < iVar3 + -1) {
          do {
            (**(code **)(*plVar5 + 0x18))(plVar5,&local_48,local_c0);
            FUN_0105a1e0(param_4,local_b0,local_48);
            FUN_01060c30(param_3,&local_80,param_2,local_b0[0],local_48,0);
            if (local_80 != 0) {
              if (local_bc == 0) {
                FUN_00414ad0(param_3 + 0x50,local_80);
              }
              else {
                FUN_00416cd0(param_3 + 0x50,3,*(undefined8 *)(param_3 + 0x50),&LAB_010627d0,local_80
                            );
              }
              local_bc = local_bc + 1;
            }
            local_c0 = local_c0 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else {
        plVar5 = (longlong *)0x0;
        if (param_5 == 2) {
          plVar5 = (longlong *)FUN_01b21480(*(undefined8 *)(param_4 + 0x80));
          local_bc = 0;
          iVar3 = (**(code **)(*plVar5 + 0x28))();
          local_c0 = 0;
          if (-1 < iVar3 + -1) {
            do {
              (**(code **)(*plVar5 + 0x18))(plVar5,&local_48,local_c0);
              FUN_00414b50(&local_78,*(undefined8 *)(param_1 + 0x30));
              if (*(longlong *)(param_1 + 0x38) != 0) {
                FUN_00416cd0(&local_78,3,local_78,&LAB_010627d0,*(undefined8 *)(param_1 + 0x38));
              }
              FUN_0105a3c0(param_4,&local_b8,local_48);
              FUN_01060c30(param_3,&local_80,param_2,local_b8,local_48,local_78);
              if (local_80 != 0) {
                if (local_bc == 0) {
                  FUN_00414ad0(param_3 + 0x58,local_80);
                }
                else {
                  FUN_00416cd0(param_3 + 0x58,3,*(undefined8 *)(param_3 + 0x58),&LAB_010627d0,
                               local_80);
                }
                local_bc = local_bc + 1;
              }
              local_c0 = local_c0 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
      }
    }
    if (((param_6 & 2) != 0) &&
       ((param_5 == 0 ||
        ((plVar5 != (longlong *)0x0 && (iVar3 = (**(code **)(*plVar5 + 0x28))(plVar5), 0 < iVar3))))
       )) {
      FUN_010612f0(param_3,param_2,param_5);
      (**(code **)(*plVar4 + 0x88))(plVar4,param_2);
      FUN_01063fc0(param_1,param_2,0);
      if (param_5 == 0) {
        FUN_0105cf90(param_3,&local_88,2,0);
        FUN_0105cf90(param_3,&local_90,1,0);
        iVar3 = FUN_00416db0(local_88,local_90);
        if (iVar3 != 0) {
          FUN_015f21c0(local_88,local_90);
        }
      }
    }
  }
  FUN_00410f20(plVar4);
  if (plVar5 != (longlong *)0x0) {
    FUN_00410f20(plVar5);
  }
  FUN_00414560(&local_b8,2);
  FUN_00414560(&local_a0,0xf);
  FUN_00414480(&param_7);
  return;
}

