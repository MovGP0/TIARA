/* Ghidra address: 01be67b0 */
/* Ghidra symbol: FUN_01be67b0 */


void FUN_01be67b0(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  code *pcVar11;
  
  uVar1 = *(ushort *)(param_2 + 8);
  if (uVar1 < 0x29) {
    if (uVar1 == 0x28) {
      if ((*(short *)(param_2 + 8) == 0x28) && ((char)param_1[0xb2] != '\0')) {
        lVar7 = FUN_01be2d90(param_1);
        lVar10 = FUN_01c01230(param_1);
        if ((lVar7 == lVar10) || (uVar9 = FUN_007f9a50(), (uVar9 & 4) != 0)) {
          lVar7 = param_1[0xce];
          pcVar11 = (code *)FUN_00411550(lVar7,0xffea);
          (*pcVar11)(lVar7);
          lVar7 = FUN_01c01290(param_1);
          FUN_01be4230(param_1,*(undefined8 *)(lVar7 + 0x80));
          return;
        }
      }
    }
    else if (uVar1 == 0x25) {
      if (param_1[0xc6] == 0) {
        plVar2 = (longlong *)param_1[0xb5];
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + -0x40))(plVar2,param_2);
        }
      }
      else {
        *(undefined1 *)(param_1[0xc6] + 0x592) = 0;
        param_1[0xc6] = 0;
        *(undefined8 *)(param_2 + 0x18) = 0;
      }
    }
    else if (uVar1 == 0x27) {
      lVar7 = FUN_01be2d90(param_1);
      if (lVar7 == 0) {
        plVar2 = (longlong *)param_1[0xba];
        if (plVar2 != param_1) {
          (**(code **)(*plVar2 + -0x40))(plVar2,param_2);
        }
      }
      else {
        cVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
        if (cVar3 != '\0') {
          uVar8 = FUN_01be2d90(param_1);
          cVar3 = FUN_01bfaa20(uVar8);
          if ((cVar3 == '\0') && (lVar7 = FUN_01be2d90(param_1), *(char *)(lVar7 + 0x94) == '\0')) {
            uVar8 = FUN_01be2d90(param_1);
            lVar7 = FUN_01bfd980(uVar8);
            if ((lVar7 == 0) && (uVar9 = FUN_007f9a50(), (uVar9 & 4) != 0)) {
              uVar8 = FUN_01be2d90(param_1);
              uVar8 = FUN_01bfaa70(uVar8);
              FUN_01bfb850(uVar8);
              lVar7 = FUN_01be2d90(param_1);
              (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x180))(*(longlong **)(lVar7 + 0x80));
            }
          }
        }
        uVar8 = FUN_01be2d90(param_1);
        cVar3 = FUN_01bfaa20(uVar8);
        if ((cVar3 != '\0') && (lVar7 = FUN_01be2d90(param_1), *(longlong *)(lVar7 + 0x30) == 0)) {
          lVar7 = FUN_01be2d90(param_1);
          cVar3 = (**(code **)(**(longlong **)(lVar7 + 0x80) + 0xf0))(*(longlong **)(lVar7 + 0x80));
          if ((cVar3 != '\0') || (cVar3 = (**(code **)(*param_1 + 0x2c8))(param_1), cVar3 != '\0'))
          {
            lVar7 = FUN_01be2d90(param_1);
            (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x268))(*(longlong **)(lVar7 + 0x80));
            goto LAB_01be6b1d;
          }
        }
        if (param_1[0xc9] == 0) {
          (**(code **)(*(longlong *)param_1[0xba] + -0x40))((longlong *)param_1[0xba],param_2);
        }
      }
    }
  }
  else if (uVar1 == 0x2d) {
    if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
      return;
    }
    lVar7 = FUN_01be2d90(param_1);
    if (lVar7 == 0) {
      return;
    }
    uVar8 = FUN_01be2d90(param_1);
    iVar5 = FUN_004b1870(uVar8);
    uVar9 = FUN_007f9a50();
    if ((uVar9 & 1) != 0) {
      iVar5 = iVar5 + 1;
    }
    uVar8 = FUN_01bfaa70(param_1[0x93]);
    lVar7 = FUN_004b23b0(uVar8,iVar5);
    (**(code **)(**(longlong **)(lVar7 + 0x80) + 600))(*(longlong **)(lVar7 + 0x80),1);
    FUN_01bf6300(param_1);
  }
  else if (((uVar1 == 0x6d) && (cVar3 = (**(code **)(*param_1 + 0x2c8))(param_1), cVar3 != '\0')) &&
          (lVar7 = FUN_01be2d90(param_1), lVar7 != 0)) {
    uVar8 = FUN_01c019a0(param_1);
    uVar6 = FUN_01be2d90(param_1);
    uVar4 = FUN_004b1870(uVar6);
    lVar7 = FUN_004b23b0(uVar8,uVar4);
    FUN_01bfdfd0(lVar7,&DAT_01be6b3c);
    FUN_0064dbe0(*(undefined8 *)(lVar7 + 0x80),1);
    (**(code **)(**(longlong **)(lVar7 + 0x80) + 600))(*(longlong **)(lVar7 + 0x80),1);
    FUN_01bf6300(param_1);
  }
LAB_01be6b1d:
  FUN_01be46f0(param_1,param_2);
  return;
}

