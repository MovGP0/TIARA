/* Ghidra address: 012e1210 */
/* Ghidra symbol: FUN_012e1210 */


undefined8 FUN_012e1210(undefined8 param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  bool bVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar2;
  
  bVar3 = false;
  dVar6 = 1e-15;
  FUN_00414ad0(param_2,&DAT_012e1404);
  if (*param_3 == 0.0) {
    FUN_00414480(param_2);
  }
  else {
    dVar1 = *param_3;
    dVar2 = *param_3;
    if (dVar2 <= 0.0 && dVar1 != 0.0) {
      *param_3 = *param_3 * -1.0;
    }
    iVar4 = 0;
    do {
      if ((dVar6 - 1e-15 <= *param_3) &&
         (dVar5 = dVar6 * 1000.0 - 1e-15, *param_3 <= dVar5 && dVar5 != *param_3)) {
        *param_3 = *param_3 / dVar6;
        bVar3 = true;
        break;
      }
      dVar6 = dVar6 * 1000.0;
      if (iVar4 == 0) {
        FUN_00414ad0(param_2,&DAT_012e1414);
      }
      else if (iVar4 == 1) {
        FUN_00414ad0(param_2,&DAT_012e1424);
      }
      else if (iVar4 == 2) {
        FUN_00414ad0(param_2,&DAT_012e1434);
      }
      else if (iVar4 == 3) {
        FUN_00414ad0(param_2,&DAT_012e1444);
      }
      else if (iVar4 == 4) {
        FUN_00414480(param_2);
      }
      else if (iVar4 == 5) {
        FUN_00414ad0(param_2,&DAT_012e1454);
      }
      else if (iVar4 == 6) {
        FUN_00414ad0(param_2,&DAT_012e1464);
      }
      else if (iVar4 == 7) {
        FUN_00414ad0(param_2,&DAT_012e1478);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 10);
    if (dVar2 <= 0.0 && dVar1 != 0.0) {
      *param_3 = *param_3 * -1.0;
    }
    if (!bVar3) {
      FUN_00414ad0(param_2,L"Wrong input number.");
    }
  }
  return param_2;
}

