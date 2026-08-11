/* Ghidra address: 01ae31b0 */
/* Ghidra symbol: FUN_01ae31b0 */


void FUN_01ae31b0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  code *local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  local_28 = 0;
  local_20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  cVar1 = FUN_01acff30(param_1,&local_20);
  if (cVar1 == '\x01') {
    uVar3 = FUN_004aeac0(local_20,0);
    uVar3 = FUN_01cd6670(uVar3);
    if ((byte)uVar3 < 8) {
      bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << ((byte)uVar3 & 0x1f) & 0xa6U) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      uVar3 = FUN_004aeac0(local_20,0);
      FUN_01cd3b70(uVar3,*(undefined8 *)(param_1 + 0x80));
    }
    uVar3 = FUN_004aeac0(local_20,0);
    FUN_01a8dee0(*(undefined8 *)(param_1 + 0xe8),uVar3);
  }
  else if (cVar1 == '\0') {
    plVar5 = *(longlong **)(param_1 + 0xd8);
    iVar2 = (**(code **)(*plVar5 + 0x28))(plVar5);
    if (iVar2 == 1) {
      lVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,0);
      iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x28))(*(longlong **)(lVar4 + 0x78));
      if (iVar2 == 1) {
        lVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,0);
        uVar3 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x30))(*(longlong **)(lVar4 + 0x78),0);
        FUN_01cd3b70(uVar3,*(undefined8 *)(param_1 + 0x80));
        local_28 = (**(code **)(*plVar5 + 0x30))(plVar5,0);
        if (*(longlong *)(param_1 + 0xf0) != 0) {
          FUN_01a8dee0(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0));
        }
        if (*(longlong *)(param_1 + 0xf8) != 0) {
          FUN_01a8dee0(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf8));
        }
        lVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,0);
        uVar3 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x30))(*(longlong **)(lVar4 + 0x78),0);
        FUN_01a8dee0(*(undefined8 *)(param_1 + 0xe8),uVar3);
        lVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,0);
        lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x30))(*(longlong **)(lVar4 + 0x78),0);
        if (*(longlong *)(lVar4 + 0x118) != 0) {
          lVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,0);
          lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x30))
                            (*(longlong **)(lVar4 + 0x78),0);
          FUN_01cd3b70(*(undefined8 *)(lVar4 + 0x118),*(undefined8 *)(param_1 + 0x80));
          lVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,0);
          lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x30))
                            (*(longlong **)(lVar4 + 0x78),0);
          FUN_01a8dee0(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(lVar4 + 0x118));
        }
      }
    }
  }
  else if (cVar1 == '\x02') {
    uVar3 = FUN_004aeac0(local_20,0);
    cVar1 = FUN_01ad1090(param_1,uVar3,&local_28);
    if (cVar1 != '\0') {
      if (*(byte *)(local_28 + 0x58) < 8) {
        bVar6 = ((int)CONCAT71((int7)((ulonglong)local_28 >> 8),1) <<
                 (*(byte *)(local_28 + 0x58) & 0x1f) & 0x61U) != 0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        lVar4 = FUN_004aeac0(local_20,0);
        FUN_01cd3b70(*(undefined8 *)(lVar4 + 0x100),*(undefined8 *)(param_1 + 0x80));
        lVar4 = FUN_004aeac0(local_20,0);
        FUN_01a8dee0(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(lVar4 + 0x100));
      }
      else {
        lVar4 = FUN_004aeac0(local_20,0);
        FUN_01cd3b70(*(undefined8 *)(lVar4 + 0xf0),*(undefined8 *)(param_1 + 0x80));
        lVar4 = FUN_004aeac0(local_20,0);
        FUN_01a8dee0(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(lVar4 + 0xf0));
      }
    }
  }
  if (*(int *)(local_20 + 0x10) < 1) {
LAB_01ae34b6:
    if (local_28 == 0) goto LAB_01ae3555;
  }
  else {
    uVar3 = FUN_004aeac0(local_20,0);
    cVar1 = FUN_01ad1090(param_1,uVar3,&local_28);
    if (cVar1 == '\0') goto LAB_01ae34b6;
  }
  lVar4 = (**(code **)(**(longlong **)(local_28 + 0x88) + 0x30))(*(longlong **)(local_28 + 0x88),0);
  if (lVar4 != 0) {
    plVar5 = (longlong *)
             (**(code **)(**(longlong **)(local_28 + 0x88) + 0x30))
                       (*(longlong **)(local_28 + 0x88),0);
    (**(code **)(*plVar5 + 0x78))(plVar5,*(undefined8 *)(param_1 + 0x80));
    plVar5 = (longlong *)
             (**(code **)(**(longlong **)(local_28 + 0x88) + 0x30))
                       (*(longlong **)(local_28 + 0x88),0);
    (**(code **)(*plVar5 + 0xc0))
              (plVar5,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x78));
    plVar5 = (longlong *)
             (**(code **)(**(longlong **)(local_28 + 0x88) + 0x30))
                       (*(longlong **)(local_28 + 0x88),0);
    (**(code **)(*plVar5 + 0x70))(plVar5,*(undefined8 *)(param_1 + 0x80));
  }
LAB_01ae3555:
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  FUN_00742eb0(uVar3,0);
  FUN_00742ed0(uVar3,500);
  local_38 = FUN_01ae5d60;
  local_30 = param_1;
  FUN_00742ef0(uVar3,&local_38);
  FUN_00742eb0(uVar3,1);
  FUN_00410f20(local_20);
  return;
}

