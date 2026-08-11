/* Ghidra address: 019d4b00 */
/* Ghidra symbol: FUN_019d4b00 */


void FUN_019d4b00(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (*(char *)(param_1 + 0x812) != '\0') {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))(*(longlong **)(param_1 + 0x720))
    ;
    if (iVar1 == 0) {
      dVar3 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6b8));
      dVar4 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6c8));
      dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6d8));
      dVar6 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6e8));
      if ((1e-06 <= dVar5) && (1e-06 <= dVar6)) {
        dVar5 = (double)FUN_00f12170(dVar6 / dVar5);
        FUN_00b90440(*(undefined8 *)(param_1 + 0x708),(dVar4 - dVar3) / dVar5);
      }
    }
    else {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                        (*(longlong **)(param_1 + 0x720));
      if (iVar1 == 1) {
        dVar3 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6c8));
        dVar4 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6b8));
        dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6e8));
        dVar6 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6d8));
        if ((1e-06 <= dVar5) && (1e-06 <= dVar6)) {
          dVar5 = (double)FUN_00f12170(dVar6 / dVar5);
          FUN_00b90440(*(undefined8 *)(param_1 + 0x708),(dVar4 - dVar3) / dVar5);
        }
      }
      else {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                          (*(longlong **)(param_1 + 0x720));
        if (iVar1 == 2) {
          dVar3 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6b8));
          dVar4 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6c8));
          dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6d8));
          dVar6 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6e8));
          FUN_00b90090(*(undefined8 *)(param_1 + 0x760));
          dVar7 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x770));
          if (((1e-06 <= dVar5) && (1e-06 <= dVar7)) && (1e-06 <= dVar6)) {
            dVar5 = (double)FUN_00f12170(dVar6 / dVar5);
            FUN_00b90440(*(undefined8 *)(param_1 + 0x708),(dVar4 - dVar3) / dVar5);
            dVar5 = (double)FUN_00f12170(dVar7 / dVar6);
            FUN_00b90440(*(undefined8 *)(param_1 + 0x780),(dVar4 - dVar3) / dVar5);
          }
        }
        else {
          iVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                            (*(longlong **)(param_1 + 0x720));
          if (iVar1 == 3) {
            dVar3 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6b8));
            dVar4 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6c8));
            dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6d8));
            dVar6 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6e8));
            dVar7 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x760));
            dVar8 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x770));
            if (((1e-06 <= dVar6) && (1e-06 <= dVar7)) && (1e-06 <= dVar5)) {
              dVar5 = (double)FUN_00f12170(dVar6 / dVar5);
              FUN_00b90440(*(undefined8 *)(param_1 + 0x708),(dVar3 - dVar4) / dVar5);
              dVar5 = (double)FUN_00f12170(dVar8 / dVar6);
              FUN_00b90440(*(undefined8 *)(param_1 + 0x780),(dVar3 - dVar4) / dVar5);
            }
          }
          else {
            uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"CalcRatio");
            FUN_004134c0(uVar2);
          }
        }
      }
    }
  }
  return;
}

