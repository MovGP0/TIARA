/* Ghidra address: 01991990 */
/* Ghidra symbol: FUN_01991990 */


undefined8 FUN_01991990(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined1 local_70;
  longlong local_60;
  int local_58;
  int local_54;
  longlong local_50;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c [3];
  ulonglong uVar9;
  
  local_60 = param_1;
  local_50 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  lVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  iVar2 = (**(code **)(*param_2 + 0x1c8))(param_2);
  local_58 = 0;
  local_54 = iVar2;
  if (-1 < iVar2 + -1) {
    do {
      cVar1 = (**(code **)(*param_2 + 0x1d8))(param_2,local_58);
      if (cVar1 == '\0') {
        (**(code **)(*param_2 + 0x1f0))(param_2,local_58,&local_3c,&local_40);
        local_78 = local_50;
        local_70 = 0;
        FUN_019916f0(local_60,local_3c,local_40,param_2);
      }
      local_58 = local_58 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = (**(code **)(*param_2 + 0x1d0))();
  local_58 = 0;
  if (-1 < iVar2 + -1) {
    do {
      iVar7 = local_54 + local_58;
      cVar1 = (**(code **)(*param_2 + 0x1d8))(param_2,iVar7);
      if (cVar1 == '\0') {
        (**(code **)(*param_2 + 0x1f0))(param_2,iVar7,&local_3c,&local_40);
        local_78 = local_50;
        local_70 = 1;
        FUN_019916f0(local_60,local_3c,local_40,param_2);
      }
      local_58 = local_58 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  cVar1 = FUN_0198a580(param_2);
  if ((cVar1 == '\x04') && (iVar2 = (**(code **)(*param_2 + 0x1c8))(param_2), iVar2 < 6)) {
    iVar2 = *(int *)(local_50 + 0x10);
    local_58 = 0;
    if (iVar2 - 1U < 0x80000000) {
      do {
        if (0 < local_58) {
          lVar4 = FUN_004aeac0(local_50,local_58);
          *(undefined1 *)(lVar4 + 0x2d8) = 0;
          lVar4 = FUN_004aeac0(local_50,local_58);
          *(undefined1 *)(lVar4 + 0x3d8) = 0;
        }
        plVar5 = (longlong *)FUN_004aeac0(local_50,local_58);
        (**(code **)(*plVar5 + 0x1f0))(plVar5,0,local_2c,&local_34);
        plVar5 = (longlong *)FUN_004aeac0(local_50,local_58);
        (**(code **)(*plVar5 + 0x1f0))(plVar5,1,&local_30,&local_38);
        if (local_30 < local_2c[0]) {
          FUN_01cefdf0(local_2c,&local_30);
        }
        if (local_38 < local_34) {
          FUN_01cefdf0(&local_34,&local_38);
        }
        if (((local_2c[0] == local_30) || (local_34 == local_38)) &&
           (cVar1 = FUN_01991860(auStack_98), cVar1 != '\0')) {
          plVar5 = (longlong *)FUN_004aeac0(local_50,local_58);
          (**(code **)(*plVar5 + 0xa8))(plVar5,*(undefined8 *)(local_60 + 0x210));
          uVar6 = FUN_004aeac0(local_50,local_58);
          FUN_004ae7e0(lVar3,uVar6);
        }
        local_58 = local_58 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  uVar8 = *(uint *)(lVar3 + 0x10) - 1;
  uVar9 = (ulonglong)uVar8;
  local_58 = 0;
  if (-1 < (int)uVar8) {
    uVar9 = (ulonglong)*(uint *)(lVar3 + 0x10);
    do {
      uVar6 = FUN_004aeac0(lVar3,local_58);
      FUN_0198b6d0(local_60,uVar6);
      local_58 = local_58 + 1;
      uVar8 = (int)uVar9 - 1;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 != 0);
  }
  if (0 < *(int *)(lVar3 + 0x10)) {
    FUN_00b95360(local_60);
  }
  iVar2 = *(int *)(local_50 + 0x10);
  FUN_00410f20(local_50);
  FUN_00410f20(lVar3);
  return CONCAT71((int7)(uVar9 >> 8),0 < iVar2);
}

