/* Ghidra address: 01bfe870 */
/* Ghidra symbol: FUN_01bfe870 */


void FUN_01bfe870(longlong param_1,byte param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (*(byte *)(param_1 + 0xc2) != param_2) {
    lVar6 = *(longlong *)(param_1 + 200);
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      *(undefined8 *)(param_1 + 200) = 0;
    }
    uVar2 = (ulonglong)param_2;
    if (uVar2 < 6) {
      if (uVar2 == 5) {
        uVar3 = FUN_01bfd1a0(&PTR_FUN_01bf13b0,1,param_1);
        *(undefined8 *)(param_1 + 200) = uVar3;
      }
      else if (uVar2 == 0) {
        uVar3 = FUN_01bfc700(&PTR_FUN_01bf0090,1,param_1);
        *(undefined8 *)(param_1 + 200) = uVar3;
      }
      else if (uVar2 == 1) {
        uVar3 = FUN_01bfcad0(&LAB_01bf0fc0,1,param_1);
        *(undefined8 *)(param_1 + 200) = uVar3;
      }
      else if (uVar2 - 2 < 2) {
        uVar3 = FUN_01bfcd40(&LAB_01bf08d8,1,param_1);
        *(undefined8 *)(param_1 + 200) = uVar3;
      }
      else if (uVar2 - 2 == 2) {
        uVar3 = FUN_01bfc930(&PTR_FUN_01bf0478,1,param_1);
        *(undefined8 *)(param_1 + 200) = uVar3;
      }
    }
    else if (uVar2 - 6 < 2) {
      uVar3 = FUN_01c07b80(&PTR_FUN_01befca0,1,param_1);
      *(undefined8 *)(param_1 + 200) = uVar3;
    }
    else if (uVar2 == 8) {
      uVar3 = FUN_01bfcff0(&LAB_01bf0c80,1,param_1);
      *(undefined8 *)(param_1 + 200) = uVar3;
    }
    else if (uVar2 == 9) {
      uVar3 = FUN_01bfd960(param_1);
      uVar3 = FUN_01bf9620(uVar3);
      pcVar4 = (code *)FUN_00411550(uVar3,0xffeb);
      lVar5 = (*pcVar4)(uVar3,param_1);
      uVar3 = (**(code **)(lVar5 + 0x20))(lVar5,1,param_1);
      *(undefined8 *)(param_1 + 200) = uVar3;
    }
    if (lVar6 != 0) {
      (**(code **)(**(longlong **)(param_1 + 200) + 0x10))(*(longlong **)(param_1 + 200),lVar6);
    }
    FUN_00410f20(lVar6);
    *(byte *)(param_1 + 0xc2) = param_2;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar6 = FUN_01c07120(*(longlong *)(param_1 + 0x80));
      if (lVar6 != 0) {
        uVar3 = FUN_01c07120(*(undefined8 *)(param_1 + 0x80));
        cVar1 = FUN_00652a50(uVar3);
        if (cVar1 == '\0') {
          plVar7 = (longlong *)FUN_01c07120(*(undefined8 *)(param_1 + 0x80));
          (**(code **)(*plVar7 + 0x358))(plVar7);
        }
      }
    }
  }
  return;
}

