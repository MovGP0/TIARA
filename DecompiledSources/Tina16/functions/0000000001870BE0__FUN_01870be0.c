/* Ghidra address: 01870be0 */
/* Ghidra symbol: FUN_01870be0 */


void FUN_01870be0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = 0;
  local_30 = 0;
  uVar5 = *(undefined8 *)(param_1 + 8);
  cVar2 = FUN_004113d0(uVar5,&PTR_FUN_01921f40);
  if (cVar2 != '\0') {
    uVar4 = FUN_01870e20(param_1);
    FUN_0195a600(uVar5,uVar4);
    plVar1 = *(longlong **)(param_1 + 0x78);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_30,uVar3);
    FUN_00414ad0(*(longlong *)(param_1 + 8) + 0x1a8,local_30);
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x10);
    iVar7 = 0;
    if (-1 < iVar8 + -1) {
      do {
        uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x60),iVar7);
        uVar4 = FUN_00410ad0(*(undefined8 *)(param_1 + 8));
        cVar2 = FUN_004113d0(uVar5,uVar4);
        if (cVar2 != '\0') {
          uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x60),iVar7);
          uVar4 = FUN_01870e20(param_1);
          FUN_0195a600(uVar5,uVar4);
          lVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x60),iVar7);
          plVar1 = *(longlong **)(param_1 + 0x78);
          uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
          (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_38,uVar3);
          FUN_00414ad0(lVar6 + 0x1a8,local_38);
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  *(undefined1 *)(param_1 + 0x73) = 1;
  FUN_00805990(*(undefined8 *)(param_1 + 0xa0));
  FUN_00414560(&local_38,2);
  return;
}

