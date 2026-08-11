/* Ghidra address: 01508260 */
/* Ghidra symbol: FUN_01508260 */


void FUN_01508260(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  plVar1 = *(longlong **)(param_1 + 0x7d8);
  iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  if (iVar2 != -1) {
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    uVar6 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar3);
    *(undefined8 *)(param_1 + 0x870) = uVar6;
    if (*(char *)(*(longlong *)(param_1 + 0xbc8) + 0x328) == '\0') {
      iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
      if (iVar2 < *(int *)(param_1 + 0xc0c)) {
        (**(code **)(*plVar1 + 0x268))(plVar1,*(int *)(param_1 + 0xc0c));
        FUN_010e4210(param_1,0,1);
      }
      if (*(longlong *)(param_1 + 0xc18) == 0) {
        iVar2 = *(int *)(param_1 + 0xc0c);
        do {
          iVar4 = iVar2;
          iVar2 = iVar4 + 1;
          iVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
          if (iVar5 < iVar2) break;
          uVar6 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],iVar2);
          lVar7 = FUN_004113f0(uVar6,&PTR_FUN_01106728);
        } while (*(longlong *)(lVar7 + 0x140) == 0);
        iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
        if (iVar4 < iVar2) {
          (**(code **)(*plVar1 + 0x268))(plVar1,iVar4);
          FUN_010e4210(param_1,0,1);
        }
      }
      else {
        iVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
        iVar2 = *(int *)(*(longlong *)(param_1 + 0xc18) + 0x40);
        if (iVar2 < iVar4) {
          (**(code **)(*plVar1 + 0x268))(plVar1,iVar2);
          FUN_010e4210(param_1,0,1);
        }
      }
      uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      *(undefined4 *)(param_1 + 0xc10) = uVar3;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      *(undefined4 *)(param_1 + 0xc0c) = uVar3;
      lVar7 = FUN_004113f0(*(undefined8 *)(param_1 + 0x870),&PTR_FUN_01106728);
      lVar7 = *(longlong *)(lVar7 + 0x140);
      if (lVar7 == 0) {
        *(undefined8 *)(param_1 + 0xc18) = 0;
        (**(code **)(**(longlong **)(param_1 + 0xbb0) + 0x268))
                  (*(longlong **)(param_1 + 0xbb0),0xffffffff);
        FUN_0064de00(*(undefined8 *)(param_1 + 0xbc0),0);
        FUN_0082a6c0(*(undefined8 *)(param_1 + 2000),
                     *(undefined1 *)(*(longlong *)(param_1 + 0x870) + 0x11));
      }
      else {
        *(longlong *)(param_1 + 0xc18) = lVar7;
        plVar1 = *(longlong **)(param_1 + 0xbb0);
        uVar3 = (**(code **)(*(longlong *)plVar1[0x9e] + 0xc0))((longlong *)plVar1[0x9e],lVar7);
        (**(code **)(*plVar1 + 0x268))(plVar1,uVar3);
        FUN_0064de00(*(undefined8 *)(param_1 + 0xbc0),
                     *(undefined8 *)(*(longlong *)(param_1 + 0xc18) + 8));
        FUN_0082a6c0(*(undefined8 *)(param_1 + 2000),
                     *(undefined1 *)(*(longlong *)(param_1 + 0xc18) + 0x11));
      }
      *(undefined4 *)(param_1 + 0xc10) = *(undefined4 *)(param_1 + 0xc0c);
    }
    FUN_015084f0(param_1);
    if (*(int *)(param_1 + 0xc10) == *(int *)(param_1 + 0xc0c)) {
      FUN_006807e0(*(undefined8 *)(param_1 + 0xbf8),0);
    }
    else {
      FUN_006807e0(*(undefined8 *)(param_1 + 0xbf8),1);
    }
  }
  return;
}

