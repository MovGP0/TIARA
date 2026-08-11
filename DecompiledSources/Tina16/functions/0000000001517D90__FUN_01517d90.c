/* Ghidra address: 01517d90 */
/* Ghidra symbol: FUN_01517d90 */


void FUN_01517d90(longlong *param_1,longlong *param_2,undefined1 *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int local_4c;
  undefined8 local_48;
  int local_3c [3];
  
  local_48 = 0;
  if (((*(longlong *)PTR_DAT_020027c0 != 0) && (param_1[1] != 0)) &&
     (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_020027c0 + 8) + 0x434) == '\n')) {
    lVar3 = *(longlong *)PTR_DAT_020027c0;
    param_1[0x1a] = lVar3;
    FUN_01cc6020(lVar3);
    if (*param_2 != 0) {
      FUN_01cc6030(*param_2);
    }
    lVar3 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,10,0,0);
    *param_2 = lVar3;
    FUN_01cc6020(*param_2);
    local_3c[0] = 0;
    local_4c = 0;
    FUN_01cc5c60(*(undefined8 *)PTR_DAT_020027c0);
    do {
      lVar3 = FUN_01cc5cc0(*(undefined8 *)PTR_DAT_020027c0);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x18) != '\0')) {
        FUN_01cc0ae0(lVar3,&local_48);
        FUN_01516e00(&local_48);
        cVar1 = (**(code **)(*param_1 + 0x40))(param_1,local_48,local_3c);
        if (cVar1 != '\0') {
          uVar4 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],local_3c[0]);
          lVar5 = FUN_004113f0(uVar4,&PTR_FUN_01106728);
          *(longlong *)(lVar5 + 0x58) = lVar3;
          *(int *)(lVar5 + 0x110) = local_4c;
          local_4c = local_4c + 1;
          uVar4 = FUN_01cc9f30(&PTR_FUN_01cbae98,1,param_1[0x1a]);
          *(undefined8 *)(lVar5 + 0xa8) = uVar4;
          *(undefined8 *)(lVar5 + 0x128) = 0;
          *(undefined8 *)(lVar5 + 0x118) = 0;
          *(undefined1 *)(lVar5 + 0x120) = 0;
          *(undefined1 *)(lVar5 + 0x114) = 0;
        }
      }
    } while (lVar3 != 0);
    local_4c = 0;
    uVar4 = *(undefined8 *)(*param_2 + 8);
    iVar2 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
    local_3c[0] = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar6 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],local_3c[0]);
        plVar7 = (longlong *)FUN_004113f0(uVar6,&PTR_FUN_01106728);
        if (plVar7[0xb] != 0) {
          lVar3 = FUN_01cc34d0(uVar4,plVar7[1],0,2);
          (**(code **)(*plVar7 + 0x10))(plVar7,lVar3);
          *(undefined1 *)(lVar3 + 0x18) = *(undefined1 *)((longlong)plVar7 + 0x11);
          *(int *)(plVar7 + 0x22) = local_4c;
          local_4c = local_4c + 1;
        }
        local_3c[0] = local_3c[0] + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *param_3 = 1;
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  FUN_00414480(&local_48);
  return;
}

