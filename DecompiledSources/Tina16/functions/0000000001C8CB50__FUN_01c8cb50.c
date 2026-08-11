/* Ghidra address: 01c8cb50 */
/* Ghidra symbol: FUN_01c8cb50 */


void FUN_01c8cb50(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auStack_98 [43];
  char local_6d;
  int local_6c;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  char local_42;
  char local_41;
  
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_6c = param_2;
  FUN_01c87d20(param_1);
  FUN_010e33a0();
  iVar2 = local_6c;
  if (local_6c == -1) {
    iVar2 = FUN_01c8a290(param_1,*(undefined8 *)(param_1 + 0x2770),0);
  }
  local_41 = '\0';
  local_42 = '\0';
  puVar6 = (undefined8 *)0x0;
  if (iVar2 == -1) {
    iVar2 = 1;
  }
  else {
    lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar2);
    if (*(longlong *)(lVar3 + 0x28) == 0) {
      local_6d = '\x01';
      if (local_6c == -1) goto LAB_01c8cea6;
      FUN_010e1210(*(undefined8 *)(lVar3 + 0x9a0));
      FUN_00410f20(*(undefined8 *)(lVar3 + 0x9a0));
      *(undefined8 *)(lVar3 + 0x9a0) = 0;
      iVar7 = 0;
      while (iVar7 < *(int *)(*(longlong *)(param_1 + 0x2780) + 0x10)) {
        lVar4 = FUN_004aeac0(*(longlong *)(param_1 + 0x2780),iVar7);
        if ((*(longlong *)(lVar4 + 0x10) == *(longlong *)(lVar3 + 0x10)) &&
           (*(longlong *)(lVar4 + 0x28) != 0)) {
          uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar7);
          FUN_01c8c9a0(auStack_98,uVar5);
        }
        else {
          iVar7 = iVar7 + 1;
        }
      }
    }
    else {
      iVar2 = *(int *)(lVar3 + 0x3c);
      cVar1 = FUN_0199e300(*(undefined8 *)(lVar3 + 8));
      if (cVar1 != '\0') {
        FUN_0199e310(*(undefined8 *)(lVar3 + 0x10),0,1,0);
      }
      if (iVar2 == -1) {
        lVar4 = FUN_01c988d0(param_1,*(undefined8 *)(lVar3 + 8));
        iVar2 = FUN_01c8a290(param_1,*(undefined8 *)(lVar4 + 0x28),*(undefined8 *)(lVar4 + 0x10));
      }
      local_6d = *(char *)(lVar3 + 0x978);
    }
    if (local_6d != '\0') {
      puVar6 = *(undefined8 **)(lVar3 + 0x10);
    }
    FUN_01c8c9a0(auStack_98,lVar3);
  }
  if (local_6d != '\0') {
    iVar2 = FUN_01c98800(param_1,iVar2);
    iVar2 = iVar2 + -1;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x2780) + 0x10);
  if (iVar7 <= iVar2) {
    iVar2 = iVar7 + -1;
  }
  if (iVar2 < 0) {
    FUN_014a1260(0,local_60);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0xa10),1);
    *(undefined8 *)(param_1 + 0x27a8) = 0;
    *(undefined8 *)(param_1 + 0x2788) = 0;
    *(undefined8 *)(param_1 + 0x2768) = 0;
    *(undefined8 *)(param_1 + 0x2770) = 0;
    *(undefined8 *)(param_1 + 0x2790) = 0;
    *(undefined8 *)(param_1 + 0x1b38) = 0;
  }
  else {
    lVar3 = FUN_004aeac0(*(longlong *)(param_1 + 0x2780),iVar2);
    lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar2);
    FUN_01c8ab30(param_1,*(undefined8 *)(lVar3 + 0x28),*(undefined8 *)(lVar4 + 0x10));
  }
  if (*(longlong *)PTR_DAT_020057d0 != 0) {
    if (local_41 == '\0') {
      cVar1 = FUN_01c98850(param_1,2);
      if (cVar1 == '\0') goto LAB_01c8ce41;
    }
    FUN_00805200(*(undefined8 *)PTR_DAT_020057d0);
  }
LAB_01c8ce41:
  if (*(longlong *)PTR_DAT_02005100 != 0) {
    if (local_42 == '\0') {
      cVar1 = FUN_01c98850(param_1,3);
      if ((cVar1 == '\0') && (cVar1 = FUN_01c98850(param_1,4), cVar1 == '\0')) goto LAB_01c8ce87;
    }
    FUN_00805200(*(undefined8 *)PTR_DAT_02005100);
  }
LAB_01c8ce87:
  if (puVar6 != (undefined8 *)0x0) {
    uVar5 = (**(code **)*puVar6)(puVar6);
    FUN_00418590(uVar5,&DAT_01984da0);
  }
LAB_01c8cea6:
  FUN_00414560(&local_60,3);
  return;
}

