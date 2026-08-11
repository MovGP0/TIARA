/* Ghidra address: 00de9350 */
/* Ghidra symbol: FUN_00de9350 */


undefined1 FUN_00de9350(double param_1,longlong *param_2,double *param_3)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  undefined1 uVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  longlong local_80 [10];
  
  (**(code **)(*param_2 + 0x2d0))(param_2,1,local_80);
  lVar2 = *(longlong *)(local_80[0] + 8);
  lVar3 = FUN_01d3aab0(lVar2,0);
  uVar5 = *(undefined1 *)(lVar3 + 8);
  dVar7 = 0.0;
  iVar6 = 1;
  if (0 < *(int *)(lVar2 + 0x20)) {
    pdVar4 = (double *)FUN_01d3aab0(lVar2,*(short *)(lVar2 + 0x20) + -1);
    dVar1 = *pdVar4;
    pdVar4 = (double *)FUN_01d3aab0(lVar2,*(short *)(lVar2 + 0x10) + -1);
    dVar8 = *pdVar4 - dVar1;
    pdVar4 = (double *)FUN_01d3aab0(lVar2,*(short *)(lVar2 + 0x10) + -1);
    if (*pdVar4 <= param_1 && param_1 != *pdVar4) {
      dVar7 = (double)FUN_0040af10((param_1 - dVar1) / dVar8);
      dVar7 = dVar7 * dVar8;
      param_1 = param_1 - dVar7;
      iVar6 = 1;
    }
  }
  while( true ) {
    if (*(int *)(lVar2 + 0x10) + -1 < iVar6) {
      *param_3 = *(double *)PTR_DAT_020011b0;
      return uVar5;
    }
    lVar3 = FUN_00b94e60(lVar2,iVar6);
    if (param_1 < *(double *)(lVar3 + 8)) break;
    uVar5 = *(undefined1 *)(lVar3 + 0x10);
    iVar6 = iVar6 + 1;
  }
  *param_3 = *(double *)(lVar3 + 8) + dVar7;
  return uVar5;
}

