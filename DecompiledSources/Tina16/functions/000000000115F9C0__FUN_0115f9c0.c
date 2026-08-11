/* Ghidra address: 0115f9c0 */
/* Ghidra symbol: FUN_0115f9c0 */


int FUN_0115f9c0(longlong *param_1,longlong *param_2)

{
  double dVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  
  if (*(int *)(*param_2 + 0xd0) == 1) {
    dVar6 = *(double *)(*param_2 + 0xb0);
    dVar1 = *(double *)(*param_2 + 0xa8);
    iVar4 = *(int *)(*param_2 + 0xcc);
    **(undefined8 **)*param_2 = *(undefined8 *)(*param_2 + 0xa8);
    iVar5 = *(int *)(*param_2 + 0xcc) + -1;
    iVar3 = 1;
    if (0 < iVar5) {
      do {
        *(double *)(*(longlong *)*param_2 + (longlong)iVar3 * 8) =
             *(double *)(*(longlong *)*param_2 + (longlong)(iVar3 + -1) * 8) +
             (dVar6 - dVar1) / (double)(iVar4 + -1);
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    dVar6 = (double)FUN_00526500(0x4024000000000000,1.0 / (double)*(int *)(*param_2 + 200));
    **(undefined8 **)*param_2 = *(undefined8 *)(*param_2 + 0xa8);
    iVar3 = *(int *)(*param_2 + 0xcc) + -1;
    iVar4 = 1;
    if (0 < iVar3) {
      do {
        *(double *)(*(longlong *)*param_2 + (longlong)iVar4 * 8) =
             *(double *)(*(longlong *)*param_2 + (longlong)(iVar4 + -1) * 8) * dVar6;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  sVar2 = *(short *)(*param_1 + 0x1fa8);
  if (sVar2 == 0x41) {
    iVar4 = FUN_0115de00(param_1,param_2);
    if (iVar4 != 0) {
      return iVar4 * 10 + 1;
    }
  }
  else if (sVar2 == 0x46) {
    iVar4 = FUN_0115edb0(param_1,param_2);
    if (iVar4 != 0) {
      return iVar4 * 10 + 2;
    }
  }
  else {
    if (sVar2 != 0x49) {
      return 3;
    }
    iVar4 = FUN_0115f0a0(param_1,param_2);
    if (iVar4 != 0) {
      return iVar4 * 10 + 3;
    }
  }
  return 0;
}

