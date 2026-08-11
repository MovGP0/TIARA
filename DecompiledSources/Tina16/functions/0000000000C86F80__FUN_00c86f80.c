/* Ghidra address: 00c86f80 */
/* Ghidra symbol: FUN_00c86f80 */


void FUN_00c86f80(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0));
  if (iVar3 == 0) {
    FUN_00414480(local_30);
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x6e0);
    uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],local_30,uVar4);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x278))(*(longlong **)(param_1 + 0x6b0));
  FUN_004b3260(*(undefined8 *)(*(longlong *)(param_1 + 0x6b0) + 0x4a0));
  iVar3 = *(int *)(*(longlong *)PTR_DAT_02004440 + 0x10);
  iVar7 = 0;
  if (-1 < iVar3 + -1) {
    do {
      cVar2 = FUN_00c40630(*(undefined8 *)PTR_DAT_02004440,iVar7,local_30[0]);
      if (cVar2 != '\0') {
        lVar6 = *(longlong *)(param_1 + 0x700);
        if (lVar6 != 0) {
          uVar5 = FUN_004aeac0(*(undefined8 *)PTR_DAT_02004440,iVar7);
          cVar2 = FUN_019a4140(lVar6,uVar5,*(undefined1 *)(param_1 + 0x708),
                               *(undefined1 *)(param_1 + 0x709));
          if (cVar2 == '\0') goto LAB_00c870f6;
        }
        lVar6 = FUN_004aeac0(*(undefined8 *)PTR_DAT_02004440,iVar7);
        uVar5 = FUN_004aeac0(*(undefined8 *)PTR_DAT_02004440,iVar7);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
        (**(code **)(*plVar1 + 0x80))(plVar1,*(undefined8 *)(lVar6 + 0x10),uVar5);
      }
LAB_00c870f6:
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004b3390(*(undefined8 *)(*(longlong *)(param_1 + 0x6b0) + 0x4a0));
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
            (*(longlong **)(param_1 + 0x6b0),0xffffffff);
  FUN_00c86f20(param_1,0);
  FUN_00414480(local_30);
  return;
}

