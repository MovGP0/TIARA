/* Ghidra address: 016dc840 */
/* Ghidra symbol: FUN_016dc840 */


undefined8 FUN_016dc840(longlong param_1,char param_2,double param_3,longlong param_4)

{
  double *pdVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  
  if (param_2 == '\x06') {
    if (*(longlong *)(param_4 + 0x17) == 0) {
      uVar7 = 0;
    }
    else if (*(int *)(param_4 + 0x13) < 2) {
      uVar7 = 0;
    }
    else {
      uVar2 = FUN_0040c840(*(undefined8 *)(param_1 + 0x760));
      iVar3 = FUN_00b905f0(uVar2,0x14);
      dVar6 = **(double **)(param_4 + 0x17);
      dVar8 = (*(double **)(param_4 + 0x17))[(longlong)*(int *)(param_4 + 0x13) * 2 + -2] - dVar6;
      dVar6 = (double)FUN_0040af10((param_3 - dVar6) / dVar8);
      dVar6 = dVar6 * dVar8;
      pdVar1 = (double *)
               (*(longlong *)(param_4 + 0x17) + -0x10 + (longlong)*(int *)(param_4 + 0x13) * 0x10);
      if (*pdVar1 <= param_3 && param_3 != *pdVar1) {
        param_3 = param_3 - dVar6;
      }
      iVar4 = FUN_016dc0e0(*(longlong *)(param_4 + 0x17),*(int *)(param_4 + 0x13),param_3);
      pdVar1 = *(double **)(param_4 + 0x17);
      iVar5 = iVar4 + 1;
      dVar8 = pdVar1[(longlong)iVar5 * 2 + -2] -
              *(double *)(*(longlong *)(param_4 + 0x17) + -0x10 + (longlong)iVar4 * 0x10);
      if (iVar4 == *(int *)(param_4 + 0x13)) {
        uVar7 = 0x3ff0000000000000;
      }
      else if (iVar5 == *(int *)(param_4 + 0x13)) {
        uVar7 = FUN_016da930(param_1,dVar8,
                             *(undefined8 *)
                              (*(longlong *)(param_4 + 0x17) + -0x10 + (longlong)iVar5 * 0x10),
                             pdVar1[2] - *pdVar1,param_3,(double)iVar3);
      }
      else {
        uVar7 = FUN_016da930(param_1,dVar8,
                             *(undefined8 *)
                              (*(longlong *)(param_4 + 0x17) + -0x10 + (longlong)(iVar4 + 1) * 0x10)
                             ,*(double *)
                               (*(longlong *)(param_4 + 0x17) + -0x10 + (longlong)(iVar4 + 2) * 0x10
                               ) - *(double *)
                                    (*(longlong *)(param_4 + 0x17) + -0x10 +
                                    (longlong)(iVar4 + 1) * 0x10),param_3,(double)iVar3);
      }
      if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
        FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),
                     dVar6 + *(double *)
                              (*(longlong *)(param_4 + 0x17) + -0x10 + (longlong)(iVar4 + 1) * 0x10)
                    );
      }
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

