/* Ghidra address: 01a9dd40 */
/* Ghidra symbol: FUN_01a9dd40 */


undefined1 * FUN_01a9dd40(undefined1 *param_1,double param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar5 = 0.0;
  dVar6 = 0.0;
  dVar7 = 0.0;
  dVar8 = 1.0;
  if (param_2 == 0.0) {
    dVar5 = 1.0;
    dVar6 = 1.0;
    dVar7 = 1.0;
  }
  else {
    iVar3 = 0;
    pdVar4 = (double *)&DAT_01fcd948;
    do {
      iVar2 = iVar3;
      if (param_2 < *pdVar4) break;
      iVar3 = iVar3 + 1;
      pdVar4 = pdVar4 + 1;
      iVar2 = 9;
    } while (iVar3 != 10);
    if (iVar2 < 6) {
      if (iVar2 == 5) {
        dVar5 = (param_2 - 510.0) / 70.0;
        dVar6 = 1.0;
        dVar7 = 0.0;
      }
      else if (iVar2 - 1U == 0xffffffff) {
        dVar5 = 0.0;
        dVar6 = 0.0;
        dVar7 = 0.0;
        dVar8 = 0.0;
      }
      else if (iVar2 - 1U < 2) {
        dVar5 = (440.0 - param_2) / 60.0;
        dVar6 = 0.0;
        dVar7 = 1.0;
        if (iVar2 == 1) {
          dVar8 = ((param_2 - 380.0) * 0.7) / 40.0 + 0.3;
        }
      }
      else if (iVar2 == 3) {
        dVar5 = 0.0;
        dVar6 = (param_2 - 440.0) / 50.0;
        dVar7 = 1.0;
      }
      else if (iVar2 == 4) {
        dVar5 = 0.0;
        dVar6 = 1.0;
        dVar7 = (510.0 - param_2) / 20.0;
      }
    }
    else if (iVar2 == 6) {
      dVar5 = 1.0;
      dVar6 = (645.0 - param_2) / 65.0;
      dVar7 = 0.0;
    }
    else if (iVar2 - 7U < 2) {
      dVar5 = 1.0;
      dVar6 = 0.0;
      dVar7 = 0.0;
      if (iVar2 == 8) {
        dVar8 = ((780.0 - param_2) * 0.7) / 80.0 + 0.3;
      }
    }
    else if (iVar2 == 9) {
      dVar5 = 0.0;
      dVar6 = 0.0;
      dVar7 = 0.0;
      dVar8 = 0.0;
    }
  }
  dVar5 = (double)FUN_00526500(dVar5 * dVar8,param_3);
  uVar1 = FUN_0040c770(dVar5 * 255.0);
  param_1[2] = uVar1;
  dVar5 = (double)FUN_00526500(dVar6 * dVar8,param_3);
  uVar1 = FUN_0040c770(dVar5 * 255.0);
  param_1[1] = uVar1;
  dVar5 = (double)FUN_00526500(dVar7 * dVar8,param_3);
  uVar1 = FUN_0040c770(dVar5 * 255.0);
  *param_1 = uVar1;
  return param_1;
}

