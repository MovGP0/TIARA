/* Ghidra address: 0088fea0 */
/* Ghidra symbol: FUN_0088fea0 */


undefined4
FUN_0088fea0(short *param_1,uint param_2,longlong param_3,ulonglong param_4,longlong param_5,
            ulonglong param_6,uint param_7)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24 [12];
  
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  FUN_004424b0(local_24,L"65535");
  puVar5 = local_24;
  if ((param_1 == (short *)0x0) || (param_2 < 0x10)) {
    local_4c = 0x2afb;
  }
  else if (*param_1 == 2) {
    if (param_2 < 0x10) {
      local_4c = 0x2afb;
    }
    else if (((param_3 == 0) || (param_4 == 0)) && ((param_5 == 0 || (param_6 == 0)))) {
      local_4c = 0x2af9;
    }
    else if (((param_7 & 2) == 0) || ((param_7 & 4) == 0)) {
      if ((param_5 != 0) && (param_6 != 0)) {
        sVar1 = param_1[1];
        if ((param_7 & 8) == 0) {
          if ((param_7 & 0x10) == 0) {
            puVar4 = (undefined *)0x0;
          }
          else {
            puVar4 = &DAT_00890268;
          }
          plVar7 = (longlong *)(**(code **)PTR_PTR_02004ed8)(sVar1,puVar4);
          if ((plVar7 == (longlong *)0x0) || (*plVar7 == 0)) {
            uVar2 = (**(code **)PTR_PTR_02002a90)(sVar1);
            FUN_0043f750(&local_48,uVar2);
            FUN_00442660(local_24,local_48,6);
          }
          else {
            FUN_004167a0(&local_30,*plVar7);
            puVar5 = (undefined1 *)FUN_00416740(local_30);
          }
        }
        else {
          uVar2 = (**(code **)PTR_PTR_02002a90)(sVar1);
          FUN_0043f750(&local_40,uVar2);
          FUN_00442660(local_24,local_40,6);
        }
        iVar3 = FUN_00414d00(puVar5);
        if (param_6 <= (ulonglong)(longlong)iVar3) {
          local_4c = 0x2afb;
          goto LAB_0089021e;
        }
        FUN_00442580(param_5,puVar5,(undefined4)param_6);
      }
      if ((param_3 != 0) && (param_4 != 0)) {
        local_28 = *(undefined4 *)(param_1 + 2);
        if ((param_7 & 2) == 0) {
          plVar7 = (longlong *)(**(code **)PTR_PTR_02004860)(&local_28,4,2);
          if ((plVar7 == (longlong *)0x0) || (*plVar7 == 0)) {
            if ((param_7 & 4) != 0) {
              iVar3 = (**(code **)PTR_PTR_020051a8)();
              if (iVar3 == 0x2af9) {
                local_4c = 0x2af9;
              }
              else if (iVar3 == 0x2afa) {
                local_4c = 0x2afa;
              }
              else if (iVar3 == 0x2afb) {
                local_4c = 0x2afb;
              }
              else {
                local_4c = 0x2af9;
              }
              goto LAB_0089021e;
            }
            uVar6 = (**(code **)PTR_PTR_02003ea8)(local_28);
            FUN_004167a0(&local_38,uVar6);
            uVar6 = FUN_00416740(local_38);
          }
          else {
            FUN_004167a0(&local_38,*plVar7);
            uVar6 = FUN_00416740(local_38);
            if ((param_7 & 1) != 0) {
              puVar8 = (undefined2 *)FUN_00442980(uVar6,0x2e);
              if (puVar8 != (undefined2 *)0x0) {
                *puVar8 = 0;
              }
            }
          }
        }
        else {
          uVar6 = (**(code **)PTR_PTR_02003ea8)(local_28);
          FUN_004167a0(&local_38,uVar6);
          uVar6 = FUN_00416740(local_38);
        }
        iVar3 = FUN_00414d00(uVar6);
        if (param_4 <= (ulonglong)(longlong)iVar3) {
          local_4c = 0x2afb;
          goto LAB_0089021e;
        }
        FUN_00442580(param_3,uVar6,param_4);
      }
      local_4c = 0;
    }
    else {
      local_4c = 0x2726;
    }
  }
  else {
    local_4c = 0x273f;
  }
LAB_0089021e:
  FUN_00414560(&local_48,4);
  return local_4c;
}

