/* Ghidra address: 0046a7a0 */
/* Ghidra symbol: FUN_0046a7a0 */


undefined8 FUN_0046a7a0(undefined2 *param_1,undefined2 *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  
  uVar6 = FUN_00469470(*param_1);
  uVar9 = (ulonglong)(byte)(&DAT_01dc437b)[uVar6 & 0xffff];
  uVar6 = FUN_00469470(*param_2);
  uVar6 = (ulonglong)(byte)(&DAT_01dc437b)[uVar6 & 0xffff];
  bVar1 = (&DAT_01dc46be)[uVar6 + uVar9 * 0xc];
  if (bVar1 < 7) {
    if (bVar1 == 6) {
      uVar7 = FUN_0046a710(param_1,param_2);
      return uVar7;
    }
    if (bVar1 < 4) {
      if (bVar1 == 3) {
        uVar4 = FUN_00462650(param_1);
        uVar5 = FUN_00462650(param_2);
        uVar7 = FUN_0046a650(uVar4,uVar5);
        return uVar7;
      }
      if (bVar1 == 0) {
        FUN_00460210();
        return 1;
      }
      if (bVar1 == 1) {
        uVar7 = FUN_0046a4f0(uVar9,uVar6);
        return uVar7;
      }
      if (bVar1 == 2) {
        uVar7 = FUN_0046a510(uVar9,uVar6,param_3);
        return uVar7;
      }
    }
    else {
      if (bVar1 == 4) {
        uVar7 = FUN_00464710(param_1);
        uVar8 = FUN_00464710(param_2);
        uVar7 = FUN_0046a6b0(uVar7,uVar8);
        return uVar7;
      }
      if (bVar1 == 5) {
        uVar7 = FUN_00465930(param_1);
        uVar8 = FUN_00465930(param_2);
        uVar7 = FUN_0046a6f0(uVar7,uVar8);
        return uVar7;
      }
    }
  }
  else if (bVar1 < 10) {
    if (bVar1 == 9) {
      uVar7 = FUN_004634b0(param_1);
      uVar8 = FUN_004634b0(param_2);
      uVar7 = FUN_0046a670(uVar7,uVar8);
      return uVar7;
    }
    if (bVar1 == 7) {
      uVar2 = FUN_00463f70(param_1);
      uVar3 = FUN_00463f70(param_2);
      uVar7 = FUN_0046a650(uVar2,uVar3);
      return uVar7;
    }
    if (bVar1 == 8) {
      uVar7 = FUN_004651a0(param_1);
      uVar8 = FUN_004651a0(param_2);
      uVar7 = FUN_0046a6d0(uVar7,uVar8);
      return uVar7;
    }
  }
  else {
    if (bVar1 == 10) {
      uVar7 = FUN_00463a50(param_1);
      uVar8 = FUN_00463a50(param_2);
      uVar7 = FUN_0046a690(uVar7,uVar8);
      return uVar7;
    }
    if (bVar1 == 0xb) {
      uVar7 = FUN_0046a3d0(param_1,param_2,param_3);
      return uVar7;
    }
  }
  FUN_00460210();
  return 1;
}

