/* Ghidra address: 006ab200 */
/* Ghidra symbol: FUN_006ab200 */


void FUN_006ab200(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_78 = 0;
  local_80 = 0;
  local_98 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  local_30 = 0;
  cVar2 = '\0';
  iVar8 = 0;
  iVar3 = 0;
  plVar1 = *(longlong **)(param_1 + 0x178);
  if (plVar1 != (longlong *)0x0) {
    uVar4 = FUN_004113f0(param_2,&PTR_FUN_0071be60);
    (**(code **)(*plVar1 + 0x280))(plVar1,&local_30);
    iVar7 = 0;
    if (local_30 != 0) {
      iVar7 = *(int *)(local_30 + -4);
    }
    if (0 < iVar7) {
      lVar5 = FUN_006ab1f0(param_1);
      iVar8 = iVar3;
      if ((*(ushort *)(lVar5 + 0xd0) & 0x400) == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x178) + 0x280))
                  (*(longlong **)(param_1 + 0x178),&local_38);
        FUN_007267a0(uVar4,&local_40);
        iVar3 = FUN_0043e6d0(local_38,local_40);
        if (iVar3 != 0) goto LAB_006ab339;
LAB_006ab397:
        FUN_00726820(uVar4,&local_58);
        FUN_00681590(*(undefined8 *)(param_1 + 0x178),local_58);
        uVar6 = FUN_006ab1f0(param_1);
        FUN_007267a0(uVar6,&local_60);
        lVar5 = FUN_006ab1f0(param_1);
        FUN_006aaba0(*(undefined8 *)(param_1 + 0x178),local_60,*(undefined2 *)(lVar5 + 0xd0),
                     *(undefined1 *)(param_1 + 0x180));
        lVar5 = FUN_006ab1f0(param_1);
        if ((*(ushort *)(lVar5 + 0xd0) & 0x400) == 0) goto LAB_006ab509;
      }
      else {
LAB_006ab339:
        lVar5 = FUN_006ab1f0(param_1);
        if ((*(ushort *)(lVar5 + 0xd0) & 0x400) != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x178) + 0x280))
                    (*(longlong **)(param_1 + 0x178),&local_48);
          FUN_007267a0(uVar4,&local_50);
          iVar3 = FUN_00416db0(local_48,local_50);
          if (iVar3 == 0) goto LAB_006ab397;
        }
      }
    }
    do {
      uVar6 = FUN_006ab1f0(param_1);
      FUN_007267a0(uVar6,&local_68);
      lVar5 = FUN_006ab1f0(param_1);
      cVar2 = FUN_006aaba0(*(undefined8 *)(param_1 + 0x178),local_68,*(undefined2 *)(lVar5 + 0xd0),
                           *(undefined1 *)(param_1 + 0x180));
      if (cVar2 == '\0') break;
      FUN_00726820(uVar4,&local_70);
      FUN_00681590(*(undefined8 *)(param_1 + 0x178),local_70);
      iVar8 = iVar8 + 1;
      lVar5 = FUN_006ab1f0(param_1);
    } while ((*(ushort *)(lVar5 + 0xd0) & 0x400) != 0);
  }
  if ((cVar2 == '\0') && (iVar8 == 0)) {
    FUN_0041ddd0(&local_80,PTR_PTR_02003bb0);
    uVar4 = FUN_006ab1f0(param_1);
    FUN_007267a0(uVar4,&local_98);
    local_90 = local_98;
    local_88 = 0x11;
    FUN_00442f70(&local_78,local_80,&local_90,0);
    FUN_0072d730(local_78,0xffffffff,0xffffffff);
  }
LAB_006ab509:
  FUN_00414480(&local_98);
  FUN_00414560(&local_80,0xb);
  return;
}

