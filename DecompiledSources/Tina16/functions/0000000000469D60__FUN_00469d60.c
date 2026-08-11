/* Ghidra address: 00469d60 */
/* Ghidra symbol: FUN_00469d60 */


void FUN_00469d60(ushort *param_1,undefined8 param_2,int param_3,char param_4,char param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  double dVar5;
  
  if (param_3 == 0) {
    lVar4 = FUN_00465930(param_1);
    lVar1 = FUN_00465930(param_2);
    lVar4 = lVar4 + lVar1;
  }
  else if (param_3 == 1) {
    lVar4 = FUN_00465930(param_1);
    lVar1 = FUN_00465930(param_2);
    lVar4 = lVar4 - lVar1;
  }
  else {
    if (1 < param_3 - 2U) {
      FUN_00469670(param_1,param_2);
      return;
    }
    if ((param_4 == '\x05') && (param_5 == '\x05')) {
      if (param_3 == 2) {
        uVar2 = FUN_00465930(param_1);
        uVar3 = FUN_00465930(param_2);
        lVar4 = FUN_0040c860(uVar2,uVar3,10000);
      }
      else {
        uVar2 = FUN_00465930(param_1);
        uVar3 = FUN_00465930(param_2);
        dVar5 = (double)FUN_004106c0(uVar2,uVar3);
        lVar4 = (longlong)ROUND(dVar5 * 10000.0);
      }
    }
    else if (param_5 == '\x05') {
      if (param_3 != 2) {
        if ((*param_1 & 0xbfe8) != 0) {
          FUN_00460ac0(param_1);
        }
        uVar2 = FUN_00465930(param_1);
        uVar3 = FUN_00465930(param_2);
        uVar2 = FUN_004106c0(uVar2,uVar3);
        *(undefined8 *)(param_1 + 4) = uVar2;
        *param_1 = 5;
        return;
      }
      dVar5 = (double)FUN_00464710(param_1);
      lVar4 = FUN_00465930(param_2);
      lVar4 = (longlong)ROUND(dVar5 * (double)lVar4);
    }
    else if (param_3 == 2) {
      lVar4 = FUN_00465930(param_1);
      dVar5 = (double)FUN_00464710(param_2);
      lVar4 = (longlong)ROUND((double)lVar4 * dVar5);
    }
    else {
      lVar4 = FUN_00465930(param_1);
      dVar5 = (double)FUN_00464710(param_2);
      lVar4 = (longlong)ROUND((double)lVar4 / dVar5);
    }
  }
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00460ac0(param_1);
  }
  *(longlong *)(param_1 + 4) = lVar4;
  *param_1 = 6;
  return;
}

