/* Ghidra address: 017ce180 */
/* Ghidra symbol: FUN_017ce180 */


void FUN_017ce180(longlong param_1,longlong param_2,undefined1 param_3,undefined1 param_4,
                 undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong local_res10 [3];
  int local_b4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30;
  
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414610(param_5);
  if (((*(longlong *)PTR_DAT_020038e8 != 0) && (*(longlong *)PTR_DAT_02003c48 != 0)) &&
     (*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x138) != 0)) {
    uVar6 = FUN_004b6930(&PTR_FUN_00478280,1);
    plVar7 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    uVar2 = *(undefined8 *)(*(longlong *)PTR_DAT_020038e8 + 8);
    iVar4 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02003c48 + 0x138) + 0x28))();
    local_b4 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar8 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02003c48 + 0x138) + 0x30))
                          (*(longlong **)(*(longlong *)PTR_DAT_02003c48 + 0x138),local_b4);
        plVar3 = *(longlong **)(*(longlong *)(lVar8 + 0x38) + 0x128);
        if (plVar3 == (longlong *)0x0) {
          FUN_00414480(&local_30);
        }
        else {
          FUN_01b20020(&local_30,plVar3,&DAT_017ce894);
        }
        if (local_30 == 0) {
          FUN_0043f750(local_40,local_b4);
          FUN_00416ba0(&local_30,L"no_label_",local_40[0]);
        }
        if (*(char *)(lVar8 + 0x18) == '\x01') {
          if (local_res10[0] == 0) {
            uVar5 = (**(code **)(*plVar3 + 0x210))(plVar3,0);
            FUN_017cd4e0(&local_68,uVar1,uVar5,uVar6,0);
            uVar5 = (**(code **)(*plVar3 + 0x210))(plVar3,1);
            FUN_017cd4e0(&local_70,uVar1,uVar5,uVar6,0);
            FUN_00416cd0(&local_60,7,&PTR_u_laFloralwhite_017ce8c4,local_30,&DAT_017ce8d8,local_68,
                         &DAT_017ce8e8,local_70,&DAT_017ce90c);
            (**(code **)(*plVar7 + 0x80))(plVar7,local_60,1);
          }
          else {
            uVar5 = (**(code **)(*plVar3 + 0x210))(plVar3,0);
            FUN_017cd4e0(&local_50,uVar1,uVar5,uVar6,0);
            uVar5 = (**(code **)(*plVar3 + 0x210))(plVar3,1);
            FUN_017cd4e0(&local_58,uVar1,uVar5,uVar6,0);
            FUN_00416cd0(&local_48,9,&PTR_u_laFloralwhite_017ce8c4,local_30,&DAT_017ce8d8,local_50,
                         &DAT_017ce8e8,local_58,&PTR_DAT_017ce8f8,local_res10[0],&DAT_017ce90c);
            (**(code **)(*plVar7 + 0x80))(plVar7,local_48,1);
          }
        }
        else if (*(char *)(lVar8 + 0x18) == '\x02') {
          if (local_res10[0] == 0) {
            uVar5 = (**(code **)(*plVar3 + 0x210))(plVar3,0);
            FUN_017cd4e0(&local_98,uVar1,uVar5,uVar6,0);
            uVar5 = (**(code **)(*plVar3 + 0x210))(plVar3,1);
            FUN_017cd4e0(&local_a0,uVar1,uVar5,uVar6,0);
            FUN_00416cd0(&local_90,7,&LAB_017ce91c,local_30,&DAT_017ce8d8,local_98,&DAT_017ce8e8,
                         local_a0,&DAT_017ce90c);
            (**(code **)(*plVar7 + 0x80))(plVar7,local_90,2);
          }
          else {
            uVar5 = (**(code **)(*plVar3 + 0x210))(plVar3,0);
            FUN_017cd4e0(&local_80,uVar1,uVar5,uVar6,0);
            uVar5 = (**(code **)(*plVar3 + 0x210))(plVar3,1);
            FUN_017cd4e0(&local_88,uVar1,uVar5,uVar6,0);
            FUN_00416cd0(&local_78,9,&LAB_017ce91c,local_30,&DAT_017ce8d8,local_80,&DAT_017ce8e8,
                         local_88,&PTR_DAT_017ce8f8,local_res10[0],&DAT_017ce90c);
            (**(code **)(*plVar7 + 0x80))(plVar7,local_78,2);
          }
        }
        local_b4 = local_b4 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uVar5 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02003c48 + 0x138) + 0x28))
                      (*(longlong **)(*(longlong *)PTR_DAT_02003c48 + 0x138));
    FUN_01cc3330(uVar2,uVar5,plVar7,param_3,param_4,param_5,param_6);
    FUN_00410f20(plVar7);
    FUN_00410f20(uVar6);
  }
  FUN_00414560(&local_a0,0xd);
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  FUN_00414480(&param_5);
  return;
}

