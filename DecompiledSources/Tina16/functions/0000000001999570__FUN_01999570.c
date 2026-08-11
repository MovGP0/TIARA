/* Ghidra address: 01999570 */
/* Ghidra symbol: FUN_01999570 */


void FUN_01999570(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  int local_54;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  local_54 = -1;
  bVar4 = false;
LAB_019995ab:
  do {
    local_54 = local_54 + 1;
    if (local_54 < *(int *)(*(longlong *)(param_1 + 0xd0) + 0x10)) {
      uVar11 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_54);
      cVar5 = FUN_0198a580(uVar11);
      if (cVar5 != '\x04') goto LAB_019995ab;
    }
    if (local_54 < *(int *)(*(longlong *)(param_1 + 0xd0) + 0x10)) {
      uVar11 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_54);
      cVar5 = FUN_0198a580(uVar11);
      if (cVar5 == '\x04') {
        uVar11 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_54);
        cVar5 = FUN_01d01970(uVar11);
        if (cVar5 != '\0') {
          plVar12 = (longlong *)FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_54);
          iVar6 = FUN_019954d0(*(undefined8 *)(param_1 + 0xd0));
          FUN_01d01900(plVar12,iVar6 + 1);
          (**(code **)(*plVar12 + 0x288))(plVar12,local_40);
          FUN_01d00bc0(plVar12);
          uVar1 = *(ushort *)((longlong)plVar12 + 0xf4);
          uVar2 = *(ushort *)((longlong)plVar12 + 0xf6);
          iVar7 = FUN_01d01940(plVar12);
          iVar8 = FUN_01d01910(plVar12);
          iVar9 = FUN_019954a0(*(undefined8 *)(param_1 + 0xd0));
          FUN_019954b0(*(undefined8 *)(param_1 + 0xd0),iVar6 + iVar8 + (uint)uVar1 + (uint)uVar2);
          FUN_01995490(*(undefined8 *)(param_1 + 0xd0),iVar9 + iVar7 + (uint)uVar1 + -1);
        }
      }
      uVar11 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_54);
      cVar5 = FUN_0198a580(uVar11);
      if (cVar5 == '\x04') {
        uVar11 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_54);
        cVar5 = FUN_01d04d40(uVar11);
        if (((cVar5 != '\0') &&
            (lVar13 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_54),
            *(char *)(*(longlong *)(lVar13 + 0x1a8) + 0x70) != '\x03')) &&
           ((lVar13 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_54),
            (*(ushort *)(param_1 + 0xf8) & 1) == 0 ||
            ((*(char *)(*(longlong *)(lVar13 + 0x1a8) + 0x70) != '\x02' ||
             (plVar12 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 0x458),
             iVar6 = (**(code **)(*plVar12 + 0xb0))
                               (plVar12,*(undefined8 *)(*(longlong *)(lVar13 + 0x1a8) + 0x40)),
             iVar6 == -1)))))) {
          iVar6 = FUN_019954d0(*(undefined8 *)(param_1 + 0xd0));
          lVar3 = *(longlong *)(lVar13 + 0x1a8);
          *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_1 + 0x100);
          *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_1 + 0xd0);
          *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(param_1 + 0xe8);
          FUN_01d04e00(lVar13,iVar6 + 1);
          FUN_01d04e70(lVar13,*(undefined1 *)(param_1 + 0xe0),*(undefined2 *)(param_1 + 0xf8),
                       *(undefined1 *)(param_1 + 0x108));
          iVar7 = FUN_019954a0(*(undefined8 *)(param_1 + 0xd0));
          iVar8 = FUN_01d04fe0(lVar13);
          FUN_019954b0(*(undefined8 *)(param_1 + 0xd0),iVar6 + iVar8);
          iVar6 = FUN_01d05010(lVar13);
          FUN_01995490(*(undefined8 *)(param_1 + 0xd0),iVar7 + iVar6);
          if (*(char *)(lVar13 + 0x1a0) == '\x02') {
            uVar11 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_54);
            FUN_019952b0(*(undefined8 *)(param_1 + 0x100),uVar11);
          }
        }
      }
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar10 = FUN_019954d0(*(undefined8 *)(param_1 + 0xd0));
      *(undefined4 *)PTR_DAT_02005898 = uVar10;
      FUN_00414480(local_40);
      return;
    }
  } while( true );
}

