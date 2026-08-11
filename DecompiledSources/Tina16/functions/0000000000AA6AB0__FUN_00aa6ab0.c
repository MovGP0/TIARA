/* Ghidra address: 00aa6ab0 */
/* Ghidra symbol: FUN_00aa6ab0 */


undefined4
FUN_00aa6ab0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  code *local_38;
  longlong local_30;
  
  *(int *)(param_1 + 0x2b4) = *(int *)(param_1 + 0x2b4) + 1;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined1 *)(param_1 + 0x2dc) = 0;
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FUN_00742eb0(*(longlong *)(param_1 + 0x228),0);
  }
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x10);
  iVar7 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar3 = FUN_00ac5690(*(undefined8 *)(param_1 + 0x1b8),iVar7);
      FUN_00a990c0(uVar3,param_2);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  uVar3 = FUN_005ffa40(param_2);
  thunk_FUN_04186fad(uVar3,0,0);
  *(undefined1 *)(*(longlong *)(param_1 + 0x2d0) + 0x20) = 1;
  plVar4 = *(longlong **)(param_1 + 0x2c0);
  if ((plVar4 != (longlong *)0x0) && (iVar6 = (**(code **)(*plVar4 + 0x28))(plVar4), 0 < iVar6)) {
    iVar7 = 0;
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x2c0) + 0x28))();
    iVar8 = 0;
    if (-1 < iVar6 + -1) {
      do {
        plVar4 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0x2c0) + 0x30))
                           (*(longlong **)(param_1 + 0x2c0),iVar8);
        cVar1 = FUN_004113d0(plVar4,&PTR_FUN_00a87e18);
        if (cVar1 == '\0') {
          cVar1 = FUN_004113d0(plVar4,&PTR_FUN_00a7d108);
          if (cVar1 != '\0') {
            FUN_0065bcb0(plVar4,iVar7);
            iVar7 = iVar7 + 1;
          }
        }
        else {
          (**(code **)(*plVar4 + 0x140))(plVar4,iVar7);
          iVar7 = iVar7 + 1;
        }
        iVar8 = iVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x2c0) + 0x90))(*(longlong **)(param_1 + 0x2c0));
  }
  uVar2 = FUN_00abefc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  iVar7 = 0;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x1c0) + 0x10);
  if (-1 < iVar6 + -1) {
    do {
      lVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x1c0),iVar7);
      cVar1 = FUN_004113d0(lVar5,&PTR_FUN_00a438f8);
      if (cVar1 != '\0') {
        lVar5 = *(longlong *)(lVar5 + 0x18);
        *(undefined1 *)(lVar5 + 0xcc) = 0;
        FUN_00a089f0(lVar5,0);
        if (*(char *)(param_1 + 700) == '\0') {
          FUN_00a089f0(lVar5,1);
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if ((*(char *)(param_1 + 700) == '\0') && (*(longlong *)(param_1 + 0x228) == 0)) {
    uVar3 = FUN_00742bf0(&PTR_FUN_007334d8,1,*(undefined8 *)(param_1 + 0xb8));
    *(undefined8 *)(param_1 + 0x228) = uVar3;
    FUN_00742ed0(uVar3,0x32);
    local_38 = FUN_00aa6490;
    local_30 = param_1;
    FUN_00742ef0(*(undefined8 *)(param_1 + 0x228),&local_38);
  }
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FUN_00742eb0(*(longlong *)(param_1 + 0x228),0 < *(int *)(*(longlong *)(param_1 + 0x1c0) + 0x10))
    ;
  }
  FUN_00aa6e10(param_1);
  if ((*(char *)(param_1 + 700) == '\0') && (*(int *)(*(longlong *)(param_1 + 0x2a0) + 0x10) == 0))
  {
    FUN_00a9be10(param_1);
  }
  return uVar2;
}

