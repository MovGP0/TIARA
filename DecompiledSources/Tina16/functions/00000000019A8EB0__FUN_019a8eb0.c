/* Ghidra address: 019a8eb0 */
/* Ghidra symbol: FUN_019a8eb0 */


void FUN_019a8eb0(longlong param_1,longlong param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_44;
  undefined8 local_40 [2];
  
  local_50 = 0;
  local_58 = 0;
  local_70 = 0;
  local_40[0] = 0;
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b67b0(plVar4,1);
  iVar9 = *(int *)(param_2 + 0x10);
  local_74 = 0;
  if (-1 < iVar9 + -1) {
    do {
      plVar5 = (longlong *)FUN_00b94e60(param_2,local_74);
      cVar1 = FUN_0198a580(plVar5);
      if ((cVar1 == '\x04') && (*(int *)((longlong)plVar5 + 0x18c) == 1)) {
        (**(code **)(*plVar5 + 0x288))(plVar5,local_40);
        local_44 = FUN_004170c0(&LAB_019a9220,local_40[0],1);
        if (0 < local_44) {
          FUN_00416dc0(local_40,local_40[0],1,local_44 + -1);
        }
        cVar1 = (**(code **)(*plVar4 + 0x140))(plVar4,local_40[0],&local_44);
        if (cVar1 == '\0') {
          lVar6 = FUN_00410e60(&PTR_FUN_00472dd0,1);
          local_44 = (**(code **)(*plVar4 + 0x80))(plVar4,local_40[0],lVar6);
        }
        else {
          lVar6 = (**(code **)(*plVar4 + 0x30))(plVar4,local_44);
        }
        if (*(int *)(lVar6 + 0x10) == 0) {
          FUN_004ae7e0(lVar6,plVar5);
        }
        else {
          plVar7 = (longlong *)FUN_004aeac0(lVar6,0);
          sVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
          sVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
          if (sVar3 == sVar2) {
            FUN_004ae7e0(lVar6,plVar5);
          }
        }
      }
      if ((((*PTR_DAT_02001ab0 != '\0') && (cVar1 = FUN_0198a580(plVar5), cVar1 == '\x04')) &&
          (sVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5), sVar3 == 0x39)) &&
         (((char)plVar5[0x34] == '\x01' && (*(longlong *)(plVar5[0x35] + 8) != 0)))) {
        FUN_019a8eb0(param_1,*(undefined8 *)(plVar5[0x35] + 8));
      }
      local_74 = local_74 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar9 = (**(code **)(*plVar4 + 0x28))();
  local_74 = 0;
  if (-1 < iVar9 + -1) {
    do {
      lVar6 = (**(code **)(*plVar4 + 0x30))(plVar4,local_74);
      if (1 < *(int *)(lVar6 + 0x10)) {
        uVar8 = (**(code **)(*plVar4 + 0x30))(plVar4,local_74);
        FUN_004aec30(uVar8,0,1);
        FUN_0041ddd0(&local_58,&PTR_PTR_0198a570);
        (**(code **)(*plVar4 + 0x18))(plVar4,&local_70,local_74);
        local_68 = local_70;
        local_60 = 0x11;
        FUN_00442f70(&local_50,local_58,&local_68,0);
        uVar8 = (**(code **)(*plVar4 + 0x30))(plVar4,local_74);
        (**(code **)(**(longlong **)(param_1 + 0x4b8) + 0x80))
                  (*(longlong **)(param_1 + 0x4b8),local_50,uVar8);
      }
      local_74 = local_74 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  FUN_00410f20(plVar4);
  FUN_00414480(&local_70);
  FUN_00414560(&local_58,2);
  FUN_00414480(local_40);
  return;
}

