/* Ghidra address: 013abbe0 */
/* Ghidra symbol: FUN_013abbe0 */


void FUN_013abbe0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_30;
  
  lVar8 = *(longlong *)(param_2 + 0x10);
  lVar1 = *(longlong *)(param_2 + 8);
  local_40 = param_1;
  local_30 = FUN_006e2530(*(undefined8 *)(param_1 + 0x6b8));
  if (lVar8 == lVar1) {
    lVar6 = FUN_006df4b0(*(undefined8 *)(*(longlong *)(local_40 + 0x6b8) + 0x550));
    if (*(longlong *)(lVar6 + 0x18) == lVar8) {
      *(undefined1 *)(local_40 + 0x6d0) = 1;
      uVar7 = FUN_006df4b0(*(undefined8 *)(*(longlong *)(local_40 + 0x6b8) + 0x550));
      FUN_006dd070(uVar7,0);
      uVar7 = FUN_006df4b0(*(undefined8 *)(*(longlong *)(local_40 + 0x6b8) + 0x550));
      FUN_006dd0c0(uVar7,1);
      uVar7 = FUN_006df4b0(*(undefined8 *)(*(longlong *)(local_40 + 0x6b8) + 0x550));
      cVar3 = FUN_013abba0(auStack_68,uVar7);
      if (cVar3 == '\0') {
        uVar7 = FUN_006df4b0(*(undefined8 *)(*(longlong *)(local_40 + 0x6b8) + 0x550));
        FUN_006dd110(uVar7,1);
      }
      *(undefined1 *)(local_40 + 0x6d0) = 0;
    }
    else {
      FUN_013ab910(local_40,lVar8,lVar1);
    }
  }
  else {
    iVar5 = FUN_006decb0();
    iVar9 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar8 = FUN_006df500(*(undefined8 *)(*(longlong *)(local_40 + 0x6b8) + 0x550),iVar9);
        plVar2 = *(longlong **)(lVar8 + 0x18);
        if (((((undefined **)*plVar2 != &PTR_FUN_01984d18) &&
             (sVar4 = (**(code **)(*plVar2 + 0xf8))(plVar2), sVar4 == 0x39)) &&
            ((char)plVar2[0x34] == '\x01')) && (*(longlong *)(plVar2[0x35] + 8) == lVar1)) {
          *(undefined1 *)(local_40 + 0x6d0) = 1;
          uVar7 = FUN_006df500(*(undefined8 *)(*(longlong *)(local_40 + 0x6b8) + 0x550),iVar9);
          FUN_006dd070(uVar7,0);
          uVar7 = FUN_006df500(*(undefined8 *)(*(longlong *)(local_40 + 0x6b8) + 0x550),iVar9);
          FUN_006dd0c0(uVar7,1);
          uVar7 = FUN_006df500(*(undefined8 *)(*(longlong *)(local_40 + 0x6b8) + 0x550),iVar9);
          cVar3 = FUN_013abba0(auStack_68,uVar7);
          if (cVar3 == '\0') {
            uVar7 = FUN_006df500(*(undefined8 *)(*(longlong *)(local_40 + 0x6b8) + 0x550),iVar9);
            FUN_006dd110(uVar7,1);
          }
          *(undefined1 *)(local_40 + 0x6d0) = 0;
          return;
        }
        iVar9 = iVar9 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

