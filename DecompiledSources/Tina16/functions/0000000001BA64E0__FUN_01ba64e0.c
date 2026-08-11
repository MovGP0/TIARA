/* Ghidra address: 01ba64e0 */
/* Ghidra symbol: FUN_01ba64e0 */


void FUN_01ba64e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined8 local_50 [2];
  undefined1 local_3c [12];
  
  local_50[0] = 0;
  plVar1 = *(longlong **)(param_1 + 0x6e0);
  uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],local_50,uVar4);
  iVar5 = FUN_0043fc00(local_50[0]);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4f0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  FUN_004b3260(*(undefined8 *)(*(longlong *)(param_1 + 0x6d0) + 0x4f0));
  iVar10 = *(int *)(*(longlong *)(param_1 + 0x758) + 0x10);
  iVar9 = 0;
  if (-1 < iVar10 + -1) {
    do {
      lVar8 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x758),iVar9);
      iVar6 = FUN_00c41060(lVar8,local_3c);
      if (*(longlong *)(param_1 + 0x760) == 0) {
        bVar11 = true;
      }
      else {
        lVar2 = *(longlong *)(lVar8 + 0x20);
        lVar3 = *(longlong *)(param_1 + 0x760);
        if (lVar2 == lVar3) {
          bVar11 = true;
        }
        else if ((lVar2 == 0) || (lVar3 == 0)) {
          bVar11 = false;
        }
        else {
          iVar7 = FUN_0043e420(lVar2,lVar3);
          bVar11 = iVar7 == 0;
        }
      }
      if ((bVar11) && (iVar6 == iVar5)) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4f0);
        (**(code **)(*plVar1 + 0x80))(plVar1,*(undefined8 *)(lVar8 + 0x10),lVar8);
      }
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  FUN_004b3390(*(undefined8 *)(*(longlong *)(param_1 + 0x6d0) + 0x4f0));
  (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x268))(*(longlong **)(param_1 + 0x6d0),0);
  FUN_01ba83f0(param_1,0);
  (**(code **)(**(longlong **)(param_1 + 0x718) + 0x128))(*(longlong **)(param_1 + 0x718),0);
  FUN_00414480(local_50);
  return;
}

