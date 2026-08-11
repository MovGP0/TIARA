/* Ghidra address: 016dc310 */
/* Ghidra symbol: FUN_016dc310 */


undefined8 FUN_016dc310(longlong param_1,char param_2,double param_3,int *param_4)

{
  double *pdVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  
  dVar6 = 0.0;
  if (param_2 == '\x06') {
    if (*(longlong *)(param_4 + 2) == 0) {
      uVar7 = 0;
    }
    else if (*param_4 < 2) {
      uVar7 = 0;
    }
    else {
      uVar2 = FUN_0040c840(*(undefined8 *)(param_1 + 0x760));
      iVar3 = FUN_00b905f0(uVar2,0x32);
      if (0 < param_4[1]) {
        dVar6 = *(double *)(*(longlong *)(param_4 + 2) + -0x10 + (longlong)param_4[1] * 0x10);
        dVar8 = *(double *)(*(longlong *)(param_4 + 2) + -0x10 + (longlong)*param_4 * 0x10) - dVar6;
        dVar6 = (double)FUN_0040af10((param_3 - dVar6) / dVar8);
        dVar6 = dVar6 * dVar8;
        pdVar1 = (double *)(*(longlong *)(param_4 + 2) + -0x10 + (longlong)*param_4 * 0x10);
        if (*pdVar1 <= param_3 && param_3 != *pdVar1) {
          param_3 = param_3 - dVar6;
        }
      }
      iVar4 = FUN_016dc0e0(*(undefined8 *)(param_4 + 2),*param_4,param_3);
      iVar5 = iVar4 + 1;
      dVar8 = *(double *)(*(longlong *)(param_4 + 2) + -0x10 + (longlong)iVar5 * 0x10) -
              *(double *)(*(longlong *)(param_4 + 2) + -0x10 + (longlong)iVar4 * 0x10);
      if (iVar4 == *param_4) {
        uVar7 = 0x3ff0000000000000;
      }
      else if (iVar5 == *param_4) {
        iVar5 = param_4[1];
        if (iVar5 < 1) {
          uVar7 = 0x3ff0000000000000;
        }
        else {
          uVar7 = FUN_016da930(param_1,dVar8,
                               *(undefined8 *)
                                (*(longlong *)(param_4 + 2) + -0x10 + (longlong)(iVar4 + 1) * 0x10),
                               *(double *)
                                (*(longlong *)(param_4 + 2) + -0x10 + (longlong)(iVar5 + 1) * 0x10)
                               - *(double *)
                                  (*(longlong *)(param_4 + 2) + -0x10 + (longlong)iVar5 * 0x10),
                               param_3,(double)iVar3);
        }
      }
      else {
        uVar7 = FUN_016da930(param_1,dVar8,
                             *(undefined8 *)
                              (*(longlong *)(param_4 + 2) + -0x10 + (longlong)(iVar4 + 1) * 0x10),
                             *(double *)
                              (*(longlong *)(param_4 + 2) + -0x10 + (longlong)(iVar4 + 2) * 0x10) -
                             *(double *)
                              (*(longlong *)(param_4 + 2) + -0x10 + (longlong)iVar5 * 0x10),param_3,
                             (double)iVar3);
      }
      if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
        FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),
                     dVar6 + *(double *)
                              (*(longlong *)(param_4 + 2) + -0x10 + (longlong)(iVar4 + 1) * 0x10));
      }
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

