/* Ghidra address: 00af1c20 */
/* Ghidra symbol: FUN_00af1c20 */


void FUN_00af1c20(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  int local_88;
  longlong local_70;
  undefined1 local_68 [28];
  undefined1 local_4c [16];
  undefined4 local_3c [2];
  int local_34;
  int local_30;
  char local_2c;
  char local_2b;
  
  iVar6 = *(int *)(param_1 + 0x918);
  if (99999 < iVar6) {
    iVar6 = 100000;
  }
  *(int *)(param_1 + 0x918) = iVar6;
  local_70 = param_1;
  FUN_00af1a50(param_1,local_3c,iVar6,*(undefined4 *)(param_1 + 0x908));
  iVar4 = local_30;
  iVar6 = local_34;
  uVar3 = local_3c[0];
  local_88 = local_30;
  FUN_004238d0(local_4c,local_3c[0],local_3c[0],local_34);
  local_88 = iVar4;
  (**(code **)(**(longlong **)(local_70 + 0x740) + 400))
            (*(longlong **)(local_70 + 0x740),uVar3,uVar3,iVar6);
  FUN_0064d000(*(undefined8 *)(local_70 + 0x740),local_68);
  cVar5 = FUN_00af1bf0(auStack_a8,local_4c,local_68);
  if (cVar5 == '\0') {
    iVar6 = *(int *)(local_70 + 0x918);
    if (99999 < iVar6) {
      iVar6 = 100000;
    }
    *(int *)(local_70 + 0x918) = iVar6;
    FUN_00af1a50(local_70,local_3c,iVar6,*(undefined4 *)(local_70 + 0x908));
    iVar4 = local_30;
    iVar6 = local_34;
    local_88 = local_30;
    FUN_004238d0(local_4c,local_3c[0],local_3c[0],local_34);
    local_88 = iVar4;
    (**(code **)(**(longlong **)(local_70 + 0x740) + 400))
              (*(longlong **)(local_70 + 0x740),local_3c[0],local_3c[0],iVar6);
  }
  FUN_0064dbe0(*(undefined8 *)(local_70 + 0x750),local_2c);
  if ((local_2c != '\0') || ((*(ushort *)(local_70 + 0x34) & 0x10) != 0)) {
    lVar1 = *(longlong *)(local_70 + 0x740);
    local_88 = *(int *)(local_70 + 0x760);
    (**(code **)(**(longlong **)(local_70 + 0x750) + 400))
              (*(longlong **)(local_70 + 0x750),*(undefined4 *)(lVar1 + 0x90),
               *(int *)(lVar1 + 0x94) + *(int *)(lVar1 + 0x9c),*(undefined4 *)(lVar1 + 0x98));
    plVar2 = *(longlong **)(local_70 + 0x750);
    iVar6 = local_34 - (uint)*(ushort *)(plVar2 + 0x95);
    if (iVar6 < 0x10) {
      iVar6 = 0x10;
    }
    *(short *)((longlong)plVar2 + 0x4aa) = (short)iVar6;
    (**(code **)(*plVar2 + 0x128))(plVar2,local_34 < *(int *)(local_70 + 0x918));
  }
  iVar6 = *(int *)(local_70 + 0x918);
  if (iVar6 <= local_34) {
    local_34 = iVar6;
  }
  FUN_00af1ba0(auStack_a8,*(undefined8 *)(local_70 + 0x750),local_34,iVar6);
  FUN_0064dbe0(*(undefined8 *)(local_70 + 0x758),local_2b);
  if ((local_2b != '\0') || ((*(ushort *)(local_70 + 0x34) & 0x10) != 0)) {
    lVar1 = *(longlong *)(local_70 + 0x740);
    local_88 = *(int *)(lVar1 + 0x9c);
    (**(code **)(**(longlong **)(local_70 + 0x758) + 400))
              (*(longlong **)(local_70 + 0x758),*(int *)(lVar1 + 0x90) + *(int *)(lVar1 + 0x98),
               *(undefined4 *)(lVar1 + 0x94),*(undefined4 *)(local_70 + 0x760));
    plVar2 = *(longlong **)(local_70 + 0x758);
    iVar6 = local_30 - (uint)*(ushort *)(plVar2 + 0x95);
    if (iVar6 < 0x10) {
      iVar6 = 0x10;
    }
    *(short *)((longlong)plVar2 + 0x4aa) = (short)iVar6;
    (**(code **)(*plVar2 + 0x128))(plVar2,local_30 < *(int *)(local_70 + 0x908));
  }
  iVar6 = *(int *)(local_70 + 0x908);
  if (iVar6 <= local_30) {
    local_30 = iVar6;
  }
  FUN_00af1ba0(auStack_a8,*(undefined8 *)(local_70 + 0x758),local_30,iVar6);
  return;
}

