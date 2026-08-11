/* Ghidra address: 01878ba0 */
/* Ghidra symbol: FUN_01878ba0 */


void FUN_01878ba0(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  FUN_00414480(param_3);
  FUN_00414480(param_4);
  FUN_00414480(param_5);
  iVar3 = 1;
  iVar4 = 1;
  iVar5 = 1;
  iVar6 = *param_2 + 1;
  iVar7 = 1;
  do {
    *param_2 = *param_2 + 1;
    if (*(short *)(param_1 + -2 + (longlong)*param_2 * 2) == 0x27) {
      if ((iVar4 == 1) && (iVar5 == 1)) {
        iVar4 = 2;
      }
      else {
        iVar4 = 1;
      }
    }
    if ((iVar4 == 1) && (*(short *)(param_1 + -2 + (longlong)*param_2 * 2) == 0x22)) {
      if (iVar5 == 1) {
        iVar5 = 2;
      }
      else {
        iVar5 = 1;
      }
    }
    if ((iVar4 == 1) && (iVar5 == 1)) {
      sVar1 = *(short *)(param_1 + -2 + (longlong)*param_2 * 2);
      if (sVar1 == 0x28) {
        iVar3 = iVar3 + 1;
      }
      else if (sVar1 == 0x29) {
        iVar3 = iVar3 + -1;
      }
      if ((*(short *)(param_1 + -2 + (longlong)*param_2 * 2) == 0x2c) && (iVar3 == 1)) {
        if (iVar7 == 1) {
          FUN_00416dc0(param_3,param_1,iVar6,*param_2 - iVar6);
        }
        else {
          FUN_00416dc0(param_4,param_1,iVar6,*param_2 - iVar6);
        }
        iVar6 = *param_2 + 1;
        iVar7 = iVar7 + 1;
      }
    }
    if (iVar3 == 0) break;
    iVar2 = FUN_00414cb0(param_1);
  } while (*param_2 < iVar2);
  if (iVar7 == 1) {
    FUN_00416dc0(param_3,param_1,iVar6,*param_2 - iVar6);
  }
  else if (iVar7 == 2) {
    FUN_00416dc0(param_4,param_1,iVar6,*param_2 - iVar6);
  }
  else if (iVar7 == 3) {
    FUN_00416dc0(param_5,param_1,iVar6,*param_2 - iVar6);
  }
  *param_2 = *param_2 + 1;
  return;
}

