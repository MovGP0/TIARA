/* Ghidra address: 010d7290 */
/* Ghidra symbol: FUN_010d7290 */


void FUN_010d7290(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  double dVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = FUN_017e3230(param_1,0);
  *param_3 = uVar6;
  cVar3 = FUN_017e28e0(param_1);
  if (cVar3 == '\0') {
    *param_2 = *param_3;
    cVar3 = FUN_017e28e0(param_1);
    if (cVar3 == '\0') {
      iVar2 = *(int *)(param_1 + 0x648);
      dVar1 = *(double *)(param_1 + 0x640);
      iVar4 = 1;
      iVar5 = iVar2;
      if (0 < iVar2) {
        do {
          uVar6 = FUN_017e3230(param_1,((double)iVar4 * dVar1) / (double)iVar2);
          cVar3 = FUN_017e28e0(param_1);
          if (cVar3 != '\0') {
            *param_4 = 1;
            return;
          }
          uVar7 = FUN_010c8fd0(uVar6,*param_3);
          *param_3 = uVar7;
          uVar6 = FUN_010c8fe0(uVar6,*param_2);
          *param_2 = uVar6;
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else {
      *param_4 = 1;
    }
  }
  else {
    *param_4 = 1;
  }
  return;
}

