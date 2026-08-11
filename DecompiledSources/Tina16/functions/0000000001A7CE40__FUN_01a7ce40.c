/* Ghidra address: 01a7ce40 */
/* Ghidra symbol: FUN_01a7ce40 */


void FUN_01a7ce40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  FUN_01aee720(local_30,0x406,*(undefined4 *)(param_1 + 0x6b8),L"DFPrintPreviewMnu");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_30[0]);
  FUN_007e2d20(*(longlong *)(param_1 + 0x910),
               *(char *)(*(longlong *)(param_1 + 0x910) + 0x80) == '\0');
  if (*(char *)(*(longlong *)(param_1 + 0x910) + 0x80) == '\0') {
    FUN_0064e030(param_1,0xff00000f);
    FUN_006d8180(*(undefined8 *)(param_1 + 0xa70),0);
    FUN_005fd640(*(undefined8 *)(*(longlong *)(param_1 + 0x780) + 0x78),4);
    FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x780) + 0x78),0xffffff);
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x780) + 0x80),0xffffff);
    FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_1 + 0x780) + 0x80),0);
    uVar3 = FUN_0064d0b0(param_1);
    uVar4 = FUN_0064d120(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x780) + 0xf8))
              (*(longlong **)(param_1 + 0x780),0,0,uVar3,uVar4);
    lVar1 = *(longlong *)(param_1 + 0x7a0);
    iVar5 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x28))();
    iVar7 = 0;
    if (-1 < iVar5 + -1) {
      do {
        plVar2 = *(longlong **)(lVar1 + 0x10);
        lVar6 = (**(code **)(*plVar2 + 0x30))(plVar2,iVar7);
        *(undefined1 *)(lVar6 + 0xb0) = 0;
        *(undefined4 *)(lVar6 + 0x100) = 0;
        *(undefined4 *)(lVar6 + 0x104) = 0;
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_01a77f90(param_1,param_2);
  }
  else {
    FUN_0064e030(param_1,0x808080);
    FUN_006d8180(*(undefined8 *)(param_1 + 0xa70),1);
    FUN_005fd640(*(undefined8 *)(*(longlong *)(param_1 + 0x780) + 0x78),4);
    FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x780) + 0x78),0x808080);
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x780) + 0x80),0x808080);
    FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_1 + 0x780) + 0x80),0);
    uVar3 = FUN_0064d0b0(param_1);
    uVar4 = FUN_0064d120(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x780) + 0xf8))
              (*(longlong **)(param_1 + 0x780),0,0,uVar3,uVar4);
    lVar1 = *(longlong *)(param_1 + 0x7a0);
    iVar5 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x28))();
    iVar7 = 0;
    if (-1 < iVar5 + -1) {
      do {
        plVar2 = *(longlong **)(lVar1 + 0x10);
        lVar6 = (**(code **)(*plVar2 + 0x30))(plVar2,iVar7);
        *(undefined1 *)(lVar6 + 0xb0) = 1;
        *(undefined4 *)(lVar6 + 0x100) = 0;
        *(undefined4 *)(lVar6 + 0x104) = 0;
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_01a77f90(param_1,param_2);
  }
  FUN_00414480(local_30);
  return;
}

