/* Ghidra address: 01be8560 */
/* Ghidra symbol: FUN_01be8560 */


void FUN_01be8560(longlong *param_1,longlong param_2)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x4c3);
  if (bVar1 < 2) {
    sVar2 = *(short *)(param_2 + 8);
    if (sVar2 == 0x25) {
      pcVar8 = (code *)FUN_00411550(param_1,0xffaa);
      (*pcVar8)(param_1,bVar1 != 0);
    }
    else {
      if (sVar2 != 0x26) {
        if (sVar2 == 0x27) {
          pcVar8 = (code *)FUN_00411550(param_1,0xffaa);
          (*pcVar8)(param_1,bVar1 == 0);
          goto LAB_01be872e;
        }
        if (sVar2 != 0x28) goto LAB_01be872e;
      }
      lVar6 = FUN_01be2d90(param_1);
      if (lVar6 != 0) {
        cVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
        if (cVar3 != '\0') {
          uVar7 = FUN_01be2d90(param_1);
          cVar3 = FUN_01bfaa20(uVar7);
          if (cVar3 == '\0') {
            uVar4 = FUN_007f9a50();
            if ((uVar4 & 4) == 0) {
              return;
            }
            uVar7 = FUN_01be2d90(param_1);
            uVar7 = FUN_01bfaa70(uVar7);
            FUN_01bfb850(uVar7);
            FUN_01bf6300(param_1);
          }
        }
        uVar7 = FUN_01be2d90(param_1);
        cVar3 = FUN_01bfaa20(uVar7);
        if (cVar3 != '\0') {
          lVar6 = FUN_01be2d90(param_1);
          plVar5 = (longlong *)
                   (**(code **)(*param_1 + 0x3a0))(param_1,param_1,*(undefined8 *)(lVar6 + 0x80));
          lVar6 = (**(code **)(*plVar5 + 0x350))(plVar5);
          (**(code **)(**(longlong **)(lVar6 + 0x80) + 600))(*(longlong **)(lVar6 + 0x80),1);
          *(undefined2 *)(param_2 + 8) = 0;
          return;
        }
      }
    }
  }
  else if ((byte)(bVar1 - 2) < 2) {
    if (*(short *)(param_2 + 8) == 0x25) {
      pcVar8 = (code *)FUN_00411550(param_1,0xffaa);
      (*pcVar8)(param_1,1);
    }
    else if ((*(short *)(param_2 + 8) == 0x27) && (lVar6 = FUN_01be2d90(param_1), lVar6 != 0)) {
      uVar7 = FUN_01be2d90(param_1);
      cVar3 = FUN_01bfaa20(uVar7);
      if (cVar3 != '\0') {
        lVar6 = FUN_01be2d90(param_1);
        (**(code **)(**(longlong **)(lVar6 + 0x80) + 0x268))(*(longlong **)(lVar6 + 0x80));
      }
    }
  }
LAB_01be872e:
  FUN_01be46f0(param_1,param_2);
  return;
}

